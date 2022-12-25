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
	void Insert_rear(int n);
	void Delete_rear();
	void Insert_front(int e);
	void Delete_front();
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
	if(rear==m-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Queue::Insert_rear(int n)
{
	if(!IsFull())
	{
		if(front==-1 && rear==-1)
		{
			front=0;
		}
	rear++;
	Q[rear]=n;
	}
	else
	{
		cout<<"\nQueue is Full :";
	}
}

void Queue::Delete_rear()
{
	if(!IsEmpty())
	{
		if(front==rear)
		{
			cout<<Q[rear]<<" is deleted ";
			front=rear=-1;
		}
		else
		{
			cout<<Q[rear]<<" is deleted ";
			rear--;
		}
	}
	else
	{
		cout<<"Q is empty ";
	}
}
void Queue::Insert_front(int e)
{
	if(!IsFull())
	{
		if(front==-1 && rear==-1)
		{
			front++;
			rear++;
			Q[front]=e;
		}
		else if(front==0)
		{
			cout<<"Insert from another end ";
		}
		else
		{
			front--;
			Q[front]=e;
		}
	}
	else
	{
		cout<<"Q is full ";
	}
}
void Queue::Delete_front()
{
	if(!IsEmpty())
	{
		if(front==rear)
		{
			cout<<Q[front]<<" is deleted "<<endl;
			front=rear=-1;
		}
		else
		{
			cout<<Q[front] <<" is deleted "<<endl;
			front++;
		}
	}
	else
	{
		cout<<"Queue is Empty :";
	}
}

void Queue::display()
{
	if(!IsEmpty())
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<Q[i]<<" ";
		}
		cout<<endl;
	}
	else
	{
		cout<<"Queue is Empty ";
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
	cout<<"\n1.Insert new at rear \n2.Insert new at front \n3.Delete rear \n4.Delete front \n5.Display Queue";
	cout<<"\nEnter your choice: ";
	cin>>c;
	switch(c)
	{
	
	case 1:
		{
		
			 cout<<"\nEnter Job to add at rear :";
			 cin>>n;
			 q1.Insert_rear(n);
			
		
		break;
		}
	case 2:
		{
			 cout<<"\nEnter Job to add at front :";
			 cin>>n;
			 q1.Insert_front(n);
			
		 
		  break;
		  }
	case 3:	
		{
			q1.Delete_rear();
			
			break;
		}
	case 4:
		{
			q1.Delete_front();
			
			break;
		}
	case 5:
		{
			cout<<"Queue is :";
			q1.display();
			break;
		}
	default:
		{
			cout<<"\nEnter valid choice :";
			break;
		}
	}
	
	cout<<"\nDo you want to do more operations(y/n): ";
	cin>>ch;
	}while(ch=='y');
	return(0);
}

















