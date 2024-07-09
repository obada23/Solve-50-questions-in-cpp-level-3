#include <iostream>
using namespace std;
string removePauncuations(string name)
{
    
    string name2 = "";
    for(int i=0;i<name.length();i++)
    {
        if(!ispunct(name[i]))
            name2+=name[i];
               
    }
    return name2;

}
int main()
{
    string name = "Welcome to Jordan, Jordan is a nice country; it's amazing";
    cout << "Original String:" << endl;
    cout << name << endl << endl;

    cout << "Pauncuations Removed:" << endl;
    cout << removePauncuations(name) << endl << endl;
    return 0;
}