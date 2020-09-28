#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(void)
{
    stack<int> Stack1;
    Stack1.push(6);
    Stack1.push(3);
    Stack1.pop();
    cout<<"The top in the stack:"<<Stack1.top()<<endl;
    cout<<"Whether the stack is empty:";
    if(Stack1.empty())
    {
        cout<<"Empty."<<endl;
    }
    else 
        cout<<"Not Empty"<<endl;
    Stack1.push(11);
    cout<<"The number of elements in the stack:"<<Stack1.size()<<endl;

    vector<int>x1;
    vector<int>x2;
    x1.assign(4,5);
    x2.assign(1,5);
    x1.push_back(4);
    x2.push_back(5);
    x1.push_back(3);
    x2.push_back(2);
    cout<<"The number of elements in x1:"<<x1.size()<<endl;
    
    return 0;
}