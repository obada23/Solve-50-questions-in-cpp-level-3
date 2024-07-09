#include <iostream>
#include <iomanip>
using namespace std;
int randomNumber(int from,int to)
{
    return rand()%(to-from+1)+from;
}

void fill3x3MatrixWithRandomNumber(int arr[][3])
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            arr[i][j] = randomNumber(1,10);
}

void printMatrix(int arr[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf(" %0*d   ", 2,arr[i][j]);
        cout << endl;
    }
    cout << endl;
    
}

void printmiddleRowOfMatrix(int arr[][3],int rows,int cols)
{
    cout << "Middle Row of Matrix1 is:" << endl;
    int middleRow=rows/2;
        for(int j=0;j<cols;j++)
            printf(" %0*d   ", 2,arr[middleRow][j]);
        cout << endl << endl;
}

void printmiddleColOfMatrix(int arr[][3],int rows,int cols)
{
    cout << "Middle Col of Matrix1 is:" << endl;
    int middleCol=cols/2;
        for(int i=0;i<rows;i++)
            printf(" %0*d   ", 2,arr[i][middleCol]);
        cout << endl << endl;
}

int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr1[3][3],arr2[3][3];
    fill3x3MatrixWithRandomNumber(arr1);
    cout << "Matrix1: " << endl;
    printMatrix(arr1);

    printmiddleRowOfMatrix(arr1,3,3);
    printmiddleColOfMatrix(arr1,3,3);

    return 0;
}