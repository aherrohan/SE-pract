# include <iostream>
# include<stdlib.h>
# include <math.h>
# include <graphics.h>
using namespace std;

class triangle 
{
    int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
    public:
    void read();
    void draw();
    triangle operator+(triangle t);
    triangle operator*(triangle t);
    triangle operator/(triangle t);
           
};

void triangle::read()
{
    cout<< "\t programe for basic transformation ";
    cout<< "\n\t enter the coordinates of triangle";
    setcolor(11);
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    // draw (x1,y1 ,x2 ,y2 ,x3 ,y3);
}

void triangle::draw()
{
    line(x1,y1,x2,y2); delay(880);
    line(x2,y2,x3,y3); delay(880);
    line(x3,y3,x1,y1); delay(880);
    //getch();
    
}

triangle triangle::operator+(triangle t)
{
    int tx,ty;
	cout<<"\enter translation factor(tx,ty)";
	cin>>tx>>ty;
    t.x1=x1+tx;
    t.y1=y1+ty;
    t.x2=x2+tx;
    t.y2=y2+ty;
    t.x3=x3+tx;
    t.y3=y3+ty;
    return(t);
}

triangle triangle::operator*(triangle t)
{
    float sx,sy;
    cout << "enter the scalling factor "<< endl;
    cin>>sx>>sy;
    t.x1=x1*sx;
    t.y1=y1*sy;
    t.x2=x2*sx;
    t.y2=y2*sy;
    t.x3=x3*sx;
    t.y3=y3*sy;
    return (t);
}

triangle triangle::operator/(triangle t)
{
    int r;
    float theta;
    cout<<"enter angle of rotation"<<endl;
    cin>>r;
    theta = 3.14*r/180;
    t.x1=abs(x1*cos(theta)-y1*sin(theta));
    t.y1=abs(x1*sin(theta)+y1*cos(theta));
    t.x2=abs(x2*cos(theta)-y2*sin(theta));
    t.y2=abs(x2*sin(theta)+y2*cos(theta));
    t.x3=abs(x3*cos(theta)-y3*sin(theta));
    t.y3=abs(x3*sin(theta)+y3*cos(theta));
       return (t);
}

int main()
{
    int gm,c;
    int gd=DETECT;
    
    //initgraph(&gd,&gm,NULL);
    triangle t1,T,S,R,t2;
    t1.read();
initgraph(&gd,&gm,NULL);
    t1.draw();
    cout<< "\n 1.translation \n 2.Rotation \n 3.Scalling \n 4.exit";
    cout<<"\nenter your choice "<< endl;
    cin>>c;
    switch (c)
    {
    case 1 :
        T=t1+t2 ;
        T.draw();
        delay(880);
        break;
    
    case 2 :
        R=t1/t1 ;
        R.draw(); 
        delay(860);
        break;
        
    case 3 :
        S=t1*t1;
        S.draw();
        delay(890);
        break;
        
    case 4                     :
        exit(0);
    }
    closegraph();
        
return 0;
}
