void check_floor_M()
  {
        
    pixy.setLamp(0x01, 0x00); // 1 means turn on the LED, 0 for turn off
    pixy.ccc.getBlocks();
    if (pixy.ccc.numBlocks)
      {
        Serial.print("Detected ");
        Serial.println(pixy.ccc.numBlocks);
        for (int i=0; i<pixy.ccc.numBlocks; i++)
          {
            Serial.print("  block ");
            Serial.print(i);
            Serial.print(": ");
            pixy.ccc.blocks[i].print();
            int sig = pixy.ccc.blocks[i].m_signature;
            int x = pixy.ccc.blocks[i].m_x;
            int y = pixy.ccc.blocks[i].m_y;
            long w = pixy.ccc.blocks[i].m_width;
            long h = pixy.ccc.blocks[i].m_height;
            long s = w*h;
            Serial.println(sig );
            if(sig == 1)
              {
                rgb(0, 0, 1); 
                floor_M = "red"; 
              }
            else if(sig == 2)
              {
                rgb(0, 1, 1);  
                floor_M = "yello"; 
              }
            else
              {
                rgb(0, 1, 0);
                floor_M = "green";   
             
              }
          }
      }
  }


void check_floor_R()
  {
    pixy.setLamp(0x01, 0x00); // 1 means turn on the LED, 0 for turn off
    pixy.ccc.getBlocks();
    if (pixy.ccc.numBlocks)
      {
        Serial.print("Detected ");
        Serial.println(pixy.ccc.numBlocks);
        for (int i=0; i<pixy.ccc.numBlocks; i++)
        {
          Serial.print("  block ");
          Serial.print(i);
          Serial.print(": ");
          pixy.ccc.blocks[i].print();
          int sig = pixy.ccc.blocks[i].m_signature;
          int x = pixy.ccc.blocks[i].m_x;
          int y = pixy.ccc.blocks[i].m_y;
          long w = pixy.ccc.blocks[i].m_width;
          long h = pixy.ccc.blocks[i].m_height;
          long s = w*h;
          Serial.println(sig );
          if(sig == 1)
            {
              rgb(0, 0, 1); 
              floor_R = "red"; 
            }
          else if(sig == 2)
            {
              rgb(0, 1, 1);  
              floor_R = "yello"; 
            }
          else
            {
              rgb(0, 1, 0);
              floor_R = "green";   
           
            }
        }
      }
  }

void check_can()
  {
    pixy.setLamp(0x01, 0x00); // 1 means turn on the LED, 0 for turn off
    pixy.ccc.getBlocks();
    if (pixy.ccc.numBlocks)
      {
        Serial.print("Detected ");
        Serial.println(pixy.ccc.numBlocks);
        for (int i=0; i<pixy.ccc.numBlocks; i++)
        {
          Serial.print("  block ");
          Serial.print(i);
          Serial.print(": ");
          pixy.ccc.blocks[i].print();
          int sig = pixy.ccc.blocks[i].m_signature;
          int x = pixy.ccc.blocks[i].m_x;
          int y = pixy.ccc.blocks[i].m_y;
          long w = pixy.ccc.blocks[i].m_width;
          long h = pixy.ccc.blocks[i].m_height;
          long s = w*h;
          long size_obj = w*h;
          Serial.println(sig );
          if(size_obj > 1500)
            {
              if(sig == 4 || sig == 1)
                {
                  rgb(0, 0, 1); 
                  can = "red"; 
                }
              else if(sig == 5 || sig == 2)
                {
                  rgb(0, 1, 1);  
                  can = "yello"; 
                }
              else if(sig == 6 || sig == 3)
                {
                  rgb(0, 1, 0);
                  can = "green";                
                }
              else
                {
                  rgb(0, 0, 0);
                  can = "none";                
                }
            }
           else
                {
                  rgb(0, 0, 0);
                  can = "none";                
                }
        }
      }
  }
