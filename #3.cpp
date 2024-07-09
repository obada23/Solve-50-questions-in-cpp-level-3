#include <iostream>
#include <iomanip>
using namespace std;
int randomNumber(int from,int to)
{
    return rand()%(to-from+1)+from;
}

void fill3x3MatrixWithRandomNumber(int arr[][3],int rows,int col)
{
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            arr[i][j] = randomNumber(1,100);
}

void printMatrix(int arr[][3],int rows,int col)
{
    cout << "The following is a 3x3 random matrix:" << endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
            cout << setw(3) << arr[i][j] << "   ";
        cout << endl;
    }
    cout << endl;
}

int rowSum(int arr[][3],int row,int col)
{
    int sum=0;
    for(int j=0;j<col;j++)
        sum+=arr[row][j];
    return sum;
}

void sumMatrixRowsInArray(int arr[][3],int arrSum[],int row,int col)
{
    for(int i=0;i<row;i++)
        arrSum[i] = rowSum(arr,i,col);
}

void printSumMatrix(int arrSum[],int row)
{
    cout << "The following are the sum of each row in the matrix:\n";
    for(int i=0;i<row;i++)
        cout << "Row " << i+1 << " Sum = " << arrSum[i] << endl;
}


int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    int arrSum[3];
    fill3x3MatrixWithRandomNumber(arr,3,3);
    printMatrix(arr,3,3);
    
    sumMatrixRowsInArray(arr,arrSum,3,3);
    printSumMatrix(arrSum,3);

    return 0;
}