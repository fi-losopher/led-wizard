int redPin = 11;
int bluePin = 10;
int greenPin = 9;
int yellowPin = 8;
String msg = "Enter the Number of your Choice:";
int choice;
int delayT = 250;
int delayT2 = 10000;
int i;
int n;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(yellowPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 
    Serial.println(msg);
    n = Serial.parseInt();
    Serial.println(n);
    delay(delayT2);
    switch(n) {
    case 1 : if (n ==1){
    digitalWrite(redPin, HIGH);
    delay(delayT);
    digitalWrite(redPin, LOW);
    delay(delayT);
    digitalWrite(greenPin, HIGH);
    delay(delayT);
    digitalWrite(greenPin, LOW);
    delay(delayT);
    digitalWrite(bluePin, HIGH);
    delay(delayT);
    digitalWrite(bluePin, LOW);
    delay(delayT);
    digitalWrite(yellowPin, HIGH);
    delay(delayT);
    digitalWrite(yellowPin, LOW);
    delay(delayT);
    }
    break;
  case 2: if(n ==2){
    for (i=0; i<=n;i++){
    digitalWrite(redPin, HIGH);
    delay(delayT);
    digitalWrite(redPin, LOW);
    delay(delayT);
    }
     for (i=0; i<=n;i++){
    digitalWrite(greenPin, HIGH);
    delay(delayT);
    digitalWrite(greenPin, LOW);
    delay(delayT);}
    for (i=0; i<=n;i++){
    digitalWrite(bluePin, HIGH);
    delay(delayT);
    digitalWrite(bluePin, LOW);
    delay(delayT);}
    for (i=0; i<=n;i++){
    digitalWrite(yellowPin, HIGH);
    delay(delayT);
    digitalWrite(yellowPin, LOW);
    delay(delayT);
 
    }
 
 }

  
  break;
      default:
      Serial.println("Invalid choice. Please enter 1 or 2");
      break;
    }
  

 

  }






