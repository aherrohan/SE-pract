#include<iostream>
#include<string.h>
using namespace std;
class student
{
  public:
    int rollno; 
    char name[10];
    char address[20];
    char cl[5];
    char division[5];
    char bloodgroup[5];
    char dob[10];
    long int mobile;
  
     static int count;
  student()
	{
	    rollno=0;
	    strcpy(name,"AAAAAA");
	    strcpy(address,"AAAA");
	    strcpy(cl,"AA");
	    strcpy(division,"A");
        strcpy(bloodgroup,"AA");
        strcpy(dob,"01/01/2000");
        mobile=0000000000000;
        count++;
	}
	
  student(student &s1)
    {
        rollno=s1.rollno;
        strcpy(name,s1.name);
        strcpy(address,s1.address);
        strcpy(cl,s1.cl);
        strcpy(division,s1.division);
        strcpy(bloodgroup,s1.bloodgroup);
        strcpy(dob,s1.dob);
        mobile=s1.mobile;
   }
  ~student()
    {
      cout<<endl<<this->name<<"Deleted"<<endl;
    }
  void read()
    {
        cout<<"\n Enter Student's Roll No : ";
	    cin>>rollno;
	    cout<<"\n Enter Student's Name : ";
        cin>>name;
        cout<<"\n Enter Student's Address : ";
	    cin>>address;
        cout<<"\n Enter Student's Class : ";
  	    cin>>cl;
	    cout<<"\n Enter Student's Division : ";
	    cin>>division; 
        cout<<"\n Enter Student's Blood Group : ";
        cin>>bloodgroup; 
        cout<<"\n Enter Student's Date of Birth : ";
        cin>>dob;
        cout<<"\n Enter Student's Mobile No : ";
	    cin>>mobile;
	
  }
    
  static void showcount()
   {
      cout<<" \n Total No of Students : "<<count<<endl;
   }

   friend void show(student s);

};
int student::count=0;
void show(student s)
  {
      cout<<"\n Student's Roll No. : "<<s.rollno;
      cout<<"\n Student's Name : "<<s.name;
      cout<<"\n Student's Address : "<<s.address;
      cout<<"\n Student's Class : "<<s.cl;
      cout<<"\n Student's Division : "<<s.division;
      cout<<"\n Student's Blood Group : "<<s.bloodgroup;
      cout<<"\n Student's Birthdate : "<<s.dob;
      cout<<"\n Student's Mobile no : "<<s.mobile;
  }
int main()
{
  int n;
  int i;
  student s1,*p[100];
  
  
  show(s1);
  

 ;
  cout<<"\n How many Student's detail you want to save : ";
  cin>>n;
    for(i=0;i<n;i++)
      {
        p[i]=new student();
        p[i]->read();

      }
    for(i=0;i<n;i++)
      {
        show(*p[i]);
        student::showcount();

      }
     for(int i=0;i<n;i++)
     {
        delete p[i];
     }
     
  student s2(s1);
  show(s2);
 
  return(0);
}

