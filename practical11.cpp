#include<iostream>
using namespace std;
class Queue
{
	public:
	int front,rear;
	int Q[10];
	int m=10;
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
	if(rear==m-1)
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
			front++;
		}
	rear++;
	Q[rear]=n;
	}
	else
	{
		cout<<"\nQueue is Full :";
	}
}

void Queue::dequeue()
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
	cout<<"\n1.Insert new Job \n2.Delete a Job \n3.Display Job";
	cout<<"\nEnter your choice: ";
	cin>>c;
	switch(c)
	{
	
	case 1:
		{
		do
		{
			 cout<<"\nEnter Job to add :";
			 cin>>n;
			 q1.enqueue(n);
			 cout<<"\nDo you want to add more Job(y/n) :";
			 cin>>ch;
		}while(ch=='y');
		break;
		}
	case 2:
		{
		 do
		 {
		  	q1.dequeue();
		  	cout<<"\nDo you want to delete more Jobs(y/n) :";
		  	cin>>ch;
		  }while(ch=='y');
		  break;
		  }
	case 3:	
		{
			cout<<"\nJobs are :";
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

















