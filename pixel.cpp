#include<iostream>
#include<graphics.h>
using namespace std;
int main()
 { 
    int gd=DETECT , gm=VGAMAX ;
    initgraph (&gd,&gm,NULL);
    //setbkcolor(WHITE);
    putpixel(300,200,BLUE);
    rectangle(50,100,150,200);
    line(100,200,300,400);
   circle(100,200,80);
    delay(100000);

closegraph();
 return(0);
 }

