#include <iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;


void Function(int *pointer_arr,int length);

int main()
{
    int *number;

    int length;
    cout<<"\n ENTER ARRAY LENGTH ";
    cin>>length;

    number=new int[length];

    Function(number,length);
    return 0;
}

void Function(int *pointer_arr,int length)
{
    for(int i=0; i<length ; i++)
    {
        cout<<"\n ENTER A NUMBER AT INDEX : "<<i+1;
        cin>>*(pointer_arr+i);

        while(*(pointer_arr+i)<0)
		{
			cout<<"\n YOU MUST ENTER A NON NEGATIVE NUMBER ";
			cout<<"\n ENTER AGAIN ";
			cin>>*(pointer_arr+i);
		}
    }


    int max=pointer_arr[0];
    int max_index=0;
    for(int i=1 ; i<length ; i++)
    {
        if(*(pointer_arr+i)>max)
        {
            max=*(pointer_arr+i);
            max_index=i;
        }
    }


    int second_max=pointer_arr[0];
    int second_max_index=0;

    for(int i=1 ; i<length ; i++)
    {
        if(i==max_index)
        {
            continue;
        }

        if(*(pointer_arr+i)>second_max)
        {
            second_max=*(pointer_arr+i);
            second_max_index=i;
        }
    }

    cout<<"\n MAX : "<<max;
    cout<<"\n SECOND MAX : "<<second_max;

    int add_inverse=max-second_max;
    cout<<"\n";
    for(int i=0 ; i<length ; i++)
    {
        if(i==max_index)
        {
            cout<<second_max<<" "<<add_inverse<<" ";
        }


        else
        {
            cout<<*(pointer_arr+i)<<" ";
        }
    }
}