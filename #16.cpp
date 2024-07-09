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
            arr[i][j] = randomNumber(0,1);
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

short countTheNumberInMatrix(int arr[][3],int number,short rows,short cols)
{
    short count=0;
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            if(arr[i][j]==number)
                count++;
    return count;
}

bool isSparseMatrix(int arr[][3],int rows,int cols)
{
    short matrixSize = rows*cols;
    return (countTheNumberInMatrix(arr,0,3,3) >= (matrixSize/2));
}

/* bool isSparseMatrix(int arr[][3],int rows,int cols)
{
    short countZero=0;
    short countNonZero=0;
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==0)
                countZero++;
            else
                countNonZero++;
        }

    if(countZero>countNonZero)
        return true;
    else 
        return false;
            
} */

int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumber(arr);
    cout << "Matrix1: " << endl;
    printMatrix(arr);

    if(isSparseMatrix(arr,3,3))
        cout << "Yes: Matrix is Sparce" << endl;
    else
        cout << "No: Matrix is not Sparce" << endl;




    return 0;
} 