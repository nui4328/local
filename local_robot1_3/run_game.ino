

void start_run()
  {
        down_servo();
    
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();
        tx_right(35, 25);
        fw_ch_can(50, 50, 0.3, 500, 20);delay(200);     
    
    
    
    
    ////////////////////////#########################////////////////////###############
        if(analogRead(28) <= 1500) 
          {
            fline(0, 0, 0.4, 10,'n','r',40, "a4", 30);
            fw_a3_a4(50, 50, 0.3, 0);
            do{Motor(40, 40);}while(mcp_b(1) > md_mcp_f(1));
            //fline(0, 0, 0.4, 2,'n','s',70, "a4", 30);
            st_can1 = 1;
            goto can_2;   /////////////////////////////////      goto can_2;  
          }
        else{}
    ////////////////////////#########################////////////////////###############

        servo_mission(); 
        bline(30,30, 0.3, 400, 'n', 's',50, "a2", 1); 
        bw_a3_a4(50, 50, 0.3, 0);
        bw_stop_ba7();
        Motor(0,0);delay(100); 
        tx_right(35, 25);   
        Motor(0,0);delay(10);   
    
        check_box();
   
   ///////////////////////////////////////////////////////////////////////////เริ่มกล้อง 222222222222222
       
        down_servo();
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();
        tx_left(35, 25);
            
        can_2: {} //////////////////////////////////////////////////////////////// can_2: {}
    
        fw_ch_can(50, 50, 0.3, 500, 20); delay(200);
        st_can2 = 1; 
    ////////////////////////#########################////////////////////###############  can2
    
        if(analogRead(28) <= 1500) 
            {
              bw_a3_a4(50, 50, 0.3, 0.4);
              bw_stop_ba7();
              tx_right(40, 20);   
              Motor(0,0);delay(10); 
              st_can2 = 1;  
              goto can_3;   /////////////////////////////////      goto can_3;  
            }

    ////////////////////////#########################////////////////////###############

        servo_mission(); 
        bline(30,30, 0.3, 400, 'n', 's',50, "a2", 1); 
        bw_a3_a4(50, 50, 0.3, 0);
        bw_stop_ba0();
        Motor(0,0);delay(100);
        tx_left(35, 25);   
        Motor(0,0);delay(10);   
    
        check_box();
        can_3_1: {}
  
/////////////////////////////////////////////////////////////////////////////เริ่ม..กล่อง33333333333333333333
    
    down_servo();
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    can_3: {}
    fline(50,50,0.2,0,'c','r',50, "a4", 30);  
    fw_ch_can(50, 50, 0.3, 500, 20); delay(200);  
         
    st_can3 = 1;

      ////////////////////////#########################////////////////////###############  can3    
    if(analogRead(28) <= 1500) 
      {

        bline(40,40,0.4,200,'n','r',50, "a4", 30);
        fline(50,50,0.2,0,'c','p',80, "a4", 30);
                  
        goto can_4;   /////////////////////////////////    can_4: {}  goto can_4;  
      }

    ////////////////////////#########################////////////////////###############
  

    servo_mission(); 
    
    bline(50,50,0.3,0,'c','r',45, "a4", 30);
    fline(50,50,0.3,0,'c','p',45, "a5", 25);  delay(10);

    check_box() ;
    can_4_1: {} 
//////////////////////////////////////////////////////////////////////////////เริ่มกล่อง 44444444444444444444444
    down_servo();
    fline(50,50,0.2,0,'c','p',80, "a4", 30);    
    fline(50,50,0.2,0,'c','l',50, "a3", 30);  
    can_4: {}
    fw_ch_can(50, 50, 0.3, 500, 20); delay(200);  

    ////////////////////////#########################////////////////////###############  can4    
    if(analogRead(28) <= 1500) 
      {    
        bline(50,50,0.3,0,'c','r',50, "a4", 30);          
        goto can_5;   /////////////////////////////////    can_5: {}  goto can_5;  
      }
    else{}
    ////////////////////////#########################////////////////////###############

    servo_mission(); 
    
    bline(50,50,0.45,0,'c','l',45, "a3", 30);
    fline(50,50,0.45,0,'c','p',45, "a5", 25);  delay(10);

    check_box() ;
    
//////////////////////////////////////////////////////////////////////////////เริ่มกล่อง 55555555555555555555
        down_servo();
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        can_5: {}
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();
        tx_right(35, 25);
        fw_ch_can(50, 50, 0.3, 500, 20);delay(200);   
      
    ////////////////////////#########################////////////////////###############
        if(analogRead(28) <= 1500) 
          {
            fline(0, 0, 0.4, 10,'n','r',40, "a4", 30);
            fw_a3_a4(50, 50, 0.3, 0);
            do{Motor(40, 40);}while(mcp_b(1) > md_mcp_f(1));
            goto can_6;   /////////////////////////////////    can_6: {}  goto can_6;   
          }
        else{}
    ////////////////////////#########################////////////////////###############

        servo_mission(); 
        bline(30,30, 0.3, 400, 'n', 's',50, "a2", 1); 
        bw_a3_a4(50, 50, 0.3, 0);
        bw_stop_ba7();
        Motor(0,0);delay(100); 
        tx_right(35, 25);   
        Motor(0,0);delay(10);   
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
    
        check_box();
   
   
//////////////////////////////////////////////////////////////////////////เริ่มกล่อง 666666666666666666666
        down_servo();
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        down_servo();
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();
        tx_left(35, 25);
            
        can_6: {} //////////////////////////////////////////////////////////////// can_2: {}
    
        fw_ch_can(50, 50, 0.3, 500, 20); delay(200);
        
    ////////////////////////#########################////////////////////###############  can6
    
        if(analogRead(28) <= 1500) 
            {
              bline(30,30, 0.3, 400, 'n', 's',50, "a2", 1); 
              bw_a3_a4(50, 50, 0.3, 0);
              bw_stop_ba7();
              tx_right(40, 20);   
              Motor(0,0);delay(10); 
              goto can_7;   /////////////////////////////////      goto can_7;  
            }

    ////////////////////////#########################////////////////////###############

        servo_mission(); 
        bline(30,30, 0.3, 400, 'n', 's',50, "a2", 1); 
        bw_a3_a4(50, 50, 0.3, 0);
        bw_stop_ba0();
        Motor(0,0);delay(100);
        tx_left(35, 25);   
        Motor(0,0);delay(10);   
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
    
        check_box();

/////////////////////////////////////////////////////////////////////////////เริ่ม..กล่อง77777

    down_servo();
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    can_7: {}
    fline(50,50,0.2,0,'c','r',50, "a4", 30);  
    fw_ch_can(50, 50, 0.3, 500, 20); delay(200);          


      ////////////////////////#########################////////////////////###############  can7    
    if(analogRead(28) <= 1500) 
      {

        bline(40,40,0.4,200,'n','r',50, "a4", 30);
        fline(50,50,0.2,0,'c','p',80, "a4", 30);
                  
        goto can_8;   /////////////////////////////////    can_8: {}  goto can_8;  
      }

    ////////////////////////#########################////////////////////###############
  

    servo_mission(); 
    
    bline(50,50,0.3,0,'c','r',45, "a4", 30);
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    fline(50,50,0.3,0,'c','p',45, "a5", 25);  delay(10);

    check_box() ;
//////////////////////////////////////////////////////////////////////////////เริ่มกล่อง 88888888
    down_servo();
    fline(50,50,0.2,0,'c','p',80, "a4", 30); 
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    fline(50,50,0.2,0,'c','p',80, "a4", 30);   
    fline(50,50,0.2,0,'c','l',50, "a3", 30);  
    can_8: {}
    fw_ch_can(50, 50, 0.3, 500, 20); delay(200);  

    ////////////////////////#########################////////////////////###############  can8    
    if(analogRead(28) <= 1500) 
      {  
        bline(50,50,0.3,0,'c','r',50, "a4", 30);          
        goto can_9;   /////////////////////////////////    can_9: {}  goto can_9;  
      }
    else{}
    ////////////////////////#########################////////////////////###############

    servo_mission(); 
    
    bline(50,50,0.45,0,'c','l',45, "a3", 30);
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    fline(50,50,0.2,0,'c','p',80, "a4", 30);
    fline(50,50,0.45,0,'c','p',45, "a5", 25);  delay(10);

    check_box() ;


//////////////////////////////////////////////////////////////////////////////เริ่มกล่อง 99999999

        down_servo();
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        can_9: {}
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();
        tx_right(35, 25);
        fw_ch_can(50, 50, 0.3, 500, 20);delay(200);   
      
    ////////////////////////#########################////////////////////###############
        if(analogRead(28) <= 1500) 
          {
            fline(0, 0, 0.4, 10,'n','r',40, "a4", 30);
            fw_a3_a4(50, 50, 0.3, 0);
            do{Motor(40, 40);}while(mcp_b(1) > md_mcp_f(1));
            goto can_10;   /////////////////////////////////    can_10: {}  goto can_10;   
          }
        else{}
    ////////////////////////#########################////////////////////###############

        servo_mission();  
        bline(30,30, 0.3, 400, 'n', 's',50, "a2", 1);        
        bw_a3_a4(50, 50, 0.3, 0);
        bw_stop_ba7();
        Motor(0,0);delay(100); 
        tx_right(35, 25);   
        Motor(0,0);delay(10);   
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
    
        check_box();
   
   
//////////////////////////////////////////////////////////////////////////เริ่มกล่อง 10
        down_servo();
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        down_servo();
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();
        tx_left(35, 25);
            
        can_10: {} //////////////////////////////////////////////////////////////// can_10: {}
    
        fw_ch_can(50, 50, 0.3, 500, 20); delay(200);
        
    ////////////////////////#########################////////////////////###############  can10
    
        if(analogRead(28) <= 1500) 
            {
              bline(30,30, 0.3, 400, 'n', 's',50, "a2", 1); 
              bw_a3_a4(50, 50, 0.3, 0);
              bw_stop_ba7();
              tx_right(40, 20);   
              Motor(0,0);delay(10); 
              goto can_11;   /////////////////////////////////      goto can_11;  
            }

    ////////////////////////#########################////////////////////###############

        servo_mission(); 
        bline(30,30, 0.3, 400, 'n', 's',50, "a2", 1); 
        bw_a3_a4(50, 50, 0.3, 0);
        bw_stop_ba0();
        Motor(0,0);delay(100);
        tx_left(35, 25);   
        Motor(0,0);delay(10); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);  
    
        check_box();

