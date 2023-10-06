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


void setup()
{
  pinMode(Vermelho, OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(PedVerde, OUTPUT);
  pinMode(PedVermelho, OUTPUT);
  pinMode(Botao, INPUT);
  pinMode(ledMulta, OUTPUT);
  pinMode(sensorMulta, INPUT);
  
  
  
}

void loop()
{
  tempoPare = 150;
  tempoSigaa = 100;
  tempoAtencao = 50;

  for(int i; i <100; i++){
    if(digitalRead(sensorMulta)){
 
 digitalWrite(Vermelho, HIGH);
 digitalWrite(ledMulta, HIGH);
 digitalWrite(PedVerde, HIGH);
      delay(tempoPare);
 digitalWrite(Vermelho, LOW);
 digitalWrite(ledMulta, LOW);
 digitalWrite(PedVerde, LOW);
      }
    else{
 digitalWrite(Vermelho, HIGH);
 digitalWrite(PedVerde, HIGH);
      delay(tempoPare);
 digitalWrite(Vermelho, LOW);
 digitalWrite(PedVerde, LOW);
 
      }
   
  }
     delay(100);
  
  for(int i; i < 100; i++){
    if (digitalRead(Botao)){
      for(int i; i <100; i++ ){
        if(digitalRead(sensorMulta)){
 digitalWrite(Vermelho, HIGH);
 digitalWrite(ledMulta, HIGH);
 digitalWrite(PedVerde, HIGH);
     delay(tempoPare);
 digitalWrite(Vermelho, LOW);
 digitalWrite(ledMulta, LOW);
 digitalWrite(PedVerde, LOW);
 
        }
    }
    }else{
 digitalWrite(Vermelho, HIGH);
 digitalWrite(PedVerde, HIGH);
     delay(tempoPare);
 digitalWrite(Vermelho, LOW);
 digitalWrite(PedVerde, LOW);
 
    }
  break;
    else{
    digitalWrite(Verde, HIGH);
    digitalWrite(PedVermelho, HIGH);
      delay(tempoSigaa);
    digitalWrite(Verde, LOW);
    digitalWrite(PedVermelho, LOW);    
     }
    delay(100);
    
      for(int i; i < 100; i++){
    if (digitalRead(Botao)){
      for(int i; i <100; i++ ){
        if(digitalRead(sensorMulta)){
 digitalWrite(Vermelho, HIGH);
 digitalWrite(ledMulta, HIGH);
 digitalWrite(PedVerde, HIGH);
     delay(tempoPare);
 digitalWrite(Vermelho, LOW);
 digitalWrite(ledMulta, LOW);
 digitalWrite(PedVerde, LOW);
 
        }
    }
    }else{
 digitalWrite(Vermelho, HIGH);
 digitalWrite(PedVerde, HIGH);
     delay(tempoPare);
 digitalWrite(Vermelho, LOW);
 digitalWrite(PedVerde, LOW);
    }
    } break;
  
        else{
    digitalWrite(Amarelo, HIGH);
    digitalWrite(PedVermelho, HIGH);
      delay(tempoAtencao);
    digitalWrite(Amarelo, LOW);
    digitalWrite(PedVermelho, LOW);    
     }
    delay(100);
    
    
  }
  
 
  }