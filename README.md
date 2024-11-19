# Monitoramento de Temperatura e Umidade com ESP32 e Node-RED
Este projeto utiliza um ESP32 conectado a um sensor DHT22 para medir temperatura e umidade. Os dados são enviados para um broker MQTT e visualizados no Node-RED.

![image](https://github.com/user-attachments/assets/9b22713c-2046-4b52-9851-80cabe1e9021)

### Funcionalidades
- Medição de temperatura e umidade com o sensor DHT22.
- Indicação visual de conexão com Wi-Fi e MQTT por LEDs.
- Publicação dos dados via protocolo MQTT.
- Visualização dos dados no Node-RED, incluindo gráficos.

## Componentes e Conexões
### Componentes necessários:
- ESP32
- Sensor DHT22
- Resistores
- LEDs
### Esquema de ligação:
### - DHT22
- VCC: 3.3V (ESP32)
- GND: GND (ESP32)
- DATA: Pino GPIO 23 (ESP32)
### - LEDs
- LED azul: Pino GPIO 2 (indica conexão Wi-Fi)
- LED roxo: Pino GPIO 15 (indica conexão MQTT)
- Ambos conectados ao GND através de resistores.


























### Integrantes
-> Julia Akemi | RM: 98032

-> Mateus Fattori | RM: 97904 

-> Bianca Barreto | RM: 551848

-> Pedro Baraldi Sa | RM: 98060
