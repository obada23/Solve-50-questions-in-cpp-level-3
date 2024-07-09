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
            printf("%0*d   ", 2,arr[i][j]);
        cout << endl;
    }
    cout << endl;
    
}
void multiply2Matrices(int mArray[][3],int arr1[][3],int arr2[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            mArray[i][j] = arr1[i][j] * arr2[i][j];
    }
}
int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr1[3][3],arr2[3][3];
    fill3x3MatrixWithRandomNumber(arr1);
    cout << "Matrix1: " << endl;
    printMatrix(arr1);

    fill3x3MatrixWithRandomNumber(arr2);
    cout << "Matrix2: " << endl;
    printMatrix(arr2);

    int mArray[3][3];
    multiply2Matrices(mArray,arr1,arr2,3,3);
    cout << "Results:" << endl;
    printMatrix(mArray);

    return 0;
}