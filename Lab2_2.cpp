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
        return begin;//�ݹ鲻��һ��Ҫ�����ﷵ��0 ����ֱ�ӽ���һ�����������ݹ�ĳ���
    return compute(2*(begin+1),times+1);
}
