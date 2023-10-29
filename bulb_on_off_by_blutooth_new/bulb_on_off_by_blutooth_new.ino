char Incoming_value = 0;
                
void setup() 
{
  Serial.begin(9600);         
  pinMode(13, OUTPUT); 
  pinMode(9, OUTPUT);      
}

void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == 'a')             
      digitalWrite(13, HIGH);  
    else if(Incoming_value == 'b')       
      digitalWrite(13, LOW); 

    if(Incoming_value == 'c')             
      digitalWrite(9, HIGH);  
    else if(Incoming_value == 'd')     
      digitalWrite(9, LOW);

    if(Incoming_value == 'e')             
      digitalWrite(13, HIGH);  
    else if(Incoming_value == 'f')       
      digitalWrite(13, LOW); 

    if(Incoming_value == 'g')             
      digitalWrite(9, HIGH);  
    else if(Incoming_value == 'h')     
      digitalWrite(9, LOW);
        
  }                            
} 
