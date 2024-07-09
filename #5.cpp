#include <iostream>
#include <iomanip>
using namespace std;
int randomNumber(int from,int to)
{
    return rand()%(to-from+1)+from;
}

void fill3x3MatrixWithRandomNumber(int arr[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            arr[i][j] = randomNumber(1,100);
}

void printMatrix(int arr[][3],int rows,int cols)
{
    cout << "The following is a 3x3 random matrix:" << endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout << setw(3) << arr[i][j] << "   ";
        cout << endl;
    }
}

int sumCols(int arr[][3],int rows,int cols)
{
    int sum=0;
    for(int i=0;i<rows;i++)
        sum += arr[i][cols];
    return sum;
}

void sumMatrixColInArray(int arr[][3],int arrSum[],int rows,int cols)
{
    for(int j=0;j<cols;j++)
        arrSum[j] =sumCols(arr,rows,j);
}


void printSumofCol(int arrSum[],int cols)
{
    cout << "\nThe following are the sum of each col in the matrix:" << endl;
    for(int j=0;j<cols;j++)
        cout << "Col " << j+1 << " Sum = " << arrSum[j] << endl;
}

int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    int arrSum[3];
    fill3x3MatrixWithRandomNumber(arr,3,3);
    printMatrix(arr,3,3);

    sumMatrixColInArray(arr,arrSum,3,3);
    printSumofCol(arrSum,3);

    return 0;
}