#include <iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;


void function();

int main()
{
    function();
}


void function()
{
	int array1[6],array2[6],array3[6],array4[6],array5[6];
	int *p[5],*a;
	int i,j,s;

	p[0]=array1;
	p[1]=array2;
	p[2]=array3;
	p[3]=array4;
	p[4]=array5;


	for( i=0 ; i<5 ; i++)
	{
		a=*(p+i);

		for( j=0 ; j<6 ; j++)
		{
			*(a+j)=rand()%10 + 1;
		}
	}



	for( i=0 ; i<5 ; i++)
	{
		a=*(p+i);
		cout<<"\n ARRAY NUMBER "<<i+1<<endl;
		for( j=0 ; j<6 ; j++)
		{
			cout<<*(a+j)<<" ";
		}
		cout<<"\n";
	}


	for( i=0 ; i<5 ; i++)
	{
		a=*(p+i);

		s=0;
		for( j=0 ; j<6 ; j++)
		{
			s=s+(*(a+j));
		}
		cout<<"\n SUM OF ARRAY NUMBER "<<i+1<<" is "<<s;
	}



}
