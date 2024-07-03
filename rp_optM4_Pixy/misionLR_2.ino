void mision_MD2()  //วางกล่องขวา
  {
    fline_m(40, 40, 0.3, "m4", 20); 
    TL_F(70, "m2", 20);
    fline_m(70, 70, 0.3, "b7", 10); 
    TR_F(70, "m2", 10);
    fline_m(70, 70, 0.3, "b7", 10); 
    TR_F(70, "m1", 10);
    

    fline_m(20, 20, 0.3, "26", 50); 
    
    Motor(-1, -1);delay(100);
    Motor(-50, 50);delay(200);
    
    //TL(50, "m1", 20);
    if(num_can_m == 0)
      {
        do{Motor(-80, 80);}while(mcp_m(0) > md_mcp_m(0));
          Motor(20, -20);delay(10);
         Motor(-1, -1);delay(100);
        servo(8,servo_down+15 ); 
        Motor(-1, -1);delay(300);
        servo(23,servo_close-20);
        do{Motor(30, 30);}while(mcp_b(3) > md_mcp_b(3));delay(100);
        Motor(-30, -30);delay(20);
        Motor(-1, -1);delay(10); 
        servo(8,servo_down );   Motor(-1, -1);delay(300);
        servo(23,servo_close-80);delay(250);
        num_can_m = 1;
      }
    else if(num_can_m == 1)
      {
        do{Motor(-60, 60);}while(mcp_m(0) > md_mcp_m(0));
          Motor(20, -20);delay(10);
         Motor(-1, -1);delay(100);
        servo(8,servo_down+15 ); 
        Motor(-1, -1);delay(300);
        servo(23,servo_close-20);
        do{Motor(30, 30);}while(mcp_b(3) > md_mcp_b(3));delay(50);
        Motor(-30, -30);delay(20);
        Motor(-1, -1);delay(10); 
        servo(8,servo_down );   Motor(-1, -1);delay(300);
        servo(23,servo_close-80);delay(250);
        num_can_m = 2;
      }
    else if(num_can_m == 2)
      {
         do{Motor(-60, 60);}while(mcp_m(0) > md_mcp_m(0));
          Motor(40, -40);delay(20);
         Motor(-1, -1);delay(100);
        servo(8,servo_down+15 ); 
        Motor(-1, -1);delay(300);
        servo(23,servo_close-20);
        do{Motor(30, 30);}while(mcp_b(3) > md_mcp_b(3));delay(50);
        Motor(-30, -30);delay(20);
        Motor(-1, -1);delay(10); 
        servo(8,servo_down );   Motor(-1, -1);delay(300);
        servo(23,servo_close-80);delay(250);
        num_can_m = 3;
      }
    else if(num_can_m == 3)
      {
         do{Motor(-60, 60);}while(mcp_m(1) > md_mcp_m(2));
          Motor(40, -40);delay(20);
         Motor(-1, -1);delay(100);
        servo(8,servo_down+15 ); 
        Motor(-1, -1);delay(300);
        servo(23,servo_close-20);
        do{Motor(30, 30);}while(mcp_b(3) > md_mcp_b(3));delay(50);
        Motor(-30, -30);delay(20);
        Motor(-1, -1);delay(10); 
        servo(8,servo_down );   Motor(-1, -1);delay(300);
        servo(23,servo_close-80);delay(250);
        num_can_m = 4;
      }
    else
      {
         do{Motor(-60, 60);}while(mcp_m(2) > md_mcp_m(2));
          Motor(30, -30);delay(10);
         Motor(-1, -1);delay(100);
        servo(8,servo_down); 
        Motor(-1, -1);delay(500);
        servo(23,servo_close-20);
        Motor(40, 40);delay(80);
        Motor(-1, -1);delay(10);   
        servo(23,servo_close-80);delay(100);
        servo(8,servo_up );delay(200);
        num_can_m = 0;
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
    Motor(70, -70);delay(150);
    do{Motor(70, -70);}while(mcp_m(1) > md_mcp_m(1));
    Motor(-50, 50);delay(30);
    Motor(1, 1);delay(50);
    fline_m(70, 70, 0.3, "b7", 10); 
    TR_F(75, "m1", 10);
    fline_m(80, 80, 0.3, "b7", 10); 
    TR_F(80, "m1", 10);
    fline_m(70, 70, 0.3, "b0", 10);
    fline(0, 0, 0.75, 10, 'c', 'l',70, "a3", 20);

  }
