void start_game()   // ออกจากจุดปล่อยตัว วิ่งไปเก็บค่าสีของพื้นแรก
  {
    Motor(30, 30); delay(300);   //---->เดินออกจากพื้นปล่อยตัว วิ่งเข้าพื้นเก็บค่าสี  เก็บข้างไหนก็ได้
    fline(50,50, 0.3, 0, 'c', 'r',60, "a5", 30); 
       
    fline(50,50, 0.3, 0, 'c', 's',60, "a7", 12); 
    do{Motor(50, -20);}while(mcp_f(4) > md_mcp_f(4)-150);
    Motor(-40, 20); delay(20); 
    Motor(0, 0); delay(100); 
        
    fw_a3_a4(30, 30, 0.3, 0);  ////เดินเข้าหากรอบ
    Motor(-20, -20); delay(10); 
    Motor(0, 0); delay(10);
    
    Motor(30, 30);delay(100);  //------> มอเตอร์เดินหน้า หน่วงเวลา 100
    Motor(-20, -20); delay(20); 
    Motor(0, 0);delay(100);
    
    /////////////////////////////////////////////////////////// เก็บค่าพื้น
    if(mcp_f(7) >= md_mcp_f(7))
      {
          ground_color = 1;
          bz(300);
      }
    else
      {
          ground_color = 0;
          bz(100);
          bz(300);
      }
 
     bline(50,50, 0.1, 0, 'f', 's',50, "a5", 10); 
     do{Motor(-30, -30);}while(analogRead(27) > md_adc(27));
     Motor(20, 20); delay(10); 
     Motor(0, 0); delay(10);  
     bline(0, 0, 0, 10, 'n', 'r',40, "a5", 20);
     fline(50,50, 0.4, 0, 'c', 'r',50, "a4", 30);  //-------> จบตรงสี่แยกหน้าจุดเริ่มต้น
  }
