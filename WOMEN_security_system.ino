const int buttonPin = 2;
int buttonState = 0; 

void setup() 
{
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    
     Serial.println("ATD*********;"); // ATDxxxxxxxxxx; mobile number in place of *****
     Serial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     Serial.println("AT+CMGS=\"**********\"\r");//mobile number in place of ****
     Serial.println("I am in danger!! please help....");
     Serial.println((char)26);
     delay(1000);
  }
} 
