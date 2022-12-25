#include<iostream>
using namespace std;
template<class T >
void selection (T arry[20],int n)
{
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arry[i]>arry[j])
            {
                swap(arry[i],arry[j]);
            }
        }
    }
     for(i=0;i<n;i++)
    {
        cout<<" "<<arry[i];
    }
}
int main()
{
    int a[10],s1,s2;
    float b[10];
    cout<<"\n how many elements you want in int array :";
    cin>>s1;
    cout<<"\n enter "<<s1<<"elements ";
    for(int i=0;i<s1;i++)
    {
        cin>>a[i];
    }
    cout<<"\n how many elements you want in float array :";
    cin>>s2;
    cout<<"\n enter "<<s2<<"elements ";
    for(int i=0;i<s2;i++)
    {
        cin>>b[i];
    }   
    cout<<"\n enter a integer array =";
    selection (a,s1);
    cout<<"\n enter a float array =";
    selection (b,s2);
    return 0;
}
