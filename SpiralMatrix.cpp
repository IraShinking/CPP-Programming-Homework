#include <cmath>
#include <iostream>
using namespace std;
const int N = 100;
int main(void)
{
    int n; //number
    int i; //rows
    int j; //colum
    int a[N][N] = {0};
    cout << "Enter the number of rows in your Sprial Matraix:";
    cin >> n;
    int m; //m=n*n
    int k; //The number of circle
    if (n % 2 == 0 && n != 0)
    {
        for (k = 1, m = 0; m < n * n; k++)
        {
            for (i = k - 1, j = k - 1; j < (n - k); j++)//note that here is n-k which is 4 while n=5 
            {
                a[i][j] = ++m;
            } //turn right
            //再次注意 当j=n-k，i=k-1时所确定的数组的值不是在上一个循环确定的。上一个循环的确做好了它的本分。
            //当程序进入下一个循环的时候，定义j=n-k,此时i仍然和之前一样。所以上面那一行的最后一个值是由这一个循环的最开始定义的。这一个循环同样挖掉了这一列的最后一个值，留给下一个循环。
            for (j = n - k; i < (n - k); i++)
            {
                a[i][j] = ++m;
            } //turn down
            for (i = n - k; j > (k - 1); j--)
            {
                a[i][j] = ++m;
            } //turn left
            j = k - 1;
            if (m != (n * n))
            {
                for (i = n - k; i >= k; i--)
                    a[i][j] = ++m; //turn up
            }
            else
                break;
        }
    }
    else if ((n%2)==1)
    {
        for (k = 1, m = 0; m < n * n; k++)
        {
            for (i = k - 1, j = k - 1; j < (n - k); j++)
            {
                a[i][j] = ++m;
            } //turn right
            

            for (j = n - k; i < (n - k); i++)
            {
                a[i][j] = ++m;
            } //turn down
            for (i = n - k; j > (k - 1); j--)
            {
                a[i][j] = ++m;
            } //turn left

            for (j = k - 1; i >=k; i--)//参照上述所提的，每一个循环都挖空了这一行、列该要覆盖的那个值，所以在这里必须要覆盖i=k的情况，否则行数会出现错误，i会指向k+1 下一次又是k+1，疯狂循环跳不出去。这样的错误是隐蔽的，只能通过调试分析循环所覆盖的数组值情况来确定。
            {
                a[i][j] = ++m;
            } //turn up
            if(m==((n*n)-1))
                {
                    a[k][k] = ++m;
                    break;
                }
        }
    }

    else
    {
        cout << "Enter the right number.";
        n = 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
