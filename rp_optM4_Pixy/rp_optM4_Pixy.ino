#include <my_rp2040.h>
#include <my_TCS34725.h>
#define EEPROM_ADDR 0x50
#include <Pixy2I2C.h>

// This is the main Pixy object 
Pixy2I2C pixy;

#include <VL6180X.h>

VL6180X dis;
my_TCS34725 tcss = my_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

unsigned long last_time = millis();
int servo_down = 25;      //-------------------->> ตั้งค่า มื่อจับลงขนานกับพื้น
int servo_up = servo_down+90;       //-------------------->> ตั้งค่า มื่อจับยกขึ้นตั้งฉากกับพื้น

int servo_close = 110; 
int col_floor = 0;
int col_can = 0;
int dis_tant;
int no_can_ent = 0;
int num_can_l = 0;
int num_can_r = 0;
int num_can_m = 0;

int _distant_mission = 33;
int _distant_ch_can = 150;

int num_can_tt = 0;
int ch_tlr = 0;

float _coolor_red[] = {1.97, 0.42, 0.43};
float _coolor_green[] = {0.65, 1.50, 0.88};
float _coolor_blue[] = {0.61, 0.95, 1.45};
float _coolor_yello[] = {1.48, 1.11, 0.41};

String floor_R;
String floor_M;
String floor_L;

String can;

String color_ch="none";


void setup() 
  {    
      _seting();         //-------------------->>   ฟังก์ชัน ตั้งค่าต่าง ๆ ใน tab seting
      pixy.init();
      
      servo_down_open() ;    
      //servo_up_close() ;
      //servo_down_close() ;    
       //servo_down_open();
       servo(7,33 );
      pixy.setLED(255, 255, 255);
      pixy.setLamp(0x00, 0x00); // 1 means turn on the LED, 0 for turn off      
      //pixy.setLamp(0x01, 0x00); // 1 means turn on the LED, 0 for turn off
       sw();             //-------------------->> ฟังก์ชันรอกดปุ่ม
       //calibrate_M();sw(); 
       //read_sensor_M();
       //servo_ch_collor() ;
       start_game_random();
      
/*
    for(int i=0; i<5; i++)
      {
         can1();
         mision_MD2();
         
      }
    for(int i=0; i<5; i++)
      {
         can1();
         mision_MD2();
         
      }
   */  
      //////////////////------------------------>>>>>  Run funtion

       //start_game_random() ;
/*
       can1();
       mision_L();  //วางกล่องซ้าย
       can2();
       mision_MD();  //วางกล่องซ้าย
       can3();
       mision_R();  //วางกล่องซ้าย
       can4();
       mision_L();  //วางกล่องซ้าย

       can5();
       mision_MD();  //วางกล่องซ้าย
       can6();
       mision_R();  //วางกล่องซ้าย

  */   
 
    //////////////////------------------------>>>>>  

  }

void loop() 
  {
    check_can();
    /*
    rgb(0, 0, 0);
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
            }
          else if(sig == 2)
            {
              rgb(0, 1, 1);  
            }
          else
            {
              rgb(0, 0, 0);  
           
            }
        }
      }  
    */
    //Serial.print(my_tcs('r'));Serial.print("  ");
    //Serial.println(dis.readRangeSingleMillimeters());
    /*
   
    for(int i=0; i<8; i++)
      {
        Serial.print(mcp_m(i)); 
        Serial.print("  ");
      }
    Serial.println("");
    
    Serial.println(dis.readRangeSingleMillimeters());
    Serial.println(analogRead(28));

   */
   //Serial.print("distance : ");
   //Serial.println(dis.readRangeSingleMillimeters());
  }
