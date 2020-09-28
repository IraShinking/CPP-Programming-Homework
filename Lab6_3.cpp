#include <iostream>
#include <string>
#include<cctype>
using namespace std;
const char password[26][2] =
    {
        {'a','g'}, {'b', 'h'}, {'c', 'i'}, {'d','j'}, {'e', 'k'}, {'f', 'l'}, {'g', 'm'}, {'h', 'n'}, {'i', 'o'}, {'j', 'p'}, {'k', 'q'}, {'l', 'r'}, {'m', 's'}, {'n', 't'}, {'o', 'u'}, {'p', 'v'}, {'q', 'w'}, {'r', 'x'}, {'s', 'y'}, {'t', 'z'}, {'u', 'a'}, {'v', 'b'}, {'w', 'c'}, {'x', 'd'}, {'y', 'e'}, {'z', 'f'}

};

void encipher(char *str1, int size)
{
    int i;
    for (i = 0; i < size+1;i++)
    {
        str1[i] = tolower(str1[i]);
        for (int j = 0; j < 26;j++)
        {
            if(str1[i]==password[j][0])
                {
                    str1[i] = password[j][1];
                    break;
                }
        }
    }
}

void decipher(char *str2, int size)
{
    
    int i;
    for (i = 0; i < size+1;i++)
    {
        
        for (int j = 0; j < 26;j++)
        {
            if(str2[i]==password[j][1])
                {
                    str2[i] = password[j][0];
                    break;
                }
        }
    }
}

void show(char *str,int size)
{
    int i;
    for (i = 0; i < size + 1;i++)
    {
        cout << str[i];
    }
}
int main()
{
    cout << "Enter a message: ";
    char str1[100] = {" "};
    cin.getline(str1, 100);
    cout << "Double check your message:"<<str1<<endl;
    encipher(str1, sizeof(str1));
    cout << "The ciphertext is: " << str1 << endl;
    char str2[100] = {"\0"};
    for (int k = 0; k < (int)(sizeof(str1));k++)
    {
        str2[k] = str1[k];
    }
        decipher(str2, sizeof(str2));
        cout << "The plaintext is: " << str2 << endl;
        return 0;
}