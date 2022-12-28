#include<iostream>

using namespace std;
class complex
{
public:
    int a, b;
    complex()
    {
        a = 0;
        b = 0;
    }
    void display()
    {
        cout << a << "+i" << b << endl;
    }
    complex operator+(complex x);
    complex operator*(complex x);
    friend istream& operator>>(istream& is, complex& obj);
    friend ostream& operator>>(ostream& is, complex& obj);

};
complex complex::operator+(complex x)
{
    complex res;
    res.a = a + x.a;
    res.b = b + x.b;
    return res;
}
complex complex::operator*(complex x)
{
    complex res;
    res.a = (x.a * a) - (x.b * b);
    res.b = (x.a * b) + (x.b * a);
    return res;
}
istream& operator>>(istream& is, complex& obj)
{
    is >> obj.a;
    is >> obj.b;
    return is;
}
ostream& operator<<(ostream& os, complex& obj)
{
    os << obj.a;
    os << "+i" << obj.b;
    return os;
}
int main()
{
    int ch;
    complex x;
    x.a = 9; x.b = 4;
    x.display();
    complex y;
    y.a = 2; y.b = 5;
    y.display();
    complex z;
    do
    {
        cout << "1.Addition\n 2.multiplication\n 3.read\n 4.Print \n 5.Exit";
        cout << "Enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:z = x + y;
            z.display();
            break;
        case 2:z = x * y;
            z.display();
            break;
        case 3:complex obj;
            cout << "Enter real and imaginary part\n";
            cin >> obj;
            break;
        case 4:cout << "Complex no is:";
            cout << obj << endl;
            break;
        case 5:cout << "Exit";
            break;
        default:cout << "\n Invalid choice";
        }
    } while (ch != 5);
    return 0;

}