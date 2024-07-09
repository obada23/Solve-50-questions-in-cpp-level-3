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

void printEachWord(string s)
{
    cout << "\nYour string words are:\n";
    int i=0;
    string word="";
    while(i<s.length())
    {
        if(s[i]!=' ')
        {
            word += s[i];
            i++;
        }
        else
        {
            cout << word << endl;
            i++;
            word = "";
        }
    }
    cout << word << endl << endl;
    word="";
    
    
}   


int main()
{system("clear");
    
    printEachWord(readString("Please Enter Your String?"));
  

    return 0;
}