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
    for(short i=0;i<rows;i++)
    {
        for(short j=0;j<cols;j++)
            cout << setw(1) << arr[i][j] << "   ";
        cout << endl;
    }
}

void transposeTheMatrix(int arr[][3],int tArr[][3],int rows,int cols)
{
    
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            tArr[j][i] = arr[i][j]; 
        

}
int main()
{
    int arr[3][3],tArr[3][3];
    fillOrderedArray(arr,3,3);
    cout << "The following is a 3x3 ordered matrix:" << endl;
    printOrderedMatrix(arr,3,3);
    transposeTheMatrix(arr,tArr,3,3);
    cout << "The following is the transposed matrix:" << endl;
    printOrderedMatrix(tArr,3,3);

    return 0;
}