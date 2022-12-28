#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std;
class student
{
public:
    char name[10];
    char dob[10];
    long int no;
    void get()
    {
        cout << "Enter name ";
        cin >> name;
        cout << "Enter dob ";
        cin >> dob;
        cout << "Enter no ";
        cin >> no;
    }
    void disp()
    {
        cout << "\n name= " << name;
        cout << "\ndob= " << dob;
        cout << "\nNo= " << no;
    }

};

int main()
{
    int ch;
    int f = 0;
    long int key;
    vector<student> v1;
    do
    {

        cout << "\n* * * * * Menu * * * * *";
        cout << "\n1.Insert";
        cout << "\n2.Display";
        cout << "\n3.Search";
        cout << "\n4.Sort";
        cout << "\n5.Exit";
        cout << "\nEnter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            student s;
            s.get();
            v1.push_back(s);
            break;
        case 2:
            for (int i = 0; i < v1.size(); i++)
            {
                v1[i].disp();
            }
            break;

        case 3:
            f = 0;
            cout << "Enter Mob no to search";
            cin >> key;
            for (int i = 0; i < v1.size(); i++)
            {
                if (v1[i].no == key)
                {
                    v1[i].disp();
                    f = 1;
                }
            }
            if (f == 0)
            {
                cout << "\nRecord not found\n";
            }


            break;

        case 4:
            sort(v1.begin(), v1.end(), [](const student& l, const student& r) {
                return l.no < r.no;
                });
            cout << "\n\n Sorted on name : ";
            for (int i = 0; i < v1.size(); i++)
            {
                v1[i].disp();
            }
            break;

        case 5:
            exit(0);
        }

    } while (ch != 6);
    return 0;
}