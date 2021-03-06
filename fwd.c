const int rightWheel = motorA;
const int leftWheel = motorB;
int ForwardSpeed = 10;
int StraightTime  = 835;
int TurnSpeed = 10;
int TurnTime = 180;

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

task main(){
  //Right90deg();
  Forward40cm();
  //Left90deg();
  /*Forward40cm();
  Left90deg();
  Forward40cm();
  Left90deg();
  Forward40cm();*/
}
