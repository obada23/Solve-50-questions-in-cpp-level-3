#include <iostream>
#include <iomanip>
using namespace std;

void fillOrderedArray(int arr[][3],short rows,short cols)
{
    short counter=1;
    for(short i=0;i<rows;i++)
        for(short j=0;j<cols;j++)
        {
            arr[i][j] = counter;
            counter++;
        }
}

void printOrderedMatrix(int arr[][3],short rows,short cols)
{   
    cout << "The following is a 3x3 ordered matrix:" << endl;
    for(short i=0;i<rows;i++)
    {
        for(short j=0;j<cols;j++)
            cout << setw(1) << arr[i][j] << "  ";
        cout << endl;
    }
}
int main()
{
    int arr[3][3];
    fillOrderedArray(arr,3,3);
    printOrderedMatrix(arr,3,3);
    return 0;
}