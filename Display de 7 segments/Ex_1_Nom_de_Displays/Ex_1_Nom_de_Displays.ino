/**********************************************************************************
**                                                                               **
**                             NOM AMB DISPLAY                                   **
**                Sergi Viñals                                                   **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11; 
const byte segdot = 2; 
long int t = 900;
long int a = 1200;  // temps nomes per al punt del display.

//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
     //Aquest és per fer la S
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);     // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  digitalWrite(segdot, LOW);    // posar a 5V el pin 2

  delay(t);                  // es queden leds tms encesos
  
       //Aquest és per fer la E
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);     // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  digitalWrite(segdot, LOW);    // posar a 5V el pin 2

  delay(t);                  // es queden leds tms encesos 

     //Aquest és per fer la R
  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);     // posar a 5V el pin 8
  digitalWrite(segE, HIGH);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  digitalWrite(segdot, LOW);    // posar a 5V el pin 2

  delay(t);                  // es queden leds tms encesos
  
       //Aquest és per fer la G
  digitalWrite(segA, HIGH);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, HIGH);     // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, HIGH);    // posar a 5V el pin 10
  digitalWrite(segG, HIGH);    // posar a 5V el pin 11
  digitalWrite(segdot, LOW);    // posar a 5V el pin 2

  delay(t);                  // es queden leds tms encesos
  
       //Aquest és per fer la I
  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, HIGH);    // posar a 5V el pin 6
  digitalWrite(segC, HIGH);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);     // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11
  digitalWrite(segdot, LOW);    // posar a 5V el pin 2
  
  delay(t);                  // es queden leds tms encesos
  //Aquest és per fer el Punt

  digitalWrite(segA, LOW);    // posar a 5V el pin 5
  digitalWrite(segB, LOW);    // posar a 5V el pin 6
  digitalWrite(segC, LOW);    // posar a 5V el pin 7
  digitalWrite(segD, LOW);     // posar a 5V el pin 8
  digitalWrite(segE, LOW);    // posar a 5V el pin 9
  digitalWrite(segF, LOW);    // posar a 5V el pin 10
  digitalWrite(segG, LOW);    // posar a 5V el pin 11
  digitalWrite(segdot, HIGH);    // posar a 5V el pin 2
  
  delay(a);                  // es queden leds tms encesos

}

//********** Funcions *************************************************************
