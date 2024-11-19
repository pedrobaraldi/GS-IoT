# Monitoramento de Temperatura e Umidade com ESP32 e Node-RED
### Link do projeto no Wokwi [https://wokwi.com/projects/414485137960169473]
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
### DHT22
- VCC: 3.3V (ESP32)
- GND: GND (ESP32)
- DATA: Pino GPIO 23 (ESP32)
### LEDs
- LED azul: Pino GPIO 2 (indica conexão Wi-Fi)
- LED roxo: Pino GPIO 15 (indica conexão MQTT)
- Ambos conectados ao GND através de resistores.

## Resultado Esperado
- O LED azul acende ao conectar ao Wi-Fi.
- O LED roxo acende ao conectar ao broker MQTT.
- Dados de temperatura e umidade são exibidos no Node-RED em tempo real.

  ↳ LINK DE ACESSO AO DASHBOARD [http://localhost:1880/dashboard/page1]

# Configuração do Node-RED
  ![image](https://github.com/user-attachments/assets/b6499790-36b6-451e-81fe-b13409240cde)
### O fluxo do Node-RED está exportado no arquivo node_red_config.json, incluído neste repositório. Para importar, siga os passos abaixo:
1. Abra o Node-RED.
2. Clique no menu no canto superior direito (três linhas horizontais) e selecione Importar.
3. Carregue o arquivo node_red_config.json.
4. Verifique se os tópicos MQTT e o broker estão configurados corretamente: 4 * Tópico para temperatura: WOKWI_DHT_TEMP. 4 * Tópico para umidade: WOKWI_DHT_UMID. 4 * Broker: test.mosquitto.org.
Com isso, o fluxo estará pronto para uso, incluindo gráficos e medidores de temperatura e umidade.


### Integrantes
-> Julia Akemi | RM: 98032

-> Mateus Fattori | RM: 97904 

-> Bianca Barreto | RM: 551848

-> Pedro Baraldi Sa | RM: 98060
