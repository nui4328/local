void  mision_L()  //วางกล่องซ้าย
  {
    fline(40,40,0.5,0,'f','l',60, "a1", 1);
    do{Motor(-10,60);}while(mcp_f(1)< md_mcp_f(1));
    do{Motor(-10,60);}while(mcp_f(4)> md_mcp_f(4));
    do{Motor(-10,60);}while(mcp_f(4)< md_mcp_f(4));
    do{Motor(-10,60);}while(mcp_f(7)> md_mcp_f(7));
    do{Motor(-10,60);}while(mcp_f(7)< md_mcp_f(7));Motor(0,-3); delay(2);
    do{Motor(60,-2);}while(mcp_f(0)> md_mcp_f(0));
    do{Motor(60,-2);}while(mcp_f(0)< md_mcp_f(0)); 
    Motor(-50,2); delay(5);
    do{Motor(-20,60);}while(mcp_f(0)> md_mcp_f(0));
    do{Motor(-20,60);}while(mcp_f(4)> md_mcp_f(4));
    

    fline(50,50,0.5,0,'f','s',50, "a4", 10);
    do{Motor(30,30);}while(mcp_f(7)< md_mcp_f(7));
    Motor(-20,-20);delay(5);
    Motor(0,0);delay(10);
    
    do{Motor(70,-10);}while(mcp_f(7)> md_mcp_f(7));
    do{Motor(70,-10);}while(mcp_f(3)> md_mcp_f(3));
    Motor(-50,10);delay(20);
    Motor(0,0);delay(10);
    
    Motor(1, 1);delay(20);
    servo(8,servo_down + 10 ); 
    Motor(-1, -1);delay(400);
    ///////////////////////////////////////////////
    if(num_can_l == 0)
      {
        fline_setpoint(30 ,30, 1.1, 65, "a7", 1);  ////เดินเข้าหากรอบ
      }
    else if(num_can_l == 1)
      {
        fline_setpoint(30 ,30, 1.1, 50, "a7", 1);  ////เดินเข้าหากรอบ
      }
    else
      {        
        fline_setpoint(30 ,30, 1.1, 35, "a7", 1); ////เดินเข้าหากรอบ
      }
      
    Motor(30, 30);delay(80);
    Motor(-1, -1);delay(20);
    servo(8,servo_down); delay(250);
    servo(23,servo_close-80);delay(150);
    
    if(num_can_l == 0)
      {
        num_can_l = 1;
        bline_setpoint(60 ,60, 0.1, 40, "27", 30);
      }
    else if(num_can_l == 1)
      {
        num_can_l = 2;
        bline_setpoint(60 ,60, 0.1, 50, "27", 30);
      }
    else
      {
        num_can_l = 0;
        bline_setpoint(60 ,60, 0.1, 60, "27", 30);
      }
     
     bline(0,0,0.8,10,'n','r',70, "a5", 20);

    fline(50,50,0.5,0,'f','s',40, "b5", 20);
    fline_m(70, 70, 0.5, "27", 30); 
    TR(70, "m1", 30); 
    fline_m(40, 40, 0.2, "26", 30); 
    TL(70, "m2", 30);
    fline_m(70, 70, 0.5, "27", 30); 
    TR(70, "m1", 30); 
     
  }

 void mision_R()  //วางกล่องขวา
  {  
    fline(40,40,0.5,0,'f','r',70, "a6", 1);
    do{Motor(60,-10);}while(mcp_f(6)< md_mcp_f(6));
    do{Motor(60,-10);}while(mcp_f(3)> md_mcp_f(3));
    do{Motor(60,-10);}while(mcp_f(3)< md_mcp_f(3));
    do{Motor(60,-10);}while(mcp_f(0)> md_mcp_f(0));
    do{Motor(60,-10);}while(mcp_f(0)< md_mcp_f(0));Motor(-3,0); delay(2);
    
    do{Motor(-2,60);}while(mcp_f(7)> md_mcp_f(7));
    do{Motor(-2,60);}while(mcp_f(7)< md_mcp_f(7)); 
    Motor(2,-50); delay(5);
    do{Motor(60,-20);}while(mcp_f(7)> md_mcp_f(7));
    do{Motor(60,-20);}while(mcp_f(3)> md_mcp_f(3));Motor(-50,10); delay(10);
    
    fline(50,50,0.8,0,'f','s',60, "a3", 20);
    do{Motor(20,20);}while(mcp_f(0)< md_mcp_f(0));
    Motor(-20,-20);delay(5);
    Motor(0,0);delay(10);
    
    do{Motor(-5,70);}while(mcp_f(0)> md_mcp_f(0));
    do{Motor(-5,70);}while(mcp_f(4)> md_mcp_f(4));
    Motor(5,-50);delay(20);
    Motor(0,0);delay(10);
    Motor(1, 1);delay(20);
    servo(8,servo_down + 10 ); 
    Motor(-1, -1);delay(400);
    ///////////////////////////////////////////////
    if(num_can_l == 0)
      {
        fline_setpoint(30 ,30, 1.1, 65, "a7", 1);  ////เดินเข้าหากรอบ
      }
    else if(num_can_l == 1)
      {
        fline_setpoint(30 ,30, 1.1, 50, "a7", 1);  ////เดินเข้าหากรอบ
      }
    else
      {        
        fline_setpoint(30 ,30, 1.1, 35, "a7", 1); ////เดินเข้าหากรอบ
      }
      
    Motor(30, 30);delay(120);
    Motor(-1, -1);delay(20);
    servo(8,servo_down); delay(550);
    servo(23,servo_close-80);delay(150);
    
    if(num_can_l == 0)
      {
        num_can_l = 1;
        bline_setpoint(60 ,60, 0.1, 40, "26", 30);
      }
    else if(num_can_l == 1)
      {
        num_can_l = 2;
        bline_setpoint(60 ,60, 0.1, 50, "26", 30);
      }
    else
      {
        num_can_l = 0;
        bline_setpoint(60 ,60, 0.1, 60, "26", 30);
      }
     
     bline(0,0,0.8,10,'n','l',70, "a2", 20);

    fline(50,50,0.5,0,'f','s',40, "b5", 20);
    fline_m(70, 70, 0.5, "27", 30); 
    TL(70, "m2", 30);
    fline_m(70, 70, 0.5, "27", 30); 
    TR(70, "m1", 30);
    fline_m(40, 40, 0.2, "26", 30); 
    TL(60, "m1", 20);
  }

 void mision_MD()  //วางกล่องขวา
  {
    fline_m(70, 70, 0.5, "m4", 50); 
    TL(70, "m2", 40);
    fline_m(70, 70, 0.5, "m4", 30); 
    TR(80, "m2", 2);
    fline_m(70, 70, 0.5, "m4", 30); 
    TR(60, "m1", 25);
    fline_m(40, 40, 0.4, "26", 50); 
    
    Motor(-1, -1);delay(100);
    Motor(-70, 70);delay(100);
    
    //TL(50, "m1", 20);
    if(num_can_m == 0)
      {
         do{Motor(-70, 70);}while(mcp_m(0) > md_mcp_m(0)); delay(20);
          Motor(40, -40);delay(10);
         Motor(-1, -1);delay(100);
        servo(8,servo_down+15 ); 
        Motor(-1, -1);delay(200);
        servo(23,servo_close-20);
        do{Motor(30, 30);}while(mcp_b(3) > md_mcp_b(3));delay(50);
        Motor(-30, -30);delay(20);
        Motor(-1, -1);delay(10); 
        servo(8,servo_down );   Motor(-1, -1);delay(200);
        servo(23,servo_close-80);delay(250);
        num_can_m = 1;
      }
    else if(num_can_m == 1)
      {
         do{Motor(-70, 70);}while(mcp_m(0) > md_mcp_m(0));delay(10);
          Motor(40, -40);delay(20);
         Motor(-1, -1);delay(100);
        servo(8,servo_down+15 ); 
        Motor(-1, -1);delay(200);
        servo(23,servo_close-20);
        do{Motor(30, 30);}while(mcp_b(3) > md_mcp_b(3));delay(50);
        Motor(-30, -30);delay(20);
        Motor(-1, -1);delay(10); 
        servo(8,servo_down );   Motor(-1, -1);delay(200);
        servo(23,servo_close-80);delay(250);
        num_can_m = 2;
      }
    else if(num_can_m == 2)
      {
         do{Motor(-70, 70);}while(mcp_m(1) > md_mcp_m(1));
          Motor(70, -70);delay(10);
         Motor(-1, -1);delay(100);
        servo(8,servo_down+15 ); 
        Motor(-1, -1);delay(200);
        servo(23,servo_close-20);
        do{Motor(30, 30);}while(mcp_b(3) > md_mcp_b(3));delay(50);
        Motor(-30, -30);delay(20);
        Motor(-1, -1);delay(10); 
        servo(8,servo_down );   Motor(-1, -1);delay(200);
        servo(23,servo_close-80);delay(250);
        num_can_m = 3;
      }
    else if(num_can_m == 3)
      {
         do{Motor(-70, 70);}while(mcp_m(2) > md_mcp_m(2));
          Motor(30, -30);delay(10);
         Motor(-1, -1);delay(100);
        servo(8,servo_down+15 ); 
        Motor(-1, -1);delay(200);
        servo(23,servo_close-20);
        do{Motor(30, 30);}while(mcp_b(3) > md_mcp_b(3));delay(50);
        Motor(-30, -30);delay(20);
        Motor(-1, -1);delay(10); 
        servo(8,servo_down );   Motor(-1, -1);delay(200);
        servo(23,servo_close-80);delay(250);
        num_can_m = 4;
      }
    else
      {
         do{Motor(-70, 70);}while(mcp_m(0) > md_mcp_m(0));
          Motor(70, -70);delay(10);
         Motor(-1, -1);delay(100);
        servo(8,servo_down); 
        Motor(-1, -1);delay(500);
        servo(23,servo_close-20);
        Motor(40, 40);delay(80);
        Motor(-1, -1);delay(10);   
        servo(23,servo_close-80);delay(100);
        servo(8,servo_up );delay(200);
        num_can_m = 5;
        goto TL_MD;
      }
    
    do{Motor(-30, -30);}while(mcp_m(7) > md_mcp_m(7));
    TL_MD:
    while(1)
      {
        
        if( analogRead(27) < md_adc(27) &&  analogRead(26) > md_adc(26))
          {
            Motor(-60, 1);delay(20);
          }
        else if( analogRead(26) < md_adc(26) &&  analogRead(27) > md_adc(27))
          {
            Motor(1, -60);delay(20);
          }
       else if( analogRead(27) < md_adc(27) &&  analogRead(26) < md_adc(26))
          {
            
            Motor(1, 1);delay(50);
            break;
          }
       else
          {
            Motor(-40, -40);
          }
      }
    Motor(40, 40);delay(50);
    Motor(1, 1);delay(50);
    Motor(80, -80);delay(150);
    do{Motor(80, -80);}while(mcp_m(1) > md_mcp_m(1));
    Motor(-50, 50);delay(20);
    Motor(1, 1);delay(50);
    fline_m(70, 70, 0.5, "m4", 10); 
    TR(80, "m1", 30);
    fline_m(75, 75, 0.5, "m4", 5); 
    TR(70, "m1", 20);
    fline_m(70, 70, 0.5, "m5", 10);
    fline(0, 0, 0.75, 10, 'c', 'l',70, "a3", 20);

  }
