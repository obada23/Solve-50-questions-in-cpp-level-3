#include <iostream>
#include <vector>
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

vector<string> splitString(string s, string c)
{
    string word = "";
    vector<string> vString;
    int i=0;
    while(i<s.length())
    {
        if(s[i]!=c[0])
        {
            word += s[i];
            i++;
        }
        
        else
        {
            vString.push_back(word);
            word="";
            i+=4;
        }
            
    }
    vString.push_back(word);
    word="";
    return vString;
   
}


int main()
{system("clear");
 
    
    vector<string> vString =  splitString(readString("Please Enter Your String?"),"#,,#");
    cout << "\nTokens = " << vString.size() << endl << endl;
    for(string &s :vString)
        cout << s << endl;
    cout << endl;
    
  

    return 0;
}