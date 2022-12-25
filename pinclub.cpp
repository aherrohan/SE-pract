#include<iostream>
using namespace std;
struct node
{
  int prn;
  char name[100];
  node *next;
};
node *nnode,*temp,*temp1,*temp2;
class Club
{
  
  public:
   int count=0;
   node *pres;
   node *secr;
   
       Club()
       {
         pres=NULL;
         secr=NULL;
       }
       

void create();
void display();
void ins();
void deletion();
void concat(Club p2);
};
void Club::create()
{

 char ch;
do
{
    nnode=new node;
     nnode->next=NULL;
    cout<<"\nEnter prn of member ";
    cin>>nnode->prn;
    cout<<"\nEnter name of member ";
    cin>>nnode->name;
   
    if(pres==NULL)
    {
      pres=nnode;
      secr=nnode;
    }
    else
    {
      secr->next=nnode;
      secr=nnode;
    }
    cout<<"\nDo you want to continue?(y/n)";
    cin>>ch;
    count++;
    }while(ch=='y');
}      
void Club::display()
  {
    temp=pres;
    cout<<"\nPRN\tName";
    while(temp!=NULL)
    {
      cout<<"\n"<<temp->prn<<"	"<<temp->name<<endl;
      temp=temp->next;
    }
  } 
  
void Club::ins()
{
   int chs,n;
      
   cout<<"\nWhich member you want to add "<<endl<<"1.President"<<endl<<"2.Secretory"<<endl<<"3.Member"<<endl;
   cout<<"\nEnter your choice ";
   cin>>chs;
    
   switch(chs)
   
   {
     
    case 1:
    nnode=new node;
    nnode->next=NULL;
    cout<<"\nEnter PRN ";
    cin>>nnode->prn;
    cout<<"\nEnter Name ";
    cin>>nnode->name;
    nnode->next=pres;
    pres=nnode;
    display();
    count++;
    break;
  case 2:
    nnode=new node;
    nnode->next=NULL;
    cout<<"\nEnter PRN ";
    cin>>nnode->prn;
    cout<<"\nEnter Name ";
    cin>>nnode->name;
    secr->next=nnode;
    secr=nnode;
    display();
    count++;
    break;  
  case 3 :
  	cout<<"\nEnter PRN after which member is to add ";
  	cin>>n; 
  	 nnode=new node;
         nnode->next=NULL;
         cout<<"\nEnter PRN ";
    cin>>nnode->prn;
    cout<<"\nEnter Name ";
    cin>>nnode->name;
  	temp1=pres;
  	while(temp1->prn!=n)
  	{
  	temp1=temp1->next;
  	}
  	temp2=temp1->next;
  	temp1->next=nnode;
  	nnode->next=temp2;
  	
  	display();
  	count++;
  	break;
  default:
          cout<<"\nEnter valid choice ";
          break;
   }
}

void Club::deletion()
{
   int chs,n;
      
   cout<<"\nWhich member you want to Remove "<<endl<<"1.President"<<endl<<"2.Secretory"<<endl<<"3.Member"<<endl;
   cout<<"\nEnter your choice ";
   cin>>chs;
   switch(chs)
   {
     case 1:
     	temp=pres;
     	pres=temp->next;
     	delete temp;
     	display();
     	count--;
     	break;
     case 2:
        
        temp=pres;
        while(temp->next!=secr)
        {
          temp=temp->next;
        }
        temp1=temp->next;
        temp=secr;
        delete temp1;
        display();
        count--;
        break;
        
      case 3:
         cout<<"\nEnter PRN number is to be remove ";
         cin>>n;
         temp=pres;
         while(temp->next->prn!=n)
         {
          temp=temp->next;
         }
         temp1=temp->next;
         temp2=temp1->next;
         temp->next=temp2;
         delete temp1;
         display();
         count--;
         break;
         
      default:
         cout<<"\nEnter valid choice  ";
         break;
         	
   }
}
void Club ::concat(Club p2)
{
	secr->next=p2.pres;
}
int main()
{
  Club l1,p2;
  l1.create();
  l1.display();

  l1.ins();
  l1.deletion();
    cout<<"\nTotal members are "<<l1.count<<endl;
  p2.create();
  l1.concat(p2);
  l1.display();
  return(0);
}  
