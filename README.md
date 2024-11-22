# Monitoramento de Temperatura e Umidade com ESP32 e Node-RED
Link do video no YouTube: [Veja o video](https://youtu.be/Scx7vx8w3jU)  
Link do projeto no Wokwi: [Clique aqui](https://wokwi.com/projects/414485137960169473) 

Este projeto utiliza um **ESP32** conectado a um **sensor DHT22** para medir temperatura e umidade. Os dados são enviados para um broker MQTT e visualizados no **Node-RED**.

![image](https://github.com/user-attachments/assets/3eeb27c5-dd93-484e-ae5c-7fa9d2ced43d)

---

## Funcionalidades

- **Medição de temperatura e umidade** com o sensor DHT22.  
- **Indicação visual** de conexão com Wi-Fi e MQTT por LEDs.  
- **Publicação de dados** via protocolo MQTT.  
- **Visualização no Node-RED**, incluindo gráficos.

---

## Componentes e Conexões

### Componentes Necessários

- ESP32  
- Sensor DHT22  
- Resistores  
- LEDs  

### Esquema de Ligação  

**DHT22**  
- VCC → 3.3V (ESP32)  
- GND → GND (ESP32)  
- DATA → Pino GPIO 23 (ESP32)  

**LEDs**  
- LED azul → Pino GPIO 2 (indica conexão Wi-Fi)  
- LED roxo → Pino GPIO 15 (indica conexão MQTT)  
- Ambos conectados ao GND através de resistores.  

---

## Resultado Esperado  

- **LED azul aceso**: conexão Wi-Fi estabelecida.  
- **LED roxo aceso**: conexão ao broker MQTT.  
- **Dados em tempo real no Node-RED**: visualização de temperatura e umidade em gráficos e medidores.

↳ **LINK DE ACESSO AO DASHBOARD:** [http://localhost:1880/dashboard/page1]  


---

## Configuração do Node-RED  

![image](https://github.com/user-attachments/assets/05b1346e-2264-4496-9fd1-422649eddc0d)

O fluxo do Node-RED está exportado no arquivo [`node_red_config.json`](https://github.com/pedrobaraldi/GS-IoT/blob/main/node_red_config.json).  

### Instalar extensão:
1. Abra o Node-RED.
2. Clique no menu no canto superior direito (três linhas horizontais) e selecione **Settings**.
3. No canto esquerdo da aba que ira abrir (User Settings) selecione **Palette**.
4. Clique em **Install** e baixe as seguintes extensoes.

  ![Captura de tela 2024-11-22 162112](https://github.com/user-attachments/assets/e9407bf2-6c21-4bc5-8434-a8c6ab414706)


### Como importar:    
1. Abra o Node-RED.  
2. Clique no menu no canto superior direito (três linhas horizontais) e selecione **Importar**.  
3. Carregue o arquivo `node_red_config.json`.  
4. Configure os tópicos MQTT e o broker:
   - Tópico para temperatura: `WOKWI_DHT_TEMP`.  
   - Tópico para umidade: `WOKWI_DHT_UMID`.  
   - Broker: `test.mosquitto.org`.  

Após importar, o fluxo estará pronto, incluindo gráficos e medidores de temperatura e umidade.  

---
# Integrantes e RM
-> Julia Akemi | RM: 98032

-> Mateus Fattori | RM: 97904 

-> Bianca Barreto | RM: 551848

-> Pedro Baraldi Sa | RM: 98060
