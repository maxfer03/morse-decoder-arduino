
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int wait = 100;

String morse = ""; 

int timeUnit = 200;



void setup() {
  // put your setup code here, to run once:

     pinMode(led1, OUTPUT);
     pinMode(led2, OUTPUT);
     pinMode(led3, OUTPUT);
     pinMode(led4, OUTPUT);
     pinMode(led5, OUTPUT);

     
     Serial.begin(9600);
     
     
}

void loop() {
  Serial.println("Enter morse code:");
  while(Serial.available() == 0) {}
  morse = Serial.readString();
  for(int x = 0 ; x < morse.length() -1; x++){
    switch(morse[x]){
      case '.':
        digitalWrite(led1, HIGH);
        delay(timeUnit);
        digitalWrite(led1, LOW);
        break;
      case '-':
        digitalWrite(led1, HIGH);
        delay(timeUnit * 3);
        digitalWrite(led1, LOW);
        break;
      case ' ':
        delay(timeUnit * 3);
        break;
      case '/':
        delay(timeUnit * 7);
        break;
      default:
        Serial.println(' ');
        Serial.print("ERROR AT CHAR ");
        Serial.print(x);
        Serial.println(' ');
        break;
      }
    
    
    delay(timeUnit);
    }
}
  
  
      
      
      