//////////////////////////////////////////////////////////////////////////////เริ่มกล่อง 11   11
        down_servo();
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();
        
        can_11: {}
        
        fline(0, 0, 0.4, 10,'n','r',40, "a4", 30);
        
        fw_ch_can(50, 50, 0.3, 800, 20);delay(200);  

        
     
    ////////////////////////#########################////////////////////###############
        if(analogRead(28) <= 1500) 
          {
             bw_a3_a4(50, 50, 0.3, 0);
             do{Motor(-30, -30);}while(analogRead(26) > md_adc(26));
             Motor(30,30);delay(20); 
             Motor(0,0);delay(100); 
             fline(0, 0, 0.4, 10,'n','l',40, "a4", 30); 
     
             goto can_12;   /////////////////////////////////    can_12: {}  goto can_12;   
          }
        else{}
    ////////////////////////#########################////////////////////###############

        servo_mission(); 
        
        bw_a3_a4(50, 50, 0.3, 0);
        bw_stop_ba7();
        Motor(0,0);delay(100); 
        fline(0,0,0.3,10,'n','r',50, "a5", 2); 
        fline(0,0,0.3,10,'n','r',50, "a5", 2); 
        fline(0,0,0.3,10,'n','r',50, "a4", 30);

        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
    
        check_box();
    ////////////////////////#########################////////////////////############### เริ่มกล่อง  12   
        down_servo();
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();
        
        can_12: {}
        
        fw_ch_can(30, 30, 0.3, 600, 30);delay(200);  

        
     
    ////////////////////////#########################////////////////////###############
        if(analogRead(28) <= 1500) 
          {
             bw_a3_a4(50, 50, 0.3, 0);
             do{Motor(-30, -30);}while(analogRead(26) > md_adc(26));
             Motor(30,30);delay(30); 
             Motor(0,0);delay(100); 
             fline(0, 0, 0.4, 10,'n','l',40, "a4", 30); 
     
             goto can_13;   /////////////////////////////////    can_12: {}  goto can_12;   
          }
        else{}
    ////////////////////////#########################////////////////////###############

        servo_mission(); 
        fline(0,0,0.3,10,'n','r',50, "a4", 30);

        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
    
        check_box();

