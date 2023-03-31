#include <TimerOne.h>

const int BUZZER =10;

// const int melody[]= {
//   262,294,330,349,393,440,494,523,
// };

const int melody[]= {
  262,294,330,349,393,440,494,523,
};

void setup() {
  // put your setup code here, to run once:
  Timer1.initialize();
  Timer1.pwm(BUZZER, 0);
  
  //Timer1.setPwmDuty(BUZZER, 512);
  Timer1.setPwmDuty(BUZZER, 100);

  for(int note=0;note<14;note++){
    Timer1.setPeriod(1000000/melody[note]);
    delay(500);
  }


  // for(int cnt=0;cnt<=2;cnt++) {
  //   Timer1.setPeriod(1000000/262);
  //   delay(1000);
  //   Timer1.setPeriod(1000000/294);
  //   delay(1000);
  // }

  Timer1.setPwmDuty(BUZZER, 0);

}

void loop() {
  // put your main code here, to run repeatedly:

}
