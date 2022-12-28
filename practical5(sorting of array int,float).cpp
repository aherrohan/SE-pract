#include<iostream>
using namespace std;
int n;
template<class T>
void sel(T A[10])
{
    int i, j, min;
    T temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
                min = j;
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
    cout << "\n Sorted array : ";
    for (i = 0; i < n; i++)
    {
        cout << " " << A[i];
    }
}
int main()
{
    int A[10];
    float B[10];
    int i;

    cout << "\n How many elements are in integer array : ";
    cin >> n;
    cout << "\n Enter " << n << " integer elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sel(A);

    cout << "\n How many elements are in float array : ";
    cin >> n;
    cout << "\n Enter " << n << " float elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    sel(B);
}
