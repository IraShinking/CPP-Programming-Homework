#include<iostream>
#define Days 10
using namespace std;

int compute(int, int);

int main()
{
    int i,sum=0;
  /* for(i=0;i<10;i++)
   {
       sum=2*(sum+1);
   }
   cout<< "The sum is:" <<sum<<endl;*/

    sum =compute(0,0) ;
   cout << "The sum is:"<< sum<<endl;
   return 0;

}

int compute (int begin,int times)
{
    if (times==Days)
        return begin;//递归不是一定要在这里返回0 可以直接将这一步当作整个递归的出口
    return compute(2*(begin+1),times+1);
}
