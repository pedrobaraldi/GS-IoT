#include <WiFi.h>
#include <PubSubClient.h>

#include "DHTesp.h"
const int DHT_PIN = 23;
DHTesp dhtSensor;

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* mqtt_server = "test.mosquitto.org";


WiFiClient WOKWI_Client; 
PubSubClient client(WOKWI_Client);

void setup_wifi() {

  delay(10);
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");

    if (client.connect("WOKWI_Client")) {
      Serial.println("connected");
      
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      delay(5000);
    }
  }
}

void setup() {
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);     
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);
}

void Conecta_WiFi()
{
  if(WiFi.status())
  digitalWrite(2,HIGH);
  else
  digitalWrite(2,LOW);
}

void Conecta_MQTT()
{
  if(client.connected())
  digitalWrite(15,HIGH);
  else
  digitalWrite(15,LOW);
}

void DHT_Envia() {
    TempAndHumidity data = dhtSensor.getTempAndHumidity();
    client.publish("WOKWI_DHT_TEMP", String(data.temperature).c_str()); 
    client.publish("WOKWI_DHT_UMID", String(data.humidity).c_str());     
    delay(2000);
}
void loop() 
{
reconnect();    //Função que faz conexão com MQTT
Conecta_WiFi(); //Função que aciona o LED se conectado ao WiFi
Conecta_MQTT(); //Função que aciona o LED se conectado ao MQTT
DHT_Envia();
}