// CC BY-NC-SA 3.0 ES Alejandro Pérez

int rele1 = 9;
int rele2 = 8;
int led1 = 7;
int led2 = 6;

bool boton1 = LOW;
bool boton2 = LOW;

const int LDR = A0;
const int umbral = 400;

void setup(){

  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);

  digitalWrite(rele1, LOW);
  digitalWrite(rele2, LOW);

  pinMode(boton1, INPUT);
  pinMode(botn2, INPUT);

  pinMode(LDR, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}


void loop(){

  boton1 = digitalRead(boton1);

  if ( boton1 == HIGH){
    digitalWrite(rele1, HIGH);
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(rele2, LOW);
    digitalWrite(led1, LOW);
  }


  boton2 = digitalRead(boton2);

  if (boton2 == HIGH){
    digitalWrite(rele2, HIGH);
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(rele2, LOW);
    digitalWrite(led1, LOW);
  }


  int entrada = analogRead(LDR);

  if (entrada > umbral){
    digitalWrite(rele1, HIGH);
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(rele1, LOW);
    digitalWrite(led2, LOW);
  }

  if (entrada < umbral){
    digitalWrite(rele2, HIGH);
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(rele2, LOW);
    digitalWrite(led2, LOW);
  }

}