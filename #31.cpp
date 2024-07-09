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



int countLetterInTheString(string s,char c,bool matchCase=true)
{
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(matchCase==true)
        {
            if(s[i]==c)
                count++;
        }
            
        else
        {
            if(tolower(s[i])==tolower(c))
                count++;
        }
    
            
    }
    return count;
}  



char invertingCharCase(char c)
{
    return islower(c) ? toupper(c) : tolower(c);
}


int main()
{//system("clear"); 
    string s = readString("Please Enter Your String?");

    char c = readChar("Please Enter a Character?");

    cout << "Letter '" << c << "' Count = " << countLetterInTheString(s,c) << endl << endl;
    cout << "Letter '" << c << "' Or ' " << invertingCharCase(c);
    cout << "' Count = " << countLetterInTheString(s,c,false) << endl << endl;
    
    return 0;
}