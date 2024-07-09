#include <iostream>
#include <vector>
using namespace std;


string trimLeft(string n)
{
    for(short i=0; i<n.length(); i++)
        if(n[i]!=' ')
            return n.substr(i,n.length()-i);
    return "";

}

string trimRight(string n)
{
    for(short i=n.length()-1; i>=0; i--)
        if(n[i]!=' ')
            return n.substr(0,i+1);
    return "";
}

string trim(string n)
{
    return trimLeft(trimRight(n)); 
}



int main()
{system("clear");
 
    string n = "     Mohammed Abu-Hadhoud     ";
    cout << "String      = " << n << endl << endl;  
    cout << "Trim Left   = " << trimLeft(n) << endl;
    cout << "Trim Right  = " << trimRight(n) << endl;
    cout << "Trim        = " << trim(n) << endl;
    
    
  

    return 0;
}