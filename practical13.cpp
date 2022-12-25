#include<iostream>
using namespace std;
#define max 100
class Stack
{
	char S[max];
	int top;
	public:
	Stack()
	{
		top=-1;
	}
	int IsEmpty();
	int IsFull();
	char gettop();
	void push(char n);
	int pop();
	void palindrome(char str2[100]);
	
};

int Stack::IsEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int Stack::IsFull()
{
	if(top==max-1)
		return 1;
	else
		return 0;
}

char Stack::gettop()
{
	if(!IsEmpty())
	{
		return S[top];
	}
	else
	{
		return 0;
	}
}
void Stack::push(char n)
{
	if(!IsFull())
	{
		top++;
		S[top]=n;
	}
	else
	{
		cout<<"\nS is Full ";
	}
}

int Stack::pop()
{
	if(!IsEmpty())
	{
		char t;
		t=S[top];
		top--;
		return t;
	}
	else
	{
		cout<<"\nStack is Empty ";
		return -1;
	}
}	
void Stack::palindrome(char str2[100])
{
	Stack s2;
	int i=0;
	int j=0;
	char str1[100];
	while(str2[i]!='\0')
	{
		if(str2[i]==' ')
		{
			i++;
		}
		else if(str2[i]>='A' && str2[i]<='Z')
		{
			str1[j]=str2[i]+32;
			j++;
			i++;
		}
		else
		{
			str1[j]=str2[i];
			j++;
			i++;
		}
	
	}
	str1[j]='\0';
	
	 i=0;
	while(str1[i]!='\0')
	{
		push(str1[i]);
		s2.push(str1[i]);
		i++;
	}
	
	cout<<"\nOrignal String is: "<<str1;
	
	cout<<"\nReverse string is :";
	while(!IsEmpty())
	{
		cout<<gettop();
		pop();
	}
	cout<<endl;
	int k=0;
	while(!s2.IsEmpty() && str1[k]!='\0')
	{
		if(s2.gettop()==str1[k])
		{
			s2.pop();
		}
		k++;
	}
	if(s2.IsEmpty())
	{
		cout<<"\nString is Palindrome";
	}
	else
	{
		cout<<"\nString is not palindrome ";
	}
	cout<<endl;
}
	
	
	
	
	

int main()
{
	Stack s;
	char str2[100];
	cout<<"\nEnter String to check :";
	cin.getline(str2,sizeof(str2));
	s.palindrome(str2);
	return(0);
}
