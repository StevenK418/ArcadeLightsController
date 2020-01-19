//Basic Light Chasing Sketch for arcade cabint buttons. 
                       
int pins[] = {10,9,8,7,6,5,4,3};  
int pinsCount=8;        
int default_delay = 60;
 
void setup() {                
  for (int i=0; i<pinsCount; i=i+1){    
    pinMode(pins[i], OUTPUT);            
  }
}
 
void loop() 
{
  for (int i=0; i<pinsCount; i=i+1){    
    digitalWrite(pins[i], HIGH);         
    delay(default_delay);                          
    digitalWrite(pins[i], LOW);          
  }
  for (int i=pinsCount-1; i>0; i=i-1){   
    digitalWrite(pins[i], HIGH);        
    delay(default_delay);                      
    digitalWrite(pins[i], LOW);          
  }
}
