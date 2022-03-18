void arm_park()
{ 
 
  servo1.write(150,30);
  
    servo2.write(110,30);
    servo3.write(180,30);
  //  servo4.write(180,30);
   // delay (1000);
}
void pick_yellow()
{      int sensor1=digitalRead(43);//sensor1
int sensor2=digitalRead(42);//sensor2
int sensor3=digitalRead(37);//sensor3
int sensor4=digitalRead(41);//sensor4
int sensor5=digitalRead(39);//sensor5
   int a=  distance1();
           if ((a<=27)&&(sensor3==0))
                     {

              stop_r();
                 //             servo4.write(160,40);
                              delay(1000);
    servo3.write(180,20);
    servo1.write(0,40);
      servo2.write(110,40); 
    delay (3000);         
    servo3.write(70,40);
    delay(1000);
    servo1.write(120,40);
    delay(1000);
    servo2.write(50,40);
    

              ex1=false;
              ex2=true;
              ex3=true;
              ex4=false;
              ex5=false;
              ex6=true;
              ex7=true;
              ex8=false;                       // counts+=1;
                        Serial.println("  Picking yellow");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);}
                        else{
                          tracking2();
                        }
                       
}

void packing_yellow()
{
        int sensor1=digitalRead(43);//sensor1
int sensor2=digitalRead(42);//sensor2
int sensor3=digitalRead(37);//sensor3
int sensor4=digitalRead(41);//sensor4
int sensor5=digitalRead(39);//sensor5
   int a=  distance1();
           if ((a<=24)&&(sensor3==0))
                     {
                        stop_r();
                         //     servo2.write(50,40);
    for (int dropping=0; dropping<35; dropping++)
    {//     delay(1000);
  servo1.write(60-dropping,50);
    delay (30);   
    servo2.write(50+dropping,50);    
    delay (30);
    } 
    
    servo3.write(180,50);
    delay (1000);

      for (int dropping=0; dropping<65; dropping++)
    {//     delay(1000);
  servo1.write(90-(dropping+15),50);
    delay (30);   
    servo2.write(80+dropping/2,50);    
    delay (30);
    } 
    servo3.write(100,50);
    delay(1000);
          for (int dropping=0; dropping<65; dropping++)
    {//     delay(1000);
      servo1.write(10+dropping*2,40);
    delay(20);
    servo2.write(100-(dropping+40),40);
    } 
  
      
 /*   servo1.write(20,20);
    delay(1000);
    servo4.write(20,40);
    delay(1000);
    servo1.write(120,40);
    servo3.write(90,20);
*/
                                  ex1=false;
                              ex2=true;
                              ex3=false;
                              ex4=true; 
                        ex5=true;
                        ex6=true;
                        ex7=false;
                        ex8=true; 
                       // counts+=1;
                        Serial.println("  Packing yellow");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);}
                        
                        else{
                          tracking2();
                        }
                       
}

void placing_yellow_park()
{
   int a=  distance1();
           if (a<=22)
                     {
                        stop_r();
     for (int dropping=0; dropping<25; dropping++)
    {//     delay(1000);
  servo1.write(100-dropping,50);
    delay (30);   
  servo2.write(100-(dropping+40),40);    
    delay (30);
    } 
    servo3.write(180,50);
    delay (1000);
   
    arm_park();
    delay(1000);
                ex1=true;
                ex2=true;
                ex3=true;
                 ex4=false; 
                        ex5=false;
                        ex6=true;
                        ex7=true;
                        ex8=true; 
                       // counts+=1;
                        Serial.println("  Placing yellow package");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);}
                        else{
                          tracking2();
                        }
                       
}

