#ifndef GVAC_BASE_CONFIG_H
#define GVAC_BASE_CONFIG_H

//uncomment the base you're building
#define GVAC_BASE DIFFERENTIAL_DRIVE // 2WD and Tracked robot w/ 2 motors
// #define GVAC_BASE SKID_STEER      // 4WD robot
// #define GVAC_BASE ACKERMANN       // Car-like steering robot w/ 2 motors
// #define GVAC_BASE ACKERMANN1      // Car-like steering robot w/ 1 motor
// #define GVAC_BASE MECANUM         // Mecanum drive robot

//uncomment the motor driver you're using
#define USE_L298_DRIVER
// #define USE_BTS7960_DRIVER
// #define USE_ESC

//uncomment the IMU you're using
//#define USE_GY85_IMU
// #define USE_MPU6050_IMU
// #define USE_MPU9150_IMU
#define USE_MPU9250_IMU

#define DEBUG 1

#define K_P 0.7 // P constant
#define K_I 0.3 // I constant
#define K_D 0.0015 // D constant

//define your robot' specs here
#define MAX_RPM 80                // motor's maximum RPM
#define COUNTS_PER_REV 3576       // wheel encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.70       // wheel's diameter in meters
#define PWM_BITS 12               // PWM Resolution of the microcontroller
#define LR_WHEELS_DISTANCE 0.185  // distance between left and right wheels
#define FR_WHEELS_DISTANCE 0.30   // distance between front and rear wheels. Ignore this if you're on 2WD/ACKERMANN
#define MAX_STEERING_ANGLE 0.415  // max steering angle. This only applies to Ackermann steering

//=================BIGGER ROBOT SPEC (BTS7960)=============================
// #define K_P 0.05  // P constant
// #define K_I 0.9   // I constant
// #define K_D 0.1   // D constant

// define your robot' specs here
// #define MAX_RPM 45               // motor's maximum RPM
// #define COUNTS_PER_REV 4000      // wheel encoder's no of ticks per rev
// #define WHEEL_DIAMETER 0.15      // wheel's diameter in meters
// #define PWM_BITS 8               // PWM Resolution of the microcontroller
// #define LR_WHEELS_DISTANCE 0.32  // distance between left and right wheels
// #define FR_WHEELS_DISTANCE 0.38  // distance between front and back wheels. Ignore this if you're on 2WD/ACKERMANN
//================= END OF BIGGER ROBOT SPEC =============================

/*
ROBOT ORIENTATION
         FRONT
    MOTOR1  MOTOR2  (2WD/ACKERMANN)
    MOTOR3  MOTOR4  (4WD/MECANUM)  
         BACK
*/

/// ENCODER PINS
#define MOTOR1_ENCODER_A 40
#define MOTOR1_ENCODER_B 41 

#define MOTOR2_ENCODER_A 0
#define MOTOR2_ENCODER_B 1 

#define MOTOR3_ENCODER_A 31
#define MOTOR3_ENCODER_B 32 

#define MOTOR4_ENCODER_A 33
#define MOTOR4_ENCODER_B 34

//MOTOR PINS
#ifdef USE_L298_DRIVER
  #define MOTOR_DRIVER L298

  #define MOTOR1_PWM 7
  #define MOTOR1_IN_A 6
  #define MOTOR1_IN_B 5

  #define MOTOR2_PWM 2
  #define MOTOR2_IN_A 4
  #define MOTOR2_IN_B 3

  #define MOTOR3_PWM 28
  #define MOTOR3_IN_A 29
  #define MOTOR3_IN_B 30

  #define MOTOR4_PWM 37
  #define MOTOR4_IN_A 36
  #define MOTOR4_IN_B 35

  #define PWM_MAX pow(2, PWM_BITS) - 1
  #define PWM_MIN -PWM_MAX
#endif 

#ifdef USE_BTS7960_DRIVER
  #define MOTOR_DRIVER BTS7960  

  #define MOTOR1_PWM 1 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR1_IN_A 21
  #define MOTOR1_IN_B 20

  #define MOTOR2_PWM 8 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR2_IN_A 5
  #define MOTOR2_IN_B 6

  #define MOTOR3_PWM 0 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR3_IN_A 22
  #define MOTOR3_IN_B 23

  #define MOTOR4_PWM 2 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR4_IN_A 4
  #define MOTOR4_IN_B 3

  #define PWM_MAX pow(2, PWM_BITS) - 1
  #define PWM_MIN -PWM_MAX
#endif

#ifdef USE_ESC
  #define MOTOR_DRIVER ESC  

  #define MOTOR1_PWM 1 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR1_IN_A 21
  #define MOTOR1_IN_B 20

  #define MOTOR2_PWM 8 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR2_IN_A 5
  #define MOTOR2_IN_B 6

  #define MOTOR3_PWM 0 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR3_IN_A 22
  #define MOTOR3_IN_B 23

  #define MOTOR4_PWM 2 //DON'T TOUCH THIS! This is just a placeholder
  #define MOTOR4_IN_A 4
  #define MOTOR4_IN_B 3

  #define PWM_MAX 400
  #define PWM_MIN -PWM_MAX
#endif

#define STEERING_PIN 7

#endif
