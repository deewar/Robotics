const int rightWheel = motorA;
const int leftWheel = motorB;
int ForwardSpeed = 10;
int StraightTime  =835;
int TurnSpeed = 10;
int TurnTime = 171;

void Forward40cm(){
  motor[rightWheel] = ForwardSpeed;
  motor[leftWheel] = ForwardSpeed;
  wait10Msec(StraightTime);
}

void Backward40cm(){
  motor[rightWheel] = ForwardSpeed*-1;
  motor[leftWheel] = ForwardSpeed*-1;
  wait10Msec(StraightTime);
}

void Left90deg(){
  motor[rightWheel] = TurnSpeed;
  motor[leftWheel] = TurnSpeed*-1;
  wait10Msec(TurnTime);
}

void Right90deg(){
  motor[rightWheel] = TurnSpeed*-1;
  motor[leftWheel] = TurnSpeed;
  wait10Msec(TurnTime);
}

void chill(){
  motor[rightWheel] = 0;
  motor[leftWheel] = 0;
  wait10Msec(100);
}

task main(){
  //Right90deg();
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
}
