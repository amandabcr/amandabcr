*/Created by Amanda Brambila Conceição Ribeiro
  01/04/22/*

const int g=3, y=4, r=5;

void setup() 
{
  pinMode (g,OUTPUT);
  pinMode (y,OUTPUT);
  pinMode (r,OUTPUT);
}

void loop() 
{
  digitalWrite(g,HIGH);
  delay(4500);
  digitalWrite(y, HIGH);
  delay(250);
  digitalWrite(y, LOW);
  delay(250);
  digitalWrite(y, HIGH);
  digitalWrite(g,LOW);
  delay(250);
  digitalWrite(y, LOW);
  digitalWrite(r, HIGH);
  delay(6500);
  digitalWrite(r, LOW);
  }
