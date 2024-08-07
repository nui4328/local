void _seting()
  {
      Serial.begin(9600);  
      Wire.begin();  
      dis.init();
      dis.configureDefault();
      dis.setTimeout(500);
          
      pos_motor_cal(15, 15, 10);
      to_set_motor_LR(100, 100);          //ตั้งค่ามอเตอร์ให้หุ่นยนต์วิ่งตรง
      
      to_slow_motor(30, 30);           // ตั้งค่า ความเร็วมอเตอร์เวลาเข้าแยก
      to_turn_center_l(-100, 100 );   // ตั้งค่ามอเตอร์หมุนซ้ายขวา ตอนเลี้ยวซ้ายแบบ center
      to_turn_center_r(100, -100 );   // ตั้งค่ามอเตอร์หมุนซ้ายขวา ตอนเลี้ยวขาวแบบ center
      to_turn_front_l(-10, 100);     // ตั้งค่ามอเตอร์หมุนซ้ายขวา ตอนเลี้ยวซ้ายแบบ เซนเซอร์หน้า  เดินหน้า
      to_turn_front_r(100, -10);     // ตั้งค่ามอเตอร์หมุนซ้ายขวา ตอนเลี้ยวขวาแบบ เซนเซอร์หน้า  เดินหน้า
      to_speed_turn_fl(100, 60, 40);  // ค่าพุ่งตัวออกหลังจากการเลี้ยว มีผลต่อตัวแปรสุดท้ายของคำสั่งเลี้ยว ถ้าเป็น 0
      to_speed_turn_fr(60, 100, 40);  // ค่าพุ่งตัวออกหลังจากการเลี้ยว มีผลต่อตัวแปรสุดท้ายของคำสั่งเลี้ยว ถ้าเป็น 0
      
      to_brake_fc(1, 30);            // ตั้งค่าในการหยุดมอเตอร์ก่อนหมุนซ้ายขวา to_brake_fc(...f..., ....c...); 
      to_brake_bc(2, 15);
      to_delay_f(10);                 // ระยะทางในการข้ามเส้นเวลาหมุนตัวแบบ f
    
      kp_sl(0.8, 0.8);  // kp และ kd ในฟังก์ เดินตามเส้นแบบช้า
      kd_fw(0.8);
      kd_bw(1.2);

      sensor_set();
      //setup_tcs();
  }
