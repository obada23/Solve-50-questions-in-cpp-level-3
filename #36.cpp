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

short countWords(string s)
{
    
    int i=0;
    short count=0;
    while(i<s.length())
    {
        if(s[i]!=' ')
            i++;
        
        else
        {
            count++;
            i++;
        }
            
    }
   
    count++;
    return count;
    
    
}   


int main()
{system("clear");

    string n = readString("Please Enter Your String?");
    cout << "\nThe number of words in your string is: ";
    cout << countWords(n) << endl << endl;
  

    return 0;
}