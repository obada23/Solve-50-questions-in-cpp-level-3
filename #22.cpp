#include <iostream>
using namespace std;

void printFibonacciUsingRecurion(int number,int prev2,int prev1)
{
    int i=0;
    if(i<number-1)
    {
        int febNumber=prev1+prev2;
        cout << febNumber << "  ";
        prev2 = prev1;
        prev1 = febNumber;

        printFibonacciUsingRecurion(number-1,prev2,prev1);
    }
    
    cout << endl;
}
int main()
{
    cout << "1  ";
    printFibonacciUsingRecurion(10,0,1);
    return 0;
}