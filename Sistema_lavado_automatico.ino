//SISTEMA DE LAVADO AUTOMATICO...

int sensor = 7;// variable para el definir el pin de nuestro sensor
int valor = 0;// variable que almacenara los estados del sensor.
int motor = 4;// variable para definir el pin de nuestro motor.

void setup() {
  Serial.begin(9600);// bits por segundo, activar el serie.
  pinMode(sensor,INPUT);//definir el modo del pin como entrada.
  pinMode(motor,OUTPUT);// definir el modo del pin como salida

  digitalWrite(motor,HIGH);// señal alta del rele-apagar motor.
  
}

void loop() {
  
 valor = digitalRead(sensor);//recopilar datos mediante una lectura digital

if(valor == 0){// condicional
  digitalWrite(motor,LOW);//motor encendido
  delay(2500);//2 segundos y medio de espera.
 
}
else{
  digitalWrite(motor,HIGH);// encendemos el rele - apagamos el motor
}

}
