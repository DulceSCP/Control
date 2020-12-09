int izquierda = 6; // pin 13 asignado para señal de salidada derecha
int boton1 = 2; // pin 2 asignado para el pulsador derecha 

int derecha = 8; // pin 14 asignado para señal de salidada izquierda
int boton2 = 3; // pin 2 asignado para el pulsador izquierda

int arranque = 4; 
int enclavamiento = 7; 
int paro = 5;
int estado = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(izquierda, OUTPUT); 
pinMode(boton1, INPUT); 
pinMode(derecha, OUTPUT); 


pinMode(paro, INPUT); 
pinMode(enclavamiento, OUTPUT); 
pinMode(arranque, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(izquierda, HIGH);
digitalWrite(derecha, HIGH);
digitalWrite(enclavamiento, HIGH);

arranque = digitalRead(4);
paro = digitalRead(5);
enclavamiento = estado;
//logica de enclavamiento
{if (arranque == HIGH) {
estado = HIGH;
}
if (estado == HIGH) {
digitalWrite(7,LOW);
}
else {
digitalWrite(7,HIGH);
}
if (paro == HIGH) {
estado = LOW;
}}
//LOGICA DE SENTIDO DE GIRO
  {if ((digitalRead(boton1) == HIGH)&&(derecha == HIGH)) {
  digitalWrite(izquierda,LOW);
  digitalWrite(derecha, HIGH);
  delay(3000);
  digitalWrite(izquierda,HIGH);
  digitalWrite(derecha, HIGH);
  }
  else if ((digitalRead(boton2) == HIGH)&&(izquierda == HIGH)) {
  digitalWrite(derecha, LOW); 
  digitalWrite(izquierda, HIGH);
  delay(3000);
  digitalWrite(derecha, HIGH); 
  digitalWrite(izquierda, HIGH);
  }
  else {
    digitalWrite(izquierda, HIGH);
    digitalWrite(derecha, HIGH);
    }
    }}
    
