#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int gd=DETECT,gm;
   int dx,dy,steps,xinc,yinc;
   int x1=500;
   int y1=400;
   int x2=300;
   int y2=200;
   initgraph(&gd,&gm,NULL);

   dx=x2-x1;
   dy=y2-y1;
   if (abs(dx)>abs(dy))
     steps=abs(dx);
   else
     steps=abs(dy);
   xinc=dx/steps;
   yinc=dy/steps;
   for (int i=0;i<steps;i++)
   {
     putpixel(x1,y1,3);
    x1=x1+xinc;
    y1=y1+yinc;
    delay(200);
   }
   getch();
   closegraph();
}


