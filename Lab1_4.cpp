#include<iostream>
#include<cstdlib>
#include<ctime>
#define random(a,b) (rand()%(b-a+1)+a) 
#define N 5
using namespace std;
int N1,N2,N3,N4,N5,N6,N7,N8,N9;

void calculate(int);

int main()
{
    srand((unsigned)time(NULL));
    for(int i=0;i<N;i++)
    {
    	calculate(random(1,100));
	}
	
	for(int m=0;m<10;m++)
	{
		int k;
		switch(m)
		{
			case 1:k=N1;break;
			case 2:k=N2;break;
			case 3:k=N3;break;
			case 4:k=N4;break;
			case 5:k=N5;break;
			case 6:k=N6;break;\
			case 7:k=N7;break;
			case 8:k=N8;break;
			case 9:k=N9;break;
		}
		switch(k)
		{
			case 1:cout<<m ;break;
			case 2:cout<<m<<m ;break;
			case 3:cout<<m<<m<<m ;break;
			case 4:cout<<m<<m<<m<<m ;break;
			case 5:cout<<m<<m<<m<<m<<m ;break;
			case 6:cout<<m<<m<<m<<m<<m<<m ;break;
			case 7:cout<<m<<m<<m<<m<<m<<m<<m ;break;
			case 8:cout<<m<<m<<m<<m<<m<<m<<m<<m ;break;
			case 9:cout<<m<<m<<m<<m<<m<<m<<m<<m<<m ;break;
			case 10:cout<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m ;break;
			default:break;
		}
	 } 
     
    return 0;
}

void calculate(int number)
{
	if (number<10)
	{
		switch (number)
			{
			case 1:N1+=1;break;
			case 2:N2+=1;break;
			case 3:N3+=1;break;
			case 4:N4+=1;break;
			case 5:N5+=1;break;
			case 6:N6+=1;break;
			case 7:N7+=1;break;
			case 8:N8+=1;break;
			case 9:N9+=1;break;
			default:break;	
			}
		return;
	}
	calculate(number/10);
	switch (number%10)
			{
			case 1:N1+=1;break;
			case 2:N2+=1;break;
			case 3:N3+=1;break;
			case 4:N4+=1;break;
			case 5:N5+=1;break;
			case 6:N6+=1;break;
			case 7:N7+=1;break;
			case 8:N8+=1;break;
			case 9:N9+=1;break;
			default:break;	
			}
			
}
