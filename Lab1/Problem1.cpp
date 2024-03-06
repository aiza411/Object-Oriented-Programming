#include <iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;

void Reverse_Array(int *pointer_arr);

int main()
{
    int number[5];
    int *pointer=number;

    int i;
    cout<<"\n ENTER A NUMBER ";
    cin>>(i);

    Reverse_Array(pointer);
    return 0;
}

void Reverse_Array(int *pointer_arr)
{
    for(int i=0; i<5 ; i++)
    {
        cout<<"\n ENTER A NUMBER AT INDEX : "<<i+1;
        cin>>*(pointer_arr+i);
    }

    for(int i=4; i>=0 ; i--)
    {
        cout<<"\n NUMBER AT INDEX : "<<i+1<<" IS : "<<*(pointer_arr+i);
    }
}