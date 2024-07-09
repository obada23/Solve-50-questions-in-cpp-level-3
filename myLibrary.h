#pragma once
#include <iostream>
using namespace std;
namespace myLib
{
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

    char invertingCharCase(char c)
    {
        return islower(c) ? toupper(c) : tolower(c);
    }
    string invertAllLetterCase(string s)
    {
        for(int i=0;i<s.length();i++)
            s[i] = invertingCharCase(s[i]);
        return s;
    }   

}
