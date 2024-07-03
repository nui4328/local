void check_colorCan()
  {
    if(analogRead(28) > 1500)
      {
        col_can = 1;
      }
    else
      {
        col_can = 0;
      }
    if(col_can == col_floor)
      {
        mision_L();
        ch_tlr = 0;
      }
    else
      {
        //mision_R();
        ch_tlr = 1;
      }
    
  }

void start_game_random()   // ออกจากจุดปล่อยตัว วิ่งไปเก็บค่าสีของพื้นแรก
  {
    servo(7,30 ); 
    check_floor_M();delay(1000);
    servo_down_open();
    Motor(30, 30); delay(300);   ///////////////////////////เดินออกจากพื้นปล่อยตัว วิ่งเข้าพื้นเก็บค่าสี  เก็บข้างไหนก็ได้

    fline(30,30,0.25,0,'f','s',50, "a4", 10);
    servo_down_close() ; 
    servo(7,70 ); delay(500);
    check_floor_R();delay(100);
    servo(7,133 );
    /*
    fline_ch_can(40, 40, 0.63, 150, 10);  // วิ่งเข้าไปเช็คว่ามีกระป๋องหรือไม่
    fline_mision(30, 30, 0.73,  0);   // วิ่งเข้าไปคีบกระป๋อง 
    
    fline(50,50,0.5,0,'f','s',50, "a4", 10);
    do{Motor(30,30);}while(mcp_f(7)< md_mcp_f(7));
    Motor(-20,-20);delay(5);
    Motor(0,0);delay(10);
    
    do{Motor(70,-10);}while(mcp_f(7)> md_mcp_f(7));
    do{Motor(70,-10);}while(mcp_f(3)> md_mcp_f(3));
    Motor(-50,10);delay(20);
    Motor(0,0);delay(10);
    
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
    servo(8,servo_down); delay(550);
    servo(23,servo_close-80);delay(250);
    
    if(num_can_l == 0)
      {
        num_can_l = 1;
        bline_setpoint(60 ,60, 0.1, 40, "27", 1);
      }
    else if(num_can_l == 1)
      {
        num_can_l = 2;
        bline_setpoint(60 ,60, 0.1, 50, "27", 1);
      }
    else
      {
        num_can_l = 0;
        bline_setpoint(60 ,60, 0.1, 60, "27", 1);
      }
     
     bline(0,0,0.8,10,'n','r',70, "a5", 20);

    fline(50,50,0.5,0,'f','s',40, "b5", 20);
    fline_m(40, 40, 0.2, "27", 30); 
    TR(60, "m1", 10); 
    fline_m(40, 40, 0.2, "26", 30); 
    TL(60, "m2", 10); 
    fline_m(40, 40, 0.2, "26", 30); 
    TL(60, "m2", 10); 
    fline_m(40, 40, 0.2, "27", 30); 
    TR(60, "m1", 10);  

    fline_ch_can(40, 40, 0.63, 150, 10);  // วิ่งเข้าไปเช็คว่ามีกระป๋องหรือไม่
    fline_mision(30, 30, 0.73,  0);   // วิ่งเข้าไปคีบกระป๋อง 

    fline(50,50,0.8,0,'f','s',60, "a3", 20);
    do{Motor(20,20);}while(mcp_f(0)< md_mcp_f(0));
    Motor(-20,-20);delay(5);
    Motor(0,0);delay(10);
    
    do{Motor(-5,70);}while(mcp_f(0)> md_mcp_f(0));
    do{Motor(-5,70);}while(mcp_f(4)> md_mcp_f(4));
    Motor(5,-50);delay(20);
    Motor(0,0);delay(10);
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
    servo(8,servo_down); delay(550);
    servo(23,servo_close-80);delay(250);
    
    if(num_can_l == 0)
      {
        num_can_l = 1;
        bline_setpoint(60 ,60, 0.1, 40, "26", 20);
      }
    else if(num_can_l == 1)
      {
        num_can_l = 2;
        bline_setpoint(60 ,60, 0.1, 50, "26", 20);
      }
    else
      {
        num_can_l = 0;
        bline_setpoint(60 ,60, 0.1, 60, "26", 20);
      }
     
     bline(0,0,0.8,10,'n','l',70, "a2", 20);

    fline(50,50,0.5,0,'f','s',40, "b5", 20);
    fline_m(40, 40, 0.2, "27", 30); 
    TL(60, "m2", 10); ; 
    fline_m(40, 40, 0.2, "27", 30); 
    TR(60, "m1", 10); 
    fline_m(40, 40, 0.2, "26", 30); 
    TL(60, "m2", 10); 


    */ 
   
   
    }
