#include <iostream>
using namespace std;
string readString(string message)
{
    string c;
    cout << message << endl;
    cin.ignore(0,'\n');
    getline(cin,c);
    cout << endl;
    return c;
    
}

int countCapitalLetters(string s)
{
    int count=0;
    for(int i=0;i<s.length();i++)
        if(isupper(s[i]))
            count++;

    return count;
}

int countSmallLetters(string s)
{
    int count=0;
    for(int i=0;i<s.length();i++)
        if(islower(s[i]))
            count++;

    return count;
}



int main()
{system("clear");
    string s = readString("Please Enter Your String?");

    cout << "String Length = " << s.length() << endl;
    cout << "Capital Letters Count = " << countCapitalLetters(s) << endl;
    cout << "Small Letters Count = " << countSmallLetters(s) << endl << endl;
    
    return 0;
}