void can1()
  {
    servo_down_open();delay(50);
    fline(35, 35, 0.8, 0,'f','r',100, "a4", 20); 
    fline_ch_can(70, 70, 0.63, 200, 10);  // วิ่งเข้าไปเช็คว่ามีกระป๋องหรือไม่
    fline_mision(40, 40, 0.73,  0);   // วิ่งเข้าไปคีบกระป๋อง 
    bline(85, 85, 0.8, 0,'c','r',70, "a4", 20);
    
  }

void can2()
  {
    servo_down_open();
    fline(75, 75, 0.8, 0,'c','l',70, "a3", 20); 
    fline_ch_can(50, 50, 0.63, 400, 10);  // วิ่งเข้าไปเช็คว่ามีกระป๋องหรือไม่
    fline_mision(40, 40, 0.73,  0);   // วิ่งเข้าไปคีบกระป๋อง 
    bline(75, 75, 0.8, 0,'c','l',70, "a3", 20);
    
  }
  
void can3()
  {
    servo_down_open();
    fline(55,55, 0.55, 0, 'c', 'p',80, "a5", 20);
    
    fline_xr(60, 60, 0.45,  30);   
    fline_ch_can(50, 50, 0.63, 350, 2);  // วิ่งเข้าไปเช็คว่ามีกระป๋องหรือไม่
    fline_mision(40, 40, 0.73,  0);   // วิ่งเข้าไปคีบกระป๋อง
    bline_xr(72, 72, 0.72,  20) ;  
    fline(55,55, 0.55, 0, 'c', 'p',80, "a5", 20);
    
  }
void can4()
  {
    servo_down_open();
    fline(55,55, 0.55, 0, 'c', 'p',80, "a5", 20);
    
    fline_xl(60, 60, 0.45,  30);   
    fline_ch_can(50, 50, 0.63, 350, 2);  // วิ่งเข้าไปเช็คว่ามีกระป๋องหรือไม่
    fline_mision(40, 40, 0.73,  0);   // วิ่งเข้าไปคีบกระป๋อง
    bline_xl(72, 72, 0.72,  20) ;  
    fline(55,55, 0.55, 0, 'c', 'p',80, "a5", 20);
    
  }


void can5()
  { 
    servo_down_open();
    fline(55,55, 0.55, 0, 'c', 'p',80, "a5", 20);
    fline(55,55, 0.55, 0, 'c', 's',80, "a4", 20);
    fline(55,55, 0.55, 50, 'n', 'r',60, "a4", 20);
    fline_ch_can(50, 50, 0.63, 450, 2);  // วิ่งเข้าไปเช็คว่ามีกระป๋องหรือไม่
    fline_mision(40, 40, 0.73,  0);   // วิ่งเข้าไปคีบกระป๋อง
     bline12_xr(75, 75, 0.55,  40) ;
        
     fline(55,55, 0.45, 0, 'c', 's',70, "a5", 20);
    
  }

void can6()
  { 
    servo_down_open();
    fline(55,55, 0.55, 0, 'c', 'p',80, "a5", 20);
    fline(55,55, 0.55, 0, 'c', 's',80, "a4", 20);
    fline(55,55, 0.55, 50, 'n', 'l',60, "a3", 20);
    fline_ch_can(50, 50, 0.63, 450, 2);  // วิ่งเข้าไปเช็คว่ามีกระป๋องหรือไม่
    fline_mision(40, 40, 0.73,  0);   // วิ่งเข้าไปคีบกระป๋อง
    bline11_xl(75, 75, 0.5,  40) ;
        
     fline(55,55, 0.45, 0, 'c', 'p',70, "a5", 20);
    
  }