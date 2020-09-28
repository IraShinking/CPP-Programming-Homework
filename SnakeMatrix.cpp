
#include <iostream>

using namespace std;

const int N = 500;
int main(void)
{
    int n;
    int column=0,row=0;
    int k=1;
    int a[N][N]={0};

    cout<<"Enter the number n of the rows and columns the snake matrix will have:";
    cin>>n;

    if(n>N||n==0)
        {
            cout<<"Wrong number.\n"<<"Enter a new one.";
            cin>>n;
            
        }
    a[0][0]=k++;

if(n%2==0)
{

    for(column=0,row=0;column<(n-1);)
    {
        if (row==0)
        {
            a[row][++column]=k++;
            while(column>0)
            {
                a[++row][--column]=k++;
            }
            if(row<(n-1))
			a[++row][column]=k++;
        }
		if(row==((n-1)))
		break;
        while(row>0)
        {
            a[--row][++column]=k++;
        }

    }
    while((row!=(n-1))||(column!=((n-1))))
	{
		if(row==(n-1))
        {
            a[row][++column]=k++;
            while(column<(n-1))
                a[--row][++column]=k++;
        }
        a[++row][column]=k++;
        if(row==(n-1)&&column==(n-1))
            break;
       while(row<(n-1))
           a[++row][--column]=k++;
        if(row>(n-1))
        break;
    }	
    


}
else{

	  for(column=0,row=0;column<(n-1);)
    {
        if (row==0)
        {
            a[row][++column]=k++;
            while(column>0)
            {
                a[++row][--column]=k++;
            }
            if(row<(n-1))
			a[++row][column]=k++;
        }
        while(row>0)
        {
            a[--row][++column]=k++;
        }

    }
    for(column=(n-1);(row<(n-1))||(column<(n-1));)
    {
        if(column=(n-1))
        {
            a[++row][column]=k++;
            while(row<(n-1))
            {
                a[++row][--column]=k++;
            }
            a[row][++column]=k++;
        }
        while(column<(n-1))
        {
            a[--row][++column]=k++;
        }
    }

}

    for(row=0;row<n;row++)
        for(column=0;column<n;column++)
            {
               
                cout<<a[row][column];
                if((column+1)%n==0)
                    cout<<"\n";
            }

    return 0;

}
