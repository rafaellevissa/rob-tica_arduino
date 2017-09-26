//Código feito pelo aluno André Feliciano do curso de robótica com arduino 2017.1
//Escola do arduino
//Programa : Acionar os motores pela Serial para teste
//
//           A - Aciona motor 1 sentido frente
//           S - Freia motor 1                    
//           D - Aciona motor 1 sentido tras
//           F - Freia motor 1                  
//
//           H - Aciona motor 2 sentido frente
//           J - Freia motor 2                    
//           K - Aciona motor 2 sentido tras
//           L - Freia motor 2                  
//
//  
//
//
//
// Autor : André Luchon



//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 2;
int IN2 = 4;
int pinoVelocidadeDireita = 3;

int IN3 = 5;
int IN4 = 7;
int pinoVelocidadeEsquerda = 6;

int velocidade=128;

const int ledDireito =  9;  
const int ledEsquerdo =  8;      


void setup() {
  
            //Define os pinos como saida
     pinMode(IN1, OUTPUT);
     pinMode(IN2, OUTPUT);
     pinMode(IN3, OUTPUT);
     pinMode(IN4, OUTPUT);
     pinMode(pinoVelocidadeDireita, OUTPUT);
     pinMode(pinoVelocidadeEsquerda, OUTPUT);

    
     pinMode(ledDireito, OUTPUT);
     pinMode(ledEsquerdo, OUTPUT);

     digitalWrite(ledDireito,LOW);
     digitalWrite(ledEsquerdo,LOW);

     Serial.begin(9600);
     Serial.println("\t Motores da direita do carro");
     Serial.println("" );
     Serial.println("A - Aciona para frente " );
     Serial.println("S - Freia  " );                   
     Serial.println("D - Aciona para tras" );
     Serial.println("F - Para " );                 
     Serial.println("" );
     Serial.println("\t Motores da esquerda do carro");
     Serial.println("" );
     Serial.println("H - Aciona para frente" );
     Serial.println("J - Freia  " );                 
     Serial.println("K - Aciona para tras" );
     Serial.println("L - Para  " ); 
     Serial.println("");
     Serial.println("Velocidade do motor 1 até 9 e 0. Correspondendo 10% até 100% .");
     Serial.println(" ");
     Serial.println(" \t let's GO !!"); 
     Serial.println(" ");   

   
 
}
 
void loop() {

      if(Serial.available()>0) {       // continua se tiver dados na serial
           int entrada =Serial.read();      // lê os dados da serial
           //Serial.print(entrada);   

           switch (entrada) {
              case 'a':
                  digitalWrite(IN1,LOW);  
                  digitalWrite(IN2,HIGH);
                  analogWrite(pinoVelocidadeDireita,velocidade);
                  digitalWrite(ledDireito,HIGH);
                  Serial.println("case a " );
                  break;
              case 's' :
                  digitalWrite(IN1,HIGH);  
                  digitalWrite(IN2,HIGH);
                  digitalWrite(ledDireito,LOW);
                  Serial.println("case s " );
                  break;
              case 'd':
                  digitalWrite(IN1,HIGH);  
                  digitalWrite(IN2,LOW);
                  analogWrite(pinoVelocidadeDireita,velocidade);
                  digitalWrite(ledDireito,HIGH);
                  Serial.println("case d " );
                  break;
              case 'f':
                  digitalWrite(IN1,LOW);  
                  digitalWrite(IN2,LOW);
                  digitalWrite(ledDireito,LOW);
                  Serial.println("case f " );
                  break;
              case 'h':
                  digitalWrite(IN3,HIGH);  
                  digitalWrite(IN4,LOW);
                  analogWrite(pinoVelocidadeEsquerda,velocidade);
                  digitalWrite(ledEsquerdo,HIGH);
                  Serial.println("case h " );
                  break;
              case 'j' :
                  digitalWrite(IN3,HIGH);  
                  digitalWrite(IN4,HIGH);
                  digitalWrite(ledEsquerdo,LOW);
                  Serial.println("case j " );
                  break;
              case 'k':
                  digitalWrite(IN3,LOW);  
                  digitalWrite(IN4,HIGH);
                  analogWrite(pinoVelocidadeDireita,velocidade);
                  digitalWrite(ledEsquerdo,HIGH);
                  Serial.println("case k " );
                  break;
              case 'l':
                  digitalWrite(IN3,LOW);  
                  digitalWrite(IN4,LOW);
                  digitalWrite(ledEsquerdo,LOW);
                  Serial.println("case l " );
                  break;
              
              case '1':
                  velocidade=26;
                  Serial.println("Velocidade 10% " );
                  break;
              case '2':
                  velocidade=51;
                  Serial.println("Velocidade 20% " );
                  break;
              case '3':
                  velocidade=77;
                  Serial.println("Velocidade 30% " );
                  break;
              case '4':
                  velocidade=102;
                  Serial.println("Velocidade 40% " );
                  break;
              case '5':
                  velocidade=128;
                  Serial.println("Velocidade 50& " );
                  break;
              case '6':
                  velocidade=153;
                  Serial.println("Velocidade 60% " );
                  break;
              case '7':
                  velocidade=179;
                  Serial.println("Velocidade 70% " );
                  break;
              case '8':
                  velocidade=204;
                  Serial.println("Velocidade 80% " );
                  break;
              case '9':
                  velocidade=230;
                  Serial.println("Velocidade 90% " );
                  break;
              case '0':
                  velocidade=255;
                  Serial.println("Velocidade 100% " );
                  break;
                               
           } 
           
    }
 
}
