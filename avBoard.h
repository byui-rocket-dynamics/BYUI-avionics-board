/*****************************************************
 * FILE: avBoard.h
 * 
 * AUTHORS: Zac Carico
 * 
 * SUMMARY: Library for communicating with the avionics
 *          board. This will provide a way of how the
 *          data from the board will be received.
 * ***************************************************/

#ifndef AV_BOARD
#define AV_BOARD

class AvBoard{
   // TODO: Define all public functions that will be used.
   //       For now, everything will be of type void* to be
   //       fexible with any type of data being received. 
public:
   void getAlt(void*data);
   void getGyr(void *data);
   void getMag(void *data);
   void getBar(void *data);
   void getAcc(void *data);
   void getPacket(void *data);

   void setADC0(void *setting);
   void setADC1(void *setting);
   void setPin0(void *setting);
   void setPin1(void *setting);

   void readPacket(void *data);
   void readADC0(void *data);
   void readADC1(void *data);
   
   // The goal is to get the buzzer to play 
   //    "Rocket Man" during flight;
   void buzzTune(void *tune);
   
private:
   void *alt;
   void *mag;
   void *bar;
   void *gyr;

   void *adc0;
   void *adc1;
   void *tune;
};

#endif /*AV_BOARD*/ 