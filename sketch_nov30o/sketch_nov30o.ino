
int BlancoA=2; // (A= Adelante) y (R= Reversa)
int BlancoR=3;
int AzulA=5;
int AzulR=4;

void setup() {
  // put your setup code here, to run once:
    pinMode (BlancoA , OUTPUT);
    pinMode (BlancoR , OUTPUT);
    pinMode (AzulA , OUTPUT);
    pinMode (AzulR , OUTPUT);

}

void loop() {
  Adelante ();
  Atras();
  Girar_azul();
  Girar_blanco();

}

 void Adelante (){
 digitalWrite(BlancoA, HIGH);
 digitalWrite(BlancoR, LOW);
 digitalWrite(AzulA, HIGH);
 digitalWrite(AzulR, LOW);

 delay(500);
 }

 void Atras (){
 digitalWrite(BlancoA, LOW);
 digitalWrite(BlancoR, HIGH);
 digitalWrite(AzulA, LOW);
 digitalWrite(AzulR, HIGH);

 delay(500);
 }

void Girar_azul (){
 digitalWrite(BlancoA, HIGH)
 digitalWrite(BlancoR, LOW);
 digitalWrite(AzulA, LOW);
 digitalWrite(AzulR, HIGH);

 delay(500);
}

 void Girar_blanco(){
 digitalWrite(BlancoA, LOW)
 digitalWrite(BlancoR, HIGH);
 digitalWrite(AzulA, HIGH);
 digitalWrite(AzulR, LOW);

 delay(500);
 }


