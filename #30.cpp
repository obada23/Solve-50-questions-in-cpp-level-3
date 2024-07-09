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

char readChar(string message)
{
    char c;
    do
    {
        cout << message << endl;
        cin >> c;
        cout << endl;

    } while (c <'A'&&c > 'z');
    return c;
    
}



int countCharInTheString(string s,char c)
{
    int count=0;
    for(int i=0;i<s.length();i++)
        if(s[i] == c)
            count++;
    return count;
}   




int main()
{system("clear"); 
    string s = readString("Please Enter Your String?");

    char c = readChar("Please Enter a Character?");

    cout << "Letter '" << c << "' Count = " << countCharInTheString(s,c) << endl << endl;
    
    return 0;
}