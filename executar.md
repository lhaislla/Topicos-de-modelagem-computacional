#Projeto

* Trocar o mqtt_server,ssid,password(no arduino  e compilar)

* Na VM compilar o mqtt_lamp(protocolo):
  - Abrir o pront comanda na pasta do diretorio(Desketop/Topicos-de-modelagem-computacional/Projeto1/lamp3/lamp3_c)
  - Executar o arquivo ./mqtt_lamp
  
* Executar o sub:
  - Em outra janela do pront comando
  - mosquitto_sub -h localhost -p 1883 -t "b1 ou topico de sub"
  
* Apertar botão do arduino, para que a mensagem seja publicada 
  
 

 
