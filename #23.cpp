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

void printFirstLetter(string s)
{
    bool isFirstLetter = true;
    cout << "First letters of this string:" << endl;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] != ' ' && isFirstLetter)
            cout << s[i] << endl;
        isFirstLetter = (s[i]==' '? true : false);
    }
}

int main()
{
    string s = readString("Please Enter Your String?");
    printFirstLetter(s);
    return 0;
}