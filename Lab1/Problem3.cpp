#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;


void function(int *ptr, int size);
int main()
{
    int *array;
    int length;
    cout<<"\n ENTER ARRAY LENGTH ";
    cin>>length;


    function(array,length);
    return 0;
}

void function(int *ptr, int size)
{
    int i;
    ptr = new int[size];

    for (i = 0; i < size; i++)
    {
        *(ptr + i) = rand() % 100;
    }

    cout << "\n Array is \n\n ";

    for (i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }

    for (i = 0; i < size; i++)
    {
        *(ptr + i) = ((*(ptr + i)) * (*(ptr + i)));
    }

    cout << "\n Square of array is \n\n ";

    for (i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }
    delete[] ptr;
}