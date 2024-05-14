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
#define pausa delay(1000);
#define buzzer A1
#define foco A0
#define pausa2 delay(2000);

const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

const int N = 7;
const int entradas[N] = {A, B, C, D, E, F, G};
 
const int numeros[10][N] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 1, 1}
};



void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(foco, OUTPUT);
  digitalWrite(foco, HIGH);
  for (int i = 0; i < N; i++) {              
    pinMode(entradas[i], OUTPUT);
    digitalWrite(entradas[i], LOW);
  }
}

void print(int d){
  for(int i = 0; i < N; i++){
    digitalWrite(entradas[i], numeros[d][i]);
  }
}

void loop() {
for(int i = 9; i >= 0; i--) {
    print(i);
    pausa
    if( i == 0){
    tone(buzzer, 600);
    digitalWrite(foco, LOW);
    pausa2
    noTone(buzzer);
    digitalWrite(foco, HIGH);

  }
 }
}
