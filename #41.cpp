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

string reverseString(string s) 
{
    string temp = "";
    string result = "";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            temp += s[i]; 
        }
        else
        {
            result = temp + " " + result;  
            temp = "";
        }
    }
    result = temp + " " + result; 
    return result.substr(0,result.length()-1);
}




int main()
{system("clear");
    string s = readString("Please Enter Your String?");
    cout << "String after reversing words:\n" << reverseString(s) << endl << endl;
    
    
    return 0;
}