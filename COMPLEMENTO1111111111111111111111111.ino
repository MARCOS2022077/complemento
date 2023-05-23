//1 endicamos a que pines van cada uno
const int foto=3;
const int led=2;
//2
const int foto1=5;
const int led1=4;
//3
const int foto2=7;
const int led2=6;
//4
const int foto3=9;
const int led3=8;
//5
const int foto4=11;
const int led4=10;
//6
const int foto5=13;
const int led5=12;
//7
const int foto6=15;
const int led6=14;
//8
const int foto7=17;
const int led7=16;
//9
const int foto8=19;
const int led8=18;
 //endicamos a que pines van cada uno

void setup() {
  //1
  pinMode(foto,INPUT);
  pinMode(led,OUTPUT);
  //2
  pinMode(foto1,INPUT);
  pinMode(led1,OUTPUT);
  //3
  pinMode(foto2,INPUT);
  pinMode(led2,OUTPUT);
  //4
  pinMode(foto3,INPUT);
  pinMode(led3,OUTPUT);
  //5
  pinMode(foto4,INPUT);
  pinMode(led4,OUTPUT);
  //6
  pinMode(foto5,INPUT);
  pinMode(led5,OUTPUT);
  //7
  pinMode(foto6,INPUT);
  pinMode(led6,OUTPUT);
  //8
  pinMode(foto7,INPUT);
  pinMode(led7,OUTPUT);
  //9
  pinMode(foto8,INPUT);
  pinMode(led8,OUTPUT);

 // AQUI INDICAMOS COMO SE VA A COMPORTAR CADA PIN

}
void loop() {
int valor = digitalRead(foto);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
int valor1 = digitalRead(foto1);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor1==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led1, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led1, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
int valor2 = digitalRead(foto2);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor2==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led2, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led2, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
int valor3 = digitalRead(foto3);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor3==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led3, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led3, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
int valor4 = digitalRead(foto4);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor4==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led4, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led4, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
int valor5 = digitalRead(foto5);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor5==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led5, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led5, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
int valor6 = digitalRead(foto6);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor6==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led6, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led6, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
int valor7 = digitalRead(foto7);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor7==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led7, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led7, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
int valor8 = digitalRead(foto8);//indicamos que valor va a hacer lo mismo que el digitalRead
if(valor8==LOW){//si cumple la condición va a realizar lo siguiente
  digitalWrite(led8, HIGH);//se se cumple esto la led se encendera
  delay(50);//se tome un tiempo 
}else{//si no hace esto 
  digitalWrite(led8, LOW);//el led estara apagdo 
  delay(50);//se tome un tiempo 
}
}
