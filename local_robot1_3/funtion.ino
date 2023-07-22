void fw_ch_can (int ml, int mr, float kp, int tim , int ofset)
    {
        lasts_time_ch = millis();
        while(millis() - lasts_time_ch < tim)
          {
            int error_L = map(mcp_f(3), min_mcp_f(3), max_mcp_f(3), 0, 20 );
            int error_R = map(mcp_f(4), min_mcp_f(4), max_mcp_f(4), 0, 20 );
            errors = error_L - error_R;  
            I = 0;
            previous_I = 0;
            previous_error = 0;
            P = errors;
            I = I + previous_I;
            D = errors - previous_error ;            
            previous_I=I;
            previous_error=errors  ;  
            PID_output = (kp * P) + (0.00015 * I) + (kp* D); 

            Motor(ml + PID_output, mr - PID_output);
            //Serial.println(errors);
            if(mcp_f(2) < md_mcp_f(2) && mcp_f(5) < md_mcp_f(5)
               || mcp_f(3) > md_mcp_f(3) && mcp_f(4) > md_mcp_f(4))
              {
                //bz(200);
                break;                
              }
           if(analogRead(28) >= 2400)             
              { 
                while(1)
                  {
                    int error_L = map(mcp_f(3), min_mcp_f(3), max_mcp_f(3), 0, 20 );
                    int error_R = map(mcp_f(4), min_mcp_f(4), max_mcp_f(4), 0, 20 );
                    errors = error_L - error_R;  
                    I = 0;
                    previous_I = 0;
                    previous_error = 0;
                    P = errors;
                    I = I + previous_I;
                    D = errors - previous_error ;            
                    previous_I=I;
                    previous_error=errors  ;  
                    PID_output = (kp * P) + (0.00015 * I) + (kp* D); 
        
                    Motor(15 + PID_output, 15 - PID_output);
                    //Serial.println(errors);
                    if(mcp_f(3) > md_mcp_f(3) && mcp_f(4) > md_mcp_f(4))
                      {
                        break;                
                      }   
                  }          
              }  
          }  
        if(ofset > 0)
           {
              Motor(-ml,-mr);delay(ofset);
              Motor(0,0);delay(10);
           }
        else
           {
           } 
                 
    }

void fw_a3_a4(int ml, int mr, float kp, int ofset)
    {
       while(1)
          {
            int error_L = map(mcp_f(3), min_mcp_f(3), max_mcp_f(3), 0, 20 );
            int error_R = map(mcp_f(4), min_mcp_f(4), max_mcp_f(4), 0, 20 );
            errors = error_L - error_R;  
            I = 0;
            previous_I = 0;
            previous_error = 0;
            P = errors;
            I = I + previous_I;
            D = errors - previous_error ;            
            previous_I=I;
            previous_error=errors  ;  
            PID_output = (kp * P) + (0.00015 * I) + (kp* D); 

            Motor(ml + PID_output, mr - PID_output);
            Serial.println(errors);
            if(mcp_f(2) < md_mcp_f(2) && mcp_f(5) < md_mcp_f(5)
               || mcp_f(3) > md_mcp_f(3) && mcp_f(4) > md_mcp_f(4))
              {
                break;
              }
          }  
        if(ofset > 0)
           {
              Motor(-ml,-mr);delay(ofset);
              Motor(0,0);delay(50);
           }
        else
           {
           } 
                 
    }

void bw_a3_a4(int ml, int mr, float kp, int ofset)
    {
       while(1)
          {
            int error_L = map(mcp_b(3), min_mcp_b(3), max_mcp_b(3), 0, 20 );
            int error_R = map(mcp_b(4), min_mcp_b(4), max_mcp_b(4), 0, 20 );
            errors = error_L - error_R;  
            I = 0;
            previous_I = 0;
            previous_error = 0;
            P = errors;
            I = I + previous_I;
            D = errors - previous_error ;            
            previous_I=I;
            previous_error=errors  ;  
            PID_output = (kp * P) + (0.00015 * I) + (kp* D); 

            Motor(-(ml - PID_output), -(mr + PID_output));
            Serial.println(errors);
            if(mcp_b(2) < md_mcp_b(2) && mcp_b(5) < md_mcp_b(5)
              ||mcp_b(3) > md_mcp_b(3) && mcp_b(4) > md_mcp_b(4))
              {
                break;
              }
           }
        if(ofset > 0)
           {
              Motor(ml,mr);delay(ofset);
              Motor(0,0);delay(50);
           }
        else
           {
           }          
    }

