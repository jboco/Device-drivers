      //Device addresses
	  #define LSM303_ADDRESS_ACCEL          (0x32 >> 1)         
      #define LSM303_ADDRESS_MAG            (0x3C >> 1) 
	  #define L3GD20_ADDRESS                (0x6B)
	  
	  // Accelerometer registers
	    LSM303_REGISTER_ACCEL_CTRL_REG1_A         = 0x20   // 00000111   rw
      LSM303_REGISTER_ACCEL_CTRL_REG2_A         = 0x21   // 00000000   rw
      LSM303_REGISTER_ACCEL_CTRL_REG3_A         = 0x22   // 00000000   rw
      LSM303_REGISTER_ACCEL_CTRL_REG4_A         = 0x23   // 00000000   rw
      LSM303_REGISTER_ACCEL_CTRL_REG5_A         = 0x24   // 00000000   rw
      LSM303_REGISTER_ACCEL_CTRL_REG6_A         = 0x25   // 00000000   rw
      LSM303_REGISTER_ACCEL_REFERENCE_A         = 0x26   // 00000000   r
      LSM303_REGISTER_ACCEL_STATUS_REG_A        = 0x27   // 00000000   r
      LSM303_REGISTER_ACCEL_OUT_X_L_A           = 0x28
      LSM303_REGISTER_ACCEL_OUT_X_H_A           = 0x29
      LSM303_REGISTER_ACCEL_OUT_Y_L_A           = 0x2A
      LSM303_REGISTER_ACCEL_OUT_Y_H_A           = 0x2B
      LSM303_REGISTER_ACCEL_OUT_Z_L_A           = 0x2C
      LSM303_REGISTER_ACCEL_OUT_Z_H_A           = 0x2D
      LSM303_REGISTER_ACCEL_FIFO_CTRL_REG_A     = 0x2E
      LSM303_REGISTER_ACCEL_FIFO_SRC_REG_A      = 0x2F
      LSM303_REGISTER_ACCEL_INT1_CFG_A          = 0x30
      LSM303_REGISTER_ACCEL_INT1_SOURCE_A       = 0x31
      LSM303_REGISTER_ACCEL_INT1_THS_A          = 0x32
      LSM303_REGISTER_ACCEL_INT1_DURATION_A     = 0x33
      LSM303_REGISTER_ACCEL_INT2_CFG_A          = 0x34
      LSM303_REGISTER_ACCEL_INT2_SOURCE_A       = 0x35
      LSM303_REGISTER_ACCEL_INT2_THS_A          = 0x36
      LSM303_REGISTER_ACCEL_INT2_DURATION_A     = 0x37
      LSM303_REGISTER_ACCEL_CLICK_CFG_A         = 0x38
      LSM303_REGISTER_ACCEL_CLICK_SRC_A         = 0x39
      LSM303_REGISTER_ACCEL_CLICK_THS_A         = 0x3A
      LSM303_REGISTER_ACCEL_TIME_LIMIT_A        = 0x3B
      LSM303_REGISTER_ACCEL_TIME_LATENCY_A      = 0x3C
      LSM303_REGISTER_ACCEL_TIME_WINDOW_A       = 0x3D
	  
	  //Gyroscope registers 
	  GYRO_REGISTER_WHO_AM_I            = 0x0F   // 11010100   r
      GYRO_REGISTER_CTRL_REG1           = 0x20   // 00000111   rw
      GYRO_REGISTER_CTRL_REG2           = 0x21   // 00000000   rw
      GYRO_REGISTER_CTRL_REG3           = 0x22   // 00000000   rw
      GYRO_REGISTER_CTRL_REG4           = 0x23   // 00000000   rw
      GYRO_REGISTER_CTRL_REG5           = 0x24   // 00000000   rw
      GYRO_REGISTER_REFERENCE           = 0x25   // 00000000   rw
      GYRO_REGISTER_OUT_TEMP            = 0x26   //            r
      GYRO_REGISTER_STATUS_REG          = 0x27   //            r
      GYRO_REGISTER_OUT_X_L             = 0x28   //            r
      GYRO_REGISTER_OUT_X_H             = 0x29   //            r
      GYRO_REGISTER_OUT_Y_L             = 0x2A   //            r
      GYRO_REGISTER_OUT_Y_H             = 0x2B   //            r
      GYRO_REGISTER_OUT_Z_L             = 0x2C   //            r
      GYRO_REGISTER_OUT_Z_H             = 0x2D   //            r
      GYRO_REGISTER_FIFO_CTRL_REG       = 0x2E   // 00000000   rw
      GYRO_REGISTER_FIFO_SRC_REG        = 0x2F   //            r
      GYRO_REGISTER_INT1_CFG            = 0x30   // 00000000   rw
      GYRO_REGISTER_INT1_SRC            = 0x31   //            r
      GYRO_REGISTER_TSH_XH              = 0x32   // 00000000   rw
      GYRO_REGISTER_TSH_XL              = 0x33   // 00000000   rw
      GYRO_REGISTER_TSH_YH              = 0x34   // 00000000   rw
      GYRO_REGISTER_TSH_YL              = 0x35   // 00000000   rw
      GYRO_REGISTER_TSH_ZH              = 0x36   // 00000000   rw
      GYRO_REGISTER_TSH_ZL              = 0x37   // 00000000   rw
      GYRO_REGISTER_INT1_DURATION       = 0x38    // 00000000   rw
	  
	  
	  //Magnetometer registers 
	  LSM303_REGISTER_MAG_CRA_REG_M     = 0x00
      LSM303_REGISTER_MAG_CRB_REG_M     = 0x01
      LSM303_REGISTER_MAG_MR_REG_M      = 0x02
      LSM303_REGISTER_MAG_OUT_X_H_M     = 0x03
      LSM303_REGISTER_MAG_OUT_X_L_M     = 0x04
      LSM303_REGISTER_MAG_OUT_Z_H_M     = 0x05
      LSM303_REGISTER_MAG_OUT_Z_L_M     = 0x06
      LSM303_REGISTER_MAG_OUT_Y_H_M     = 0x07
      LSM303_REGISTER_MAG_OUT_Y_L_M     = 0x08
      LSM303_REGISTER_MAG_SR_REG_Mg     = 0x09
      LSM303_REGISTER_MAG_IRA_REG_M     = 0x0A
      LSM303_REGISTER_MAG_IRB_REG_M     = 0x0B
      LSM303_REGISTER_MAG_IRC_REG_M     = 0x0C
      LSM303_REGISTER_MAG_TEMP_OUT_H_M  = 0x31
      LSM303_REGISTER_MAG_TEMP_OUT_L_M  = 0x32