void pick_M2()// motor 1
{
  int a=  distance1();
           if (a<=10)
                     {
                          stop_r();
                          delay (1000);
                        
                       //.write(180,20);
                         servo4.write(130,20);
                        //.write(20,20);
                     
                     
                      //.write(80,20);
                        delay(1000);  
                          //.write(120,20);
                           delay(1000);
                            //;

            ex1=false;
            ex2=false;
            ex3=true;
            ex4=true; 
            ex5=false;
            ex7=true;  
                        
                       // counts+=1;
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);
}
}
void pick_m3()
{
   int a=  distance1();
           if (a<=6)
                     {
                        stop_r();
                              //.write(180,20);
                                servo4.write(140,20);
                                //.write(20,20);
                                 delay(1000);
                      
   
                        //servos.setposition( GRI_SERVO, 900 );
                     
                       delay(1000);
                       
                         
                      //.write(110,20);
                           delay(1000);
                          //;
                           delay(400);
                            ex1=true;
  ex2=false;
  ex3=true;
  ex4=false; 
  ex5=false;
  ex7=false;
  ex8=true;


   
                       // counts+=1;
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);
                       
}
}
void place_m1()
{
   int a=  distance1();
           if (a<=6)
                     {
                        stop_r();
                   //.write(20,20);
                       
                      //.write(180,20);
                        delay(2000);
                       //;
                        reduce_speed2();
                        reverse();
                        delay(600);
                             /* ex1=false;
                              ex2=false;
                              ex3=false;
                              ex4=false; 
                              ex5=true;
                       // counts+=1;
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);*/
                       ex1=true;
              ex2=false;
              ex3=false;
              ex4=false;
              ex5=true;
                ex7=false;
              ex8=false;
                       
}
}
void place_m2b()
{
   int a=  distance1();
           if (a<=15)
                     {
                        stop_r();
                    
               
                      //.write(180,20);
                        delay(2000);
                       //;
                        //.write(20,20);
                         delay(1000);
                          servo4.write(90,20);
                          delay(1000);
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);
                        reverse();// to get it to off track
                        delay(200);
              ex1=false;
              ex2=false;
              ex3=false;
              ex4=false; 
              ex5=false;
              ex7=false; 
              ex8=true; 
                       
}
}
void place_rock1()
{
   int a=  distance1();
           if (a<=10)
                     {
                        stop_r();
                    
                       
   
                        //servos.setposition( GRI_SERVO, 900 );
                         servo4.write(165,20);
                        delay (1000);
                   //.write(170,20);
                           delay(2000);
                       
                        
                         // wrist turn
                         //;
                          servo4.write(90,20);
                        delay (1000);
                        //.write(120,20);
                        delay (500);
                        // wrist turn
                        
                       // counts+=1;
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);
                  reverse();// to get it to off track
                       delay(200);
     ex1=true;
              ex2=false;
              ex3=false;
              ex4=false; 
              ex5=false;
              ex7=true; 
              ex8=true;    
                       
}
}
void picking_rock1()
{
   int a=  distance1();
           if (a<=30)
                     {
                        stop_r();
                    
                        //counter_r(40);   
                        // (500);
                        // wrist turn
                        //.write(120,20);
                        servo4.write(120,20);
                        delay (1000);
                         // wrist turn
                
                      //.write(100,20);
                           delay(2000);
                          //;
                           delay (1000);
                            
                       servo4.write(175,20);
                        delay (1000);
                         // wrist turn
                       // counts+=1;
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);
                                ex1=false;
              ex2=false;
              ex3=false;
              ex4=false; 
              ex5=true;
              ex7=true; 
              ex8=true;   
                       
}
}
void pick_rock2()
{
  int a=  distance1();
           if (a<=15)
                     {
                          stop_r();
                          delay (1000);
                        
                       //.write(180,20);
                         servo4.write(130,20);
                        //.write(20,20);
                     
         
                      //.write(110,20);
                        delay(2000);  
                           
                     

                       // counts+=1;
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);
                        ex1=false;
              ex2=true;
              ex3=false;
              ex4=false;
              ex5=false;
              ex7=false;
              ex8=true;

              
}
}
void place_rock2()
{
   int a=  distance1();
           if (a<=10)
                     {
                        stop_r();
                    
      
   
                        //servos.setposition( GRI_SERVO, 900 );
                   //.write(180,20);
                           delay(2000);
                      
                           delay(200);
                       //.write(120,20);
                        delay (500);
                        // wrist turn
                        servo4.write(90,20);
                        delay (1000);
                         // wrist turn
                          
                        
                          
                     
                       // counts+=1;
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);
                     reverse();// to get it to off track
                      delay(200);
             
              ex1=false;
              ex2=false;
              ex3=false;
              ex4=false; 
              ex5=true;
              ex7=false; 
              ex8=false;             
                       
}
}
void pick_m4()
{
   int a=  distance1();
           if (a<=8)
                     {
                        stop_r();
                              //.write(180,20);
                                servo4.write(140,20);
                                //.write(20,20);
                                 delay(1000);

   
                        //servos.setposition( GRI_SERVO, 900 );
                     
                       delay(1000);
                       
                         
                      //.write(110,20);
                           delay(1000);
                       
                           delay(400);
                            ex1=true;
  ex2=false;
  ex3=true;
  ex4=false; 
  ex5=false;
  ex7=false;
  ex8=true;

}
}
void place_m4()
{

  int a=  distance1();
           if (a<=15)
                     {
                        stop_r();
                    
 
                      //.write(180,20);
                        delay(2000);
           
                        //.write(20,20);
                         delay(1000);
                          servo4.write(90,20);
                          delay(1000);
                        Serial.println("placing");
                         Serial.print("distance");
                          Serial.print("= ");
                        Serial.println( a);
                        reverse();// to get it to off track
                        delay(200);
              ex1=false;
              ex2=false;
              ex3=false;
              ex4=false; 
              ex5=false;
              ex7=false; 
              ex8=true; 
                       
}}