void fw_stop_center()
    {
      while(1)
          {
            int error_L = map(mcp_f(3), min_mcp_f(3), max_mcp_f(3), 0, 20 );
            int error_R = map(mcp_f(4), min_mcp_f(4), max_mcp_f(4), 0, 20 );
            errors = error_L - error_R;  
            I = 0;
            previous_I = 0;
            previous_error = 0;
            P = errors;
            I = I + previous_I;
            D = errors - previous_error ;            
            previous_I=I;
            previous_error=errors  ;  
            PID_output = (0.2 * P) + (0.00015 * I) + (0.5* D); 

            Motor(30 + PID_output, 30 - PID_output);
            Serial.println(errors);
            if(analogRead(26) < md_adc(26)&& analogRead(27) < md_adc(27) )
              {
                break;
              }
          } 
         Motor(-10, -10); delay(10); 
         Motor(0, 0); delay(10);   
         if (mcp_f(3) > md_mcp_f(3) && mcp_f(4) < md_mcp_f(4))
            {
              do{Motor(30, -30);}while(mcp_f(3) > md_mcp_f(3)-150);
              Motor(-20, 20); delay(10); 
              Motor(0, 0); delay(200);    
            }
          else if (mcp_f(4) > md_mcp_f(4) && mcp_f(3) < md_mcp_f(3))
            {
              do{Motor(-30, 30);}while(mcp_f(4) > md_mcp_f(4)-150);
              Motor(20, -20); delay(10); 
              Motor(0, 0); delay(200);    
            }
    }


void bw_stop_ba7()
    {
      while(1)
          {
            int error_L = map(mcp_b(3), min_mcp_b(3), max_mcp_b(3), 0, 20 );
            int error_R = map(mcp_b(4), min_mcp_b(4), max_mcp_b(4), 0, 20 );
            errors = error_L - error_R;  
            I = 0;
            previous_I = 0;
            previous_error = 0;
            P = errors;
            I = I + previous_I;
            D = errors - previous_error ;            
            previous_I=I;
            previous_error=errors  ;  
            PID_output = (0.2 * P) + (0.00015 * I) + (0.5* D); 

            Motor(-(25 - PID_output), -(25 + PID_output));
            Serial.println(errors);
            if(mcp_f(7) < md_mcp_f(7))
              {
                break;
              }
          }
        Motor(40, 40); delay(50); 
        Motor(0, 0); delay(100);
    } 
void bw_stop_ba0()
    {
      while(1)
          {
            int error_L = map(mcp_b(3), min_mcp_b(3), max_mcp_b(3), 0, 20 );
            int error_R = map(mcp_b(4), min_mcp_b(4), max_mcp_b(4), 0, 20 );
            errors = error_L - error_R;  
            I = 0;
            previous_I = 0;
            previous_error = 0;
            P = errors;
            I = I + previous_I;
            D = errors - previous_error ;            
            previous_I=I;
            previous_error=errors  ;  
            PID_output = (0.2 * P) + (0.00015 * I) + (0.5* D); 

            Motor(-(25 - PID_output), -(25 + PID_output));
            //Serial.println(errors);
            if(mcp_f(0) < md_mcp_f(0))
              {
                break;
              }
          }
        Motor(40, 40); delay(50); 
        Motor(0, 0); delay(100);
    }
void tx_left(int sp, int ofset)
    {
       Motor(0, 0); delay(100);
       do{Motor(-sp, sp);}while(mcp_f(0) > md_mcp_f(0)-100);delay(10); 
       do{Motor(-sp, sp);}while(mcp_f(0) < md_mcp_f(0)-100);delay(10);
       do{Motor(-sp, sp);}while(mcp_f(0) > md_mcp_f(0)-100);delay(10);
       do{Motor(-sp, sp);}while(mcp_f(0) > md_mcp_f(0)-100);delay(10);
       do{Motor(-sp, sp);}while(mcp_f(3) > md_mcp_f(3)-100);delay(10);
       
       Motor(sp, -sp); delay(ofset); 
       Motor(0, 0); delay(200);
    }
void tx_right(int sp, int ofset)
    {
       Motor(0, 0); delay(100);
       do{Motor(sp, -sp);}while(mcp_f(7) > md_mcp_f(7)-100);delay(10); 
       do{Motor(sp, -sp);}while(mcp_f(7) < md_mcp_f(7)-100);delay(10);
       do{Motor(sp, -sp);}while(mcp_f(7) > md_mcp_f(7)-100);delay(10);
       do{Motor(sp, -sp);}while(mcp_f(7) > md_mcp_f(7)-100);delay(10);
       do{Motor(sp, -sp);}while(mcp_f(4) > md_mcp_f(4)-100);delay(10);
       
       Motor(-sp, sp); delay(ofset); 
       Motor(0, 0); delay(200);
    }