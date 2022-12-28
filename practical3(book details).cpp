#include<iostream>
#include<cstring>
using namespace std;

class publication
{
    string title;
    float price;
    public:
    void read()
        {
        cout<<"\n Enter Title of Publication Item  : ";
        cin>>title;
        cout<<"\n Enter Price of Publication Item  : ";
        cin>>price;
        }
    void show()
        {
        cout<<"\n Title of Publication Item : ";
        cout<<title;
        cout<<"\n Price of Publication Item : ";
        cout<<price;
        }
};


class Book:public publication
  {
    int pages;
    public:

    void readbook()
      {
        read();
        cout<<"\n Enter Total No. Pages in book : ";
        cin>>pages;
      }

    void showbook()
      {
        show();
        cout<<"\n Total No. Pages in book : ";
        cout<<pages<<endl;
      }
};


class Tape:public publication
  {
    float playtime;
    public:

    void readtape()
      {
        read();
        cout<<"\n Enter Play Time of Tape : ";
        cin>>playtime;
      }

    void showtape()
      {
        show();
        cout<<"\n Play Time of Tape : ";
        cout<<playtime;
      }
 };


int main()
  {
    Book b;
    cout<<"\n Book Details"<<endl;
    b.readbook();
    b.showbook();
    Tape t;
    cout<<"\n Tape Details"<<endl;
    t.readtape();
    t.showtape();
    return(0);
}
