// CC BY-NC-SA 3.0 ES Alejandro Pérez

const int rele1 = 7;
const int rele2 = 6;
const int boton_1 = 5;
const int boton_2 = 4;

const int LDR = A0;
const int umbral = 512;

int LDR_valor = 0;


void setup(){

  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);

  pinMode(boton_1, INPUT_PULLUP);
  pinMode(boton_2, INPUT_PULLUP);

  pinMode(LDR, INPUT);

}


void loop(){

  toggleRelay();

}


void toggleRelay(){

  int estado_B1 = digitalRead(boton_1);
  int estado_B2 = digitalRead(boton_2);
  LDR_valor = analogRead(LDR);


  if (LDR_valor < umbral){
    digitalWrite(rele1, LOW);
    digitalWrite(rele2, HIGH);
  } else {
    digitalWrite(rele1, HIGH);
    digitalWrite(rele2, LOW);
  }


  if (estado_B1 == LOW){
    digitalWrite(rele1, HIGH);
    digitalWrite(rele2, LOW);
  } else if (estado_B2 == LOW){
    digitalWrite(rele1, LOW);
    digitalWrite(rele2, HIGH);
  }

}
