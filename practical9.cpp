#include<iostream>

using namespace std;
#define m 5
class Queue
{
	public:
	int front,rear;
	int Q[m];
	
	Queue()
	{
		front=rear=-1;
	}
	int IsEmpty();
	int IsFull();
	void enqueue(int n);
	void dequeue();
	void display();
};
int Queue::IsEmpty()
{
	if(front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Queue::IsFull()
{
	if((rear+1)%m==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Queue::enqueue(int n)
{
	if(!IsFull())
	{
		if(front==-1)
		{
			front=0;
		}
	rear=(rear+1)%m;
	Q[rear]=n;
	}
	else
	{
		cout<<"\nNO more Orders to take !!!";
	}
}

void Queue::dequeue()
{
	if(!IsEmpty())
	{
		
		if(front==rear)
		{
			cout<<Q[front]<<" order is served "<<endl;
			front=rear=-1;
		}
		else
		{
			cout<<Q[front] <<" order is served  "<<endl;
			front=(front+1)%m;
		}
	}
	else
	{
		cout<<"Orders are not yet placed  :";
	}
}

void Queue::display()
{
	if(!IsEmpty())
	{
		for(int i=front;i!=rear;i=(i+1)%m)
		{
			cout<<Q[i]<<" ";
		}
		cout<<Q[rear];
		cout<<endl;
	}
	else
	{
		cout<<"Orders are not placed yet  ";
	}
}

int main()
{
	Queue q1;
	int n,c;
	char ch;
	do
	{
	cout<<"\nWhat operation do you want to do ";
	cout<<"\n1.Place a Order \n2.Serve the order \n3.Display orders ";
	cout<<"\nEnter your choice: ";
	cin>>c;
	switch(c)
	{
	
	case 1:
		{
		
		
			 cout<<"\nPlaced the Order:";
			 cin>>n;
			 q1.enqueue(n);
		
		
		break;
		}
	case 2:
		{
		   q1.dequeue();
		  	
		  break;
		  }
	case 3:	
		{
			cout<<"\nOrders are :";
			q1.display();
			break;
		}
	default:
		cout<<"\nEnter valid choice :";
		break;
	}
	
	cout<<"\nDo you want to do more operations(y/n): ";
	cin>>ch;
	}while(ch=='y');
	return(0);
}

















