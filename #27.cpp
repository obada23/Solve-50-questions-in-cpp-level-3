#include <iostream>
using namespace std;
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

int main()
{system("clear");
    char c = readChar("Please Enter a Character?");

    cout << "Char after inverting case:" << endl;
    c = invertingCharCase(c);
    cout << c << endl << endl;
    return 0;
}