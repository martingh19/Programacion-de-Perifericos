const int led0 = 12;
const int led13 = 13;
const int led1 = 11;
const int led2 = 10;
const int led3 = 9;
const int button = 4;
byte conteo;
bool modo;
int reconta;
int buttonState;
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;
unsigned long DebounceDelay = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(led0,OUTPUT); 
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led13,OUTPUT);
  pinMode(button,INPUT);
  conteo = 0;
  modo = true;
  reconta = 0;
  despliega();

}
void despliega(){
  digitalWrite(led0,bitRead(conteo,0));
  digitalWrite(led1,bitRead(conteo,1));
  digitalWrite(led2,bitRead(conteo,2));
  digitalWrite(led3,bitRead(conteo,3));
  digitalWrite(led13,bitRead(conteo,0));
}
void loop() {
  // put your main code here, to run repeatedly:
  int reading = digitalRead(button);
  if(reading != lastButtonState){
     lastDebounceTime = millis();
  }
  if((millis() - lastDebounceTime) > DebounceDelay){
    if(reading != buttonState){
      buttonState = reading;
      if(buttonState == HIGH){
        modo = !modo;
      }
    }
  }
  lastButtonState = reading;
  reconta = reconta + 1;
  if(reconta == 0){
    despliega();
    if(modo)
    conteo = conteo + 1;
    else
    conteo = conteo -1;
  }
  
}
