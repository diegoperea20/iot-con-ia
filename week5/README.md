# ESP32 INSTALACION CON EDGE IMPULSE
<p align="justify">
Para instalar edge impulse en el ESP32 ir a:
</p>

https://docs.edgeimpulse.com/docs/tools/edge-impulse-cli/cli-installation


1. Tener ya instalado Python3 y Node.js (instalado npm)

2. Pegar este comando :
```python
npm install -g edge-impulse-cli --force
```
Sí sale error al instalarlo saliendo que se necesita Visual Studio con dependecnicas de C++ 

Instalar Visual Studio

<p align="center">
  <img src="README-images5\visual-studio.PNG" alt="StepLast">
</p>
<p align="center">
  <img src="README-images5\instalation-option.PNG" alt="StepLast">
</p>

Ya instalado Visual Studio 
ejecutar
```python
npm install -g edge-impulse-cli --force
```
3. Instalado edge impulse cli ejecutar este comando: (dado en la documentacion https://docs.edgeimpulse.com/docs/tools/edge-impulse-cli/cli-data-forwarder  )

```python
edge-impulse-data-forwarder
```
Sí es tu segunda vez usa
```python
edge-impulse-data-forwarder --clean
```
Si usando edge-impulse-data-forwarder te sale error:

[SER] Failed to get information off device No valid sensor readings received from device: . Note that the data forwarder can only auto-detect frequencies >2Hz. You can override the frequency via --frequency

Mira en tu codigo que la frecuencia de datos sea > 2Hz como lo seria un delay(333);// 3Hz y usa :

```python
#edge-impulse-data-forwarder --frequency NumerodeFrecuencia
edge-impulse-data-forwarder --frequency 3
```
Sí te sale el mismo error confiura los baudios , si en tu codigo de ESP32 tienes Serial.begin(9600) entonces seria:
```python
#edge-impulse-data-forwarder --baud-rate NumeroDeBaudios
edge-impulse-data-forwarder --baud-rate 9600
```
4. Selecciona el proyecto donde quieres dar el envio de datos
5. Recordar que el envio de datos debes ser separado por coma (,) es decir de esta manera (PrimerDato,SegundoDato ), por ejemplo temperatura y humedad seria: 18,60    
6. dar nombre de variable separado por coma (,) ejemplo: temp , hum
7. Dale nombre al dispositivo 
8. Toma de datos (Data acquisition)