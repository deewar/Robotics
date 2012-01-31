const int rightWheel = motorA;
const int leftWheel = motorB;
int ForwardSpeed ;
int StraightTime ;
int timeUnit ;
int TurnSpeed;
int TurnTime ;
int x;
int y;
int angle;

void Forward40cm(){
  motor[rightWheel] = ForwardSpeed;
  motor[leftWheel] = ForwardSpeed;
  int i;
  for (i = 0; i < StraightTime; i += timeUnit) {
    nxtSetPixel( x , y );
    x += cosDegrees(angle);
    y += sinDegrees(angle);
    wait1Msec(timeUnit);
  }
}

void Backward40cm(){
  motor[rightWheel] = ForwardSpeed*-1;
  motor[leftWheel] = ForwardSpeed*-1;
  int i;
  for ( i = 0 ; i < StraightTime ; i+=timeUnit) {
    nxtSetPixel( x , y );
    x -= cosDegrees(angle);
    y -= sinDegrees(angle);
    //wait1Msec(timeUnit);
  }
}

void Left90deg(){
  motor[rightWheel] = TurnSpeed;
  motor[leftWheel] = TurnSpeed*-1;
  angle = (angle+90) % 360;

  wait10Msec(TurnTime);
}

void Right90deg(){
  motor[rightWheel] = TurnSpeed*-1;
  motor[leftWheel] = TurnSpeed;
  angle = (angle-90 )% 360;
  wait10Msec(TurnTime);
}

void chill(){
  motor[rightWheel] = 0;
  motor[leftWheel] = 0;
  wait10Msec(100);
}

 void init(){
   ForwardSpeed = 10;
   StraightTime  =8360;
   timeUnit = 209;
   TurnSpeed = 10;
   TurnTime = 171;
   x = 15;
   y = 15;
   angle = 0;
 }
task main(){
  //Right90deg();
  init();
  wait10Msec(100);
  Forward40cm();
  chill();
  Left90deg();
  chill();
  Forward40cm();
  chill();
  Left90deg();
  chill();
  Forward40cm();
  chill();
  Left90deg();
  chill();
  Forward40cm();
  chill();
  Left90deg();
  motor[rightWheel] = 0;
  motor[leftWheel] = 0;
  wait10Msec(500);
}
