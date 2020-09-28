#include <iostream>
using namespace std;

class Exam
{
public:
    Exam(long idInput);
    static int count;
    ~Exam() { cout << "The object which id is: " << id << " is deconstructed."
                   << "Now have " << --count << " object.\n"; }

private:
    long id;
};
int Exam::count = 0;

Exam::Exam(long idInput)
{
    id = idInput;
    count++;
    cout << "The object which id is: "<<id<<" is constructed.Now have " << count << " object.\n";
}

void test(long Id1,long Id2)
{
    Exam A1(1001);
    Exam A2(1002);
    
    Exam A3(Id1);
    Exam A4(Id2);
}

int main(void)
{
    long id1;
    long id2;
    cout << "Enter the id of a new object:";
    cin >> id1;
    cout << "Enter the id of another new object: ";
    cin >> id2;
    test(id1, id2);
    return 0;
}