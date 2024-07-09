#include <iostream>
using namespace std;

string readString(string message)
{
    string c;
    cout << message << endl;
    cin.ignore(0,'\n');
    getline(cin,c);
    cout << endl << endl;
    return c;
    
}

string replaceWords(string s1 , string country1, string country2)
{
    string result = "";
    string word = "";
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=' ')
            word += s1[i];
        
        else
        {
            if(word==country1)  
                result += country2 + " ";
            
            else
                result += word + " ";

            word = "";
            
        }
    }
    if(word == country1)
        result += country2;
    else 
        result += word;
    
    return result;
}



int main()
{system("clear");
    
    string s1 = "Welcome to Jordan , Jordan is a nice country";
    cout << "Original String:" << endl;
    cout << s1 << endl << endl;

    string s2 = replaceWords(s1,"Jordan","Palestine");
    cout << "String After Replace:" << endl;
    cout << s2 << endl << endl;
    
    
    return 0;
}