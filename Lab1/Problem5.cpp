#include <iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;


void function(int length[5]);

int main()
{
    int length_arr[5];

    for(int i=0 ; i<5 ; i++)
    {
        cout<<"\n ENTER LENGTH OF ARRAY "<<i+1<<" ";
        cin>>length_arr[i];
    }

    function(length_arr);
}


void function(int length[5])
{
	int *array1,*array2,*array3,*array4,*array5;
	int *p[5],*a;
	int i,j,s;

    array1=new int[length[0]];
    array2=new int[length[1]];
    array3=new int[length[2]];
    array4=new int[length[3]];
    array5=new int[length[4]];

	p[0]=array1;
	p[1]=array2;
	p[2]=array3;
	p[3]=array4;
	p[4]=array5;


	for( i=0 ; i<5 ; i++)
	{
		a=*(p+i);

		for( j=0 ; j<length[i] ; j++)
		{
			*(a+j)=rand()%10 + 1;
		}
	}



	for( i=0 ; i<5 ; i++)
	{
		a=*(p+i);
		cout<<"\n ARRAY NUMBER "<<i+1<<endl;
		for( j=0 ; j<length[i] ; j++)
		{
			cout<<*(a+j)<<" ";
		}
		cout<<"\n";
	}


	for( i=0 ; i<5 ; i++)
	{
		a=*(p+i);

		s=0;
		for( j=0 ; j<length[i] ; j++)
		{
			s=s+(*(a+j));
		}
		cout<<"\n SUM OF ARRAY NUMBER "<<i+1<<" is "<<s;
	}



}