//////////////////////////////////////////////////////////////////////////////เริ่มกล่อง 13   13
        down_servo();
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        
        fw_a3_a4(50, 50, 0.3, 0);
        fw_stop_center();      
        
        fline(0, 0, 0.4, 10,'n','l',40, "a3", 40); 
        
        can_13: {}
        
        fw_ch_can(50, 50, 0.3, 800, 20);delay(200);  

        
     
    ////////////////////////#########################////////////////////###############
        if(analogRead(28) <= 1500) 
          {
              bw_a3_a4(50, 50, 0.3, 0);
              bw_stop_ba0();
              Motor(0,0);delay(100); 
              fline(0,0,0.3,10,'n','l',50, "a5", 2); 
              fline(0,0,0.3,10,'n','l',50, "a5", 2); 
              fline(0,0,0.3,10,'n','l',50, "a4", 30);
      
              fline(50,50,0.45,0,'c','p',45, "a5", 25); 
              fline(50,50,0.45,0,'c','p',45, "a5", 25);
              fline(50,50,0.45,0,'c','p',45, "a5", 25);
              fline(50,50,0.45,0,'c','p',45, "a5", 25); 
              fline(50,50,0.45,0,'c','p',45, "a5", 25); 
              fw_a3_a4(30, 30, 0.3, 0);
              Motor(30,30);delay(400); 
              Motor(-30,-30);delay(30); 
              Motor(0,0);delay(100); 
              
              goto can_end;
             
          }
        else{}
    ////////////////////////#########################////////////////////###############

         servo_mission(); 
        
         bw_a3_a4(50, 50, 0.3, 0);
         bw_stop_ba0();
         Motor(0,0);delay(100); 
         fline(0,0,0.3,10,'n','l',50, "a5", 2); 
         fline(0,0,0.3,10,'n','l',50, "a5", 2); 
         fline(0,0,0.3,10,'n','l',50, "a4", 30);

        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25);
        fline(50,50,0.45,0,'c','p',45, "a5", 25); 
    
        check_box();
        bw_a3_a4(40, 40, 0.2, 0);
        Motor(-30, -30);delay(400);
        Motor(30, 30);delay(20);
        Motor(0, 0);delay(400);

        can_end: {}
  }
