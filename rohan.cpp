#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
  int gd=DETECT , gm=VGAMAX;
  initgraph (&gd,&gm,NULL);
  //setbkcolor(WHITE);
  putpixel(100,200,GREEN);
  line(100,150,100,300);
  line(100,300,50,450);
  line(100,300,150,450);
  line(100,150,50,225);
  line(100,150,150,225);
  line(100,150,100,150);
  //rectangle(100,200,300,400);
  circle(100,100,50);
  circle(80,85,5);
  circle(115,85,5);
  delay (80000000);
  closegraph();
  return(0);

}

  
