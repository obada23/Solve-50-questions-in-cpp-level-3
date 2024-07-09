#include <iostream>
using namespace std;
string readString(string message)
{
    string s;
    cout << message << endl;
    cin.ignore(0,'\n');
    getline(cin,s);
    cout << endl;
    return s;

}

string convertFirstLetterToLowerCase(string n)
{
    bool isFirstLetter = true;
    for(int i=0;i<n.length();i++)
    {
        if(isFirstLetter && n[i]!=' ')
            n[i] = tolower(n[i]);
        isFirstLetter = (n[i] == ' ' ? true : false);

    }
    return n;
}

int main()
{
    string n = readString("Please Enter Your String?");
    n = convertFirstLetterToLowerCase(n);
    cout << "String after conversion:" << endl;
    cout << n << endl << endl; 
    return 0;
}