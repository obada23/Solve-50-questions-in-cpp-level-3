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

bool checkIsVowel(char c)
{
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
       
}

void printVowel(string s)
{

    for(int i=0;i<s.length();i++)
    {
        if(checkIsVowel(s[i]))
            cout << s[i] << "   ";
    }
    cout << endl << endl ;
}

int main()
{system("clear");
    string s = readString("Please Enter Your String?");
    cout << "\nVowels in string are: ";
    printVowel(s);
    
    return 0;
}