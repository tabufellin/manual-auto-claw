
#include <Servo.h>;

Servo servoy;
Servo servox;
Servo servoz;

int potx = 2;
int poty = 3;
int potz = 4;

int x = 0;
int y = 0 ;
int z = 0;

int lista[14];
int coordenadas[ ] = {x, y, z};
int mega_lista[5];
int nueva_lista[3];

int k = 0;
int a = 0;
int j = 0;

int n = 0;
int w = 1;
int g = 2;

int h = 0;
int i = 1;
int o = 2;



void setup() {
  Serial.begin(9600);
  servox.attach(10); //Servo x asignado a pin 6
  servoy.attach(11); //Servo y asignado a pin 7
  servoz.attach(12); //Servo z asignado a pin 8

}

void loop() {

  //for (int i=0; i<=4; i++) {

  Serial.println("Ingrese cualquier letra para guardar una posición");
  //  while (!Serial.available()){}
  Serial.read();

  int x = analogRead(potx);
  int y = analogRead(poty);
  int z = analogRead(potz);

  x = map(x, 0, 1023, 50, 120);
  y = map(y, 0, 1023, 50, 90);
  z = map(z, 0, 1023, 40, 150);

  servox.write(x);
  servoy.write(y);
  servoz.write(z);

  if (Serial.available() > 0) {

    int x = analogRead(potx);
    int y = analogRead(poty);
    int z = analogRead(potz);

    x = map(x, 0, 1020, 50, 120);
    y = map(y, 0, 1020, 50, 90);
    z = map(z, 0, 1020, 40, 150);

   // servox.write(x);
   // servoy.write(y);
   // servoz.write(z);

    Serial.println(x);
    Serial.println(y);
    Serial.println(z);
    lista[h] = x;
    lista[i] = y;
    lista[o] = z;
    Serial.println(lista[h]);
    Serial.println(lista[i]);
    Serial.println(lista[o]);

    Serial.flush();

    a = a + 1;
    h = h + 3;
    i = i + 3;
    o = o + 3 ;

  }



  if (a >= 5) {
    Serial.println("hola,holaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholaholahola");


    for (int r = 0; r <= 4; r++) {
      //int nueva_lista[3]={mega_lista[a]};
      // servox.write(90);
      // servoy.write(90);
      //  servoz.write(90);

      servox.write(lista[n]);
      Serial.println(lista[n]);
      n = n + 3;

      servoy.write(lista[w]);
      Serial.println(lista[w]);
      w = w + 3;

      servoz.write(lista[g]);
      Serial.println(lista[g]);
      g = g + 3;

      delay (1000);
    }
    n=0;
    w=1;
    g=2;

  }



}
