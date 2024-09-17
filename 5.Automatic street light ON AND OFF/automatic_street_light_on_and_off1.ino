// C++ code
//
void setup()
{
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int a=analogRead(A0);
  if(a>=750){
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
  }else{
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
  }
}
