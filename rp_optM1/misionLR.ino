

void mision_L() ////////////////////////////////////////////------> วางกล่องขวา
  {
    num_can_tt ++;
    fline(70,70, 0.63, 0, 'c', 'l',80, "a2", 20);
    fline(70,70, 0.4, 300, 'n', 's',70, "a4", 1);
    fline_2sensor(65, 65, 0.2, 0, "3:4","a7", 's', 0);
    fline(0,0, 0.8, 10, 'f', 'r',90, "a4", 20);
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
    
   
    //////////////////////////////////////////////////////////////////////////// แก้  ออกมาจุดเริ่มต้นเก็บกระป๋อง
    if(num_can_l == 0)
      {
        num_can_l = 1;
        bline_setpoint(60 ,60, 1.1, 40, "b0", 1);
      }
    else if(num_can_l == 1)
      {
        num_can_l = 2;
        bline_setpoint(60 ,60, 1.1, 50, "b0", 1);
      }
    else
      {
        num_can_l = 0;
        bline_setpoint(60 ,60, 1.1, 60, "b0", 1);
      }
     
     bline(80,80, 0.0, 0, 'c', 'r',60, "a5", 30);
     if(num_can_tt >= 10) 
       {
         fline(70,70, 0.63, 0, 'c', 'l',80, "a2", 20);
         fline(50,50, 0.63, 600, 's', 's',80, "a5", 20);
       }
  }

void mision_R() ////////////////////////////////////////////------> วางกล่องขวา
  {
    num_can_tt ++;
    fline(70,70, 0.63, 0, 'c', 'r',80, "a5", 20);
    fline(70,70, 0.4, 300, 'n', 's',70, "a4", 1);
    fline_2sensor(65, 65, 0.2, 0, "3:4","a0", 's', 0);
    fline(0,0, 0.8, 10, 'f', 'l',90, "a3", 20);
    Motor(1, 1);delay(20);
    servo(8,servo_down + 5 ); 
    Motor(-1, -1);delay(400);
    ///////////////////////////////////////////////
    if(num_can_r == 0)
      {        
        fline_setpoint(30 ,30, 1.1, 35, "a7", 1);  ////เดินเข้าหากรอบ
      }
    else if(num_can_r == 1)
      {
        fline_setpoint(30 ,30, 1.1, 50, "a7", 1);  ////เดินเข้าหากรอบ
      }
    else
      {
        fline_setpoint(30 ,30, 1.1, 65, "a7", 1); ////เดินเข้าหากรอบ
      }
      
    Motor(30, 30);delay(50);
    Motor(-1, -1);delay(20);
    servo(8,servo_down); delay(250);
    servo(23,servo_close-80);delay(150);
    
   
    //////////////////////////////////////////////////////////////////////////// แก้  ออกมาจุดเริ่มต้นเก็บกระป๋อง
    if(num_can_r == 0)
      {
        num_can_r = 1;
        bline_setpoint(60 ,60, 1.1, 60, "b7", 1);
      }
    else if(num_can_r == 1)
      {
        num_can_r = 2;
        bline_setpoint(60 ,60, 1.1, 50, "b7", 1);
      }
    else
      {
        num_can_r = 0;
        bline_setpoint(60 ,60, 1.1, 45, "b7", 1);
      }
     
     bline(80,80, 0.0, 0, 'c', 'l',60, "a2", 30);
     if(num_can_tt >= 10) 
       {
         fline(70,70, 0.63, 0, 'c', 'r',80, "a5", 20);
         fline(50,50, 0.63, 600, 's', 's',80, "a5", 20);
       }
  }
