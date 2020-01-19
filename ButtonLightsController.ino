
int pins[] = {10,9,8,7,6,5,4,3}

int led = 9;          
int currentBrightness = 0;    
int fadeAmount = 5;    

void setup() 
{
  for(int i = 0; i < SizeOf(pins); i++)
  {
     pinMode(pins[i], OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() 
{
  analogWrite(led, currentBrightness);

  // change the brightness for next time through the loop:
 currentBrightness = currentBrightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (currentBrightness <= 0 || currentBrightness >= 255) 
  {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
