#include <Wire.h> 
#include <R2A15908SP.h> 
R2A15908SP ra;

void setup(){
   audio();
  delay(1000);
  }

void loop(){}

void audio(){
  ra.setVolume_left(80); // -87...0 dB === int 0...87
  ra.setVolume_right(80);// -87...0 dB === int 0...87 
  ra.setIn_Gain(0,0);    // IN 1...5 === byte 0...4 /// int 7 === mute
                         // GAIN 0...20 dB step 2 dB === int 0...10
  ra.setStereo(0,1);     // 0 = stereo / 1 = Lch / 2 = Rch
                         // 0 = bypass / 1 = tone / 2 = tone&surround_hi / 3 = tone&surround_low
  ra.setTone(0,0);     // bass and treb -14...14 dB step 2 dB === int -7...7
  }   
