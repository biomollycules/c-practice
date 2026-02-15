// my first arduino practice! flashing two LED's on a bread board


const int nextLED = 12;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(nextLED, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(nextLED, HIGH);
  delay(1000); //wait for 1000 milliseconds(s)
  digitalWrite(nextLED, LOW);
  delay(1000); //wait for 1000 milliseconds(S)
  
    
}
