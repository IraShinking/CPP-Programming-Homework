#include<fstream>
#include<iostream>
#include<string>
using namespace std;



int main(void)
{
    string v1="Successful to write in document!";
    ofstream out("test1.txt",ios_base::trunc);
    out<<v1;
    cout<<v1;
    out.close();
    ifstream in("test1.txt");
    ofstream out2("test1.txt",ios_base::app);
    string v2="Successful to add in document!";
    
    out2<<v2;
    cout<<endl<<v2<<endl;
    out2.close();
    for(int i=0;i<50;i++)
    {
        string v3;
        in>>v3;
        cout<<v3<<" ";
    }
    
   
    in.close();
    return 0;
}