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

string convertFirstLetterToUpper(string s)
{
    bool isFirstLetter = true;
    cout << "First letters of this string:" << endl;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' '&& isFirstLetter)
            s[i] = toupper(s[i]);
        isFirstLetter = (s[i] == ' ' ? true : false);
    }
    return s;
}

int main()
{
    string s = readString("Please Enter Your String?");
    s = convertFirstLetterToUpper(s);
    cout <<"\nString after conversion: " << endl;
    cout << s << endl << endl;
    return 0;
}