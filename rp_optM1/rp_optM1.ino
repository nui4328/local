#include <my_rp2040.h>
#define EEPROM_ADDR 0x50

#include <VL6180X.h>

VL6180X dis;

unsigned long last_time = millis();
int servo_down = 33;      //-------------------->> ตั้งค่า มื่อจับลงขนานกับพื้น
int servo_up = servo_down+90;       //-------------------->> ตั้งค่า มื่อจับยกขึ้นตั้งฉากกับพื้น

int servo_close = 130; 
int col_floor = 0;
int col_can = 0;
int dis_tant;
int no_can_ent = 0;
int num_can_l = 0;
int num_can_r = 0;

int _distant_mission = 20;
int _distant_ch_can = 150;

int num_can_tt = 0;
int ch_tlr = 0;


void setup() 
  {    
      _seting();         //-------------------->>   ฟังก์ชัน ตั้งค่าต่าง ๆ ใน tab seting

      
      //servo_down_open() ;    
      //servo_up_close() ;
      //servo_down_close() ;    
       
      
       sw();             //-------------------->> ฟังก์ชันรอกดปุ่ม
 
      
      
      //////////////////------------------------>>>>>  Run funtion


      start_game_random(); 
      run_game2();

   
 
    //////////////////------------------------>>>>>  

  }

void loop() 
  {
    for(int i=0; i<8; i++)
      {
        Serial.print(mcp_m(i)); 
        Serial.print("  ");
      }
    Serial.println("");
    Serial.println(dis.readRangeSingleMillimeters());
    Serial.println(analogRead(28));
  }
