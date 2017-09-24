/* 5V 2-Channel Relay Module [S116] : http://rdiot.tistory.com/100 [RDIoT Demo] */

#define RELAY1  8                        
#define RELAY2  9                        

void setup()
{    
  pinMode(RELAY1, OUTPUT);       
  pinMode(RELAY2, OUTPUT);
}
 
 void loop()
{
   digitalWrite(RELAY1,LOW);           // Turns ON Relays 1
   delay(500);                         // Wait 
   digitalWrite(RELAY1,HIGH);          // Turns Relay Off
 
   digitalWrite(RELAY2,LOW);           // Turns ON Relays 2
   delay(500);                         // Wait
   digitalWrite(RELAY2,HIGH);          // Turns Relay Off
}
