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

    } while (c <'A'&& c > 'z');
    return c;
    
}

bool checkIsVowel(char c)
{
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
       
}

int main()
{system("clear");
    char c = readChar("Please Enter a Character?");
    if(checkIsVowel(c))
        cout << "Yes Letter '" << c << "' is a vowel" << endl << endl;
    else
        cout << "No Letter '" << c << "' is not a vowel" << endl << endl;
    return 0;
}