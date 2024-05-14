/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Práctica 5 - Parte 1
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 10 de mayo
   
*/

float kilogramos = 30.50;
float resultadokilogramos = kilogramos*2.2;
float amperes = 2.15;
float resultadoamperes = amperes*1000000;

const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;
 
const int N = 7;
const int entradas[N] = {A, B, C, D, E, F, G};
 
const int numeros[5][N] = {
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 0, 0, 1, 1}
};
 
void setup(){
 Serial.begin(9600);
 Serial.println("Conversor de kilogramos a libras");
 Serial.print(kilogramos);
 Serial.print("  Kilogramos a Libras es: ");
 Serial.print(resultadokilogramos);
 Serial.println(" lb");
 Serial.println("Conversor de Amperios a Microamperios");
 Serial.print(amperes);
 Serial.print("  Amperios a Microamperios es: ");
 Serial.print(resultadoamperes);
 Serial.println(" uA");
  for (int i = 0; i < N; i++) {              
    pinMode(entradas[i], OUTPUT);
    digitalWrite(entradas[i], HIGH);
  }
}

void loop(){
  for (int j = 0; j < 5; j++) {
    for (int k = 0; k < N; k++) { 
      digitalWrite(entradas[k], numeros[j][k]);
    }
    delay(1000);
  }
}
  