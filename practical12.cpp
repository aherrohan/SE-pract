#include<iostream>
using namespace std;
#define max 10
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
	void welparen(char exp[10]);
	
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

void Stack::welparen(char exp[10])
{
	int flag=0;
	int i=0;
	char ch;
	while(exp[i]!='\0')
	{
		
	   
        ch = exp[i];
        switch (ch)
        {
        case '(':
        {
            push(ch);
            break;
        }
        case '[':
        {
            push(ch);
            break;
        }
        case '{':
        {
            push(ch);
            break;
        }
            
        case ')':
        {
            if (gettop() == '(')
                pop();
            else
                flag = 1;
        }
            break;
        case ']':
        {
            if (gettop() == '[')
                pop();
            else
                flag = 1;
        }
            break;
        case '}':
        {
            if (gettop() == '{')
                pop();
            else
                flag = 1;
        }
            break;

        }
        i++;
    }
    if (flag == 0 && IsEmpty())
        cout << "well parenthasized"<<endl;
    else
        cout << "not well parethasized"<<endl;
}
	
	
	

int main()
{
	Stack s1;
	char exp[10];
	cout<<"\nEnter Expression :";
	cin>>exp;
	s1.welparen(exp);	
	
	return(0);








}










