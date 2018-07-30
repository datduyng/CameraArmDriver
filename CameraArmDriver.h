/**
 * Author Dat Nguyen
 * Date: 6/4/2018
 *
 * This library help perform sequences and movement of the vamera Arm
 */


#ifndef CameraArmDriver_h
#define CameraArmDriver_h


#define botConst1 
#include<botConst.h>
#include <Servo.h>
#include <Arduino.h>



class CameraArmDriver{

  public:
    CameraArmDriver();// DEFAULT
    // init Servo
    void cameraArmBegin(int basePin, int shoulderPin);
    void end();
    void turnBase(char pos );
    void turnShoulder(char pos );
  	void commandMode();
    /**
     * This function get/ set the cameraFacePosition
     */
    int getCameraFacePosition();
    void setCameraFacePos(char pos); 

    /**
     * This function turn the base and init the shoulder to the left or right
     * take 1 argument 'r' or 'l' the position the relative to the camera arm namespace
     * not from the mobile platform
     * void
     */
    void turn(char pos);

    /**
     * this funciton init the camera arm to rest position
     */
    void rest();


  private:
    Servo _base, _shoulder;
    int _basePin, _shoulderPin;
    int cameraFacePos; // 1 beging right, -1 begin left, 0 being middle  
};


#endif
