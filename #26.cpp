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

string convertFirstLetterToUpperCase(string n)
{
    for(int i=0;i<n.length();i++)
        n[i] = toupper(n[i]);  
    return n;
}

string convertFirstLetterToLowerCase(string n)
{
    for(int i=0;i<n.length();i++)
        n[i] = tolower(n[i]);  
    return n;
}



int main()
{
    string n = readString("Please Enter Your String?");

    cout << "String after Upper:" << endl;
    n = convertFirstLetterToUpperCase(n);
    cout << n << endl << endl;

    cout << "String after Lower:" << endl;
    n = convertFirstLetterToLowerCase(n);
    cout << n << endl << endl;


    
 
    return 0;
}