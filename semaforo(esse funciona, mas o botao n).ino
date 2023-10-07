// C++ code
//
int Vermelho = 7;
int Amarelo = 6;
int Verde = 5;
int PedVerde = 3;
int PedVermelho = 2;
int sensorMulta = 8;
int ledMulta = 9;
int Botao = 4;


int tempoPare;
int tempoAtencao;
int tempoSigaa;

bool interromperSemaf = false;

void setup() {
  pinMode(Vermelho, OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(PedVerde, OUTPUT);
  pinMode(PedVermelho, OUTPUT);
  pinMode(Botao, INPUT_PULLUP);
  pinMode(ledMulta, OUTPUT);
  pinMode(sensorMulta, INPUT);

  
  tempoPare = 15000; 
  tempoSigaa = 10000; 
  tempoAtencao = 5000; 
}

void loop() {
  if (!interromperSemaf) {
  
    digitalWrite(Vermelho, HIGH);
    digitalWrite(Amarelo, LOW);
    digitalWrite(Verde, LOW);
    digitalWrite(PedVerde, HIGH);
    digitalWrite(PedVermelho, LOW);
    delay(tempoPare);
    
    if (!interromperSemaf) {
      digitalWrite(Vermelho, LOW);
      digitalWrite(Amarelo, LOW);
      digitalWrite(Verde, HIGH);
      digitalWrite(PedVerde, LOW);
      digitalWrite(PedVermelho, HIGH);
      delay(tempoSigaa);
      
      if (!interromperSemaf) {
        digitalWrite(Vermelho, LOW);
        digitalWrite(Amarelo, HIGH);
        digitalWrite(Verde, LOW);
        digitalWrite(PedVerde, LOW);
        digitalWrite(PedVermelho, HIGH);
        delay(tempoAtencao);
      }
    }
  } else {
    
    digitalWrite(Vermelho, HIGH);
    digitalWrite(Amarelo, LOW);
    digitalWrite(Verde, LOW);
    digitalWrite(PedVerde, HIGH);
    digitalWrite(PedVermelho, LOW);
  }

  
  if (digitalRead(Botao)) {
    interromperSemaf = true; 
    delay(tempoPare); 
    interromperSemaf = false; 
  }

  
  if (digitalRead(sensorMulta) && !interromperSemaf) {
    digitalWrite(ledMulta, HIGH); 
    delay(2000); 
    digitalWrite(ledMulta, LOW); 
  }
}