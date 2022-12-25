#include<iostream>
#include<graphics.h>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
        int step;s
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int x1=400,x2=350,y1=200,y2=500,i;
float xinc,yinc,x_new,y_new;
//	cout<<"\n Enter the X1 co-ordinate= ";

//	cin>>x1;
//	cout<<"\n Enter the X2 co-ordinate= ";
//	cin>>x2;
//	cout<<"\n Enter the Y1 co-ordinate= ";
//	cin>>y1;
//	cout<<"\n Enter the Y2 co-ordinate= ";
//	cin>>y2;

	float Dx,Dy,steps;
	Dx=x2-x1;
	Dy=y2-y1;
	if(Dx>Dy){
		steps=Dx;
		xinc=Dx/steps;
		cout<<xinc;
		cout<<yinc;
	}
	else
	{
		steps=Dy;
		yinc=Dy/steps;
		cout<<xinc;
		cout<<yinc;
	}
	
x_new=x1;
y_new=y1;
	/*i=0;
	while(i<=steps)
	{
	putpixel(x1,y1,3);
	x_new=x_new+xinc;
	y_new=y_new+yinc;
	i=i+1;
	delay(100);
	}*/
 
 
	for (i=0;i<=step;i++)
		{
		  putpixel(x1,y1,3);
	x_new=x_new+xinc;
	y_new=y_new+yinc;
	
	delay(100);	
		}
 
	closegraph();
	return 0;
}
