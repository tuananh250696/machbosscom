

void setup() {
  // initialize serial communication at 115200
  Serial.begin(9600);
   pinMode(16, OUTPUT);
   pinMode(14, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(13, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   digitalWrite(16, 1);
   digitalWrite(14, 1);
   digitalWrite(12, 1);
   digitalWrite(13, 1);
   digitalWrite(5, 1);
   digitalWrite(4, 1);
         
}

void loop() {
   int value = analogRead(A0);   //đọc giá trị điện áp ở chân A0 
   int voltage;
   voltage = map(value,0,1023,0,33);   //chuyển thang đo của value 
   Serial.println (voltage);// cho ta "1.2346"
    if(voltage==9||voltage==10)
    {
      
         digitalWrite(5, 0);
      delay(340);
      digitalWrite(5, 1);
      delay(300);
     
    }
     if(voltage==11||voltage==12)
    {
      digitalWrite(12, 0);
      delay(420);
      digitalWrite(12, 1);
       delay(200);
     
    }
     if(voltage==14||voltage==15)
    {
      
    digitalWrite(16, 0);
      delay(340);
      digitalWrite(16, 1);
       delay(200);
    }

     if(voltage==16||voltage==17)
    {
      
      digitalWrite(4, 0);
      delay(340);
      digitalWrite(4, 1);
       delay(200);
    
    }

     if(voltage==18||voltage==19)
    {
     
        digitalWrite(14, 0);
      delay(420);
      digitalWrite(14, 1);
       delay(200);
      
    }

     if(voltage==20||voltage==21||voltage==22)
    {
    digitalWrite(13, 0);
      delay(340);
      digitalWrite(13, 1);
       delay(200);
    }
  
}
