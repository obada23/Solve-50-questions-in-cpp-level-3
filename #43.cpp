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

        if(s[i]!=c[0])
        {
            word += s[i];
            i++;
        }
        
        else
        {
            vString.push_back(word);
            word="";
            i++;
        }
            
    }
    vString.push_back(word);
    word="";
    return vString;
   
    

}

string lowerAllString(string s)
{
    for(int i=0;i<s.length();i++)
        s[i] = tolower(s[i]);
    return s;
}

string joinString(vector<string> vName, string delim)
{
    string name="";
    for(int i=0;i<vName.size();i++)
    {
        name+=vName.at(i) + delim;
    }
    
    return name.substr(0,name.length()-delim.length());
   
}

string replaceWords(string s1 , string country1, string country2,bool matchCase=true)
{
    vector<string> vString = splitString(s1," ");
    for(string &s : vString)
    {
        if(matchCase)
        {
            if(s==country1)
                s = country2;
        }
        else
        {
            if(lowerAllString(s) == lowerAllString(country1))
                s = country2;
        }
    }
    return joinString(vString," ");

}



int main()
{system("clear");

    
    string s1 = "Welcome to Jordan , Jordan is a nice country";
    cout << "Original String:" << endl;
    cout << s1 << endl << endl;

    string s2 = replaceWords(s1,"jordan","palestine");
    cout << "Replace with match case:" << endl;
    cout << s2 << endl << endl;
    

    string s3 = replaceWords(s1,"jordan","palestine",false);
    cout << "Replace with dont match case:" << endl;
    cout << s3 << endl << endl;
    
    
    
    return 0;
}