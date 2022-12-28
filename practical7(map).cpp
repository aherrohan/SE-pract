#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cout << "\n How many States you want to add : ";
    cin >> n;
    map<string, long int> mymap;
    string state;
    long int population;

    for (int i = 0; i < n; i++)
    {
        cout << "\n state : ";
        cin >> state;
        cout << " \n Population : ";
        cin >> population;
        mymap.insert(pair<string, long int>(state, population));
    }
    cout << "\n\n" << endl;
    cout << "------Population of States in India------\n";
    cout << "\n No. of States : " << mymap.size() << "\n";
    string state_name;
    cout << "\n Enter name of the state :";
    cin >> state_name;
    map<string, long int>::iterator itr;
    itr = mymap.find(state_name);
    if (itr != mymap.end())
    {
        cout << state_name << "'s population is " << itr->second;
    }
    return 0;
}
