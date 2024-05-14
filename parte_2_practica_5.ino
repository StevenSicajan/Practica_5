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
#define buzzer A1

int Do=261; 
int re=294;
int mi=329;
int fa=349;
int sol=391;
int solS=415;
int la=440;
int laS=455;
int si=466;
int doH=523;
int doSH=554;
int reH=587;
int reSH=622;
int miH=659;
int faH=698;
int faSH=740;
int solH=783;
int solSH=830;
int laH=880;
void setup()    {    
  pinMode(buzzer, OUTPUT); 
}    
 
void loop(){
  tone(buzzer, la, 500);
  delay(550);
  tone(buzzer, la, 500);
  delay(550);     
  tone(buzzer, la, 500); 
  delay(550);
  tone(buzzer, fa, 350);  
  delay(400);
  tone(buzzer, doH, 150);
  delay(200);    
  tone(buzzer, la, 500);
  delay(550);
  tone(buzzer, fa, 350);
  delay(400);
  tone(buzzer, doH, 150);
  delay(200);
  tone(buzzer, la, 1000);   
  delay(1050);
  tone(buzzer, miH, 500);
  delay(550);
  tone(buzzer, miH, 500);
  delay(550);
  tone(buzzer, miH, 500); 
  delay(550);   
  tone(buzzer, faH, 350);
  delay(400); 
  tone(buzzer, doH, 150);
  delay(200);
  tone(buzzer, solS, 500);
  delay(550);
  tone(buzzer, fa, 350);
  delay(400);
  tone(buzzer, doH, 150);
  delay(200);
  tone(buzzer, la, 1000);
  delay(1050);  
  tone(buzzer, laH, 500);
  delay(550);
  tone(buzzer, la, 350);
  delay(400); 
  tone(buzzer, la, 150);
  delay(200);
  tone(buzzer, laH, 500);
  delay(550);
  tone(buzzer, solSH, 250); 
  delay(350);
  tone(buzzer, solH, 250);
  delay(300);
  tone(buzzer, faSH, 125);
  delay(175);
  tone(buzzer, faH, 125);
  delay(175);    
  tone(buzzer, faSH, 250);
  delay(300);
  tone(buzzer, laS, 250);
  delay(300);    
  tone(buzzer, reSH, 500); 
  delay(550); 
  tone(buzzer, reH, 250); 
  delay(300); 
  tone(buzzer, doSH, 250);
  delay(300);  
  tone(buzzer, doH, 125);
  delay(175);  
  tone(buzzer, si, 125); 
  delay(175); 
  tone(buzzer, doH, 250); 
  delay(300);
  tone(buzzer, fa, 125); 
  delay(175); 
  tone(buzzer, solS, 500); 
  delay(550); 
  tone(buzzer, fa, 375); 
  delay(400); 
  tone(buzzer, la, 125);
  delay(175);  
  tone(buzzer, doH, 500); 
  delay(550);
  tone(buzzer, la, 375);  
  delay(425);
  tone(buzzer, doH, 125); 
  delay(175);
  tone(buzzer, reH, 1000); 
  delay(1050); 
  tone(buzzer, laH, 500);
  delay(550);
  tone(buzzer, la, 350); 
  delay(400);
  tone(buzzer, la, 150);
  delay(200);
  tone(buzzer, laH, 500);
  delay(550);
  tone(buzzer, solSH, 250);
  delay(300); 
  tone(buzzer, solH, 250);
  delay(300);
  tone(buzzer, faSH, 125);
  delay(175);
  tone(buzzer, faH, 125);  
  delay(175);  
  tone(buzzer, faSH, 250);
  delay(300);
  tone(buzzer, laS, 250);  
  delay(300);  
  tone(buzzer, reSH, 500);  
  delay(550);
  tone(buzzer, reH, 250);  
  delay(300);
  tone(buzzer, doSH, 250);
  delay(300);  
  tone(buzzer, doH, 125);  
  delay(175);
  tone(buzzer, si, 125);  
  delay(175);
  tone(buzzer, solH, 250);
  delay(300);      
  tone(buzzer, fa, 250); 
  delay(300); 
  tone(buzzer, solS, 500); 
  delay(550); 
  tone(buzzer, fa, 375);  
  delay(425);
  tone(buzzer, doH, 125); 
  delay(175);        
  tone(buzzer, la, 500); 
  delay(550);           
  tone(buzzer, fa, 375);  
  delay(425);          
  tone(buzzer, Do, 125); 
  delay(175);  
  tone(buzzer, la, 1000);
  delay(1000);       
}
