#include <iostream>
using namespace std;

void printFibonacciUsingLoop(int number)
{
    int febNumber=0;
    int prev2=0 , prev1=1;
    cout << "1  ";
    for(short i=0;i<number-1;i++)
    {
        febNumber = prev1+prev2;
        cout << febNumber << "  ";
        prev2 = prev1;
        prev1 = febNumber;
    }
    cout << endl;
}
int main()
{
    printFibonacciUsingLoop(10);
    return 0;
}