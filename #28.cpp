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

char invertingCharCase(char c)
{
    return islower(c) ? toupper(c) : tolower(c);
}

string invertAllLetterCase(string s)
{
    for(int i=0;i<s.length();i++)
        s[i] = invertingCharCase(s[i]);
    return s;
}


int main()
{system("clear");
    string s = readString("Please Enter Your String?");

    cout << "String after inverting all letter case:" << endl;
    s = invertAllLetterCase(s);
    cout << s << endl << endl;
    
    return 0;
}