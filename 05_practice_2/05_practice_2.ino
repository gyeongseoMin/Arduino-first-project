#define PIN_LED 7
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
digitalWrite(PIN_LED, 0);
delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
int i = 1;
while(i<=5) {
 digitalWrite(PIN_LED, 1);
 delay(100);
 digitalWrite(PIN_LED, 0);
 delay(100);
 i++;
}
  while(1) {
    digitalWrite(PIN_LED, 1);
    
  }
}
