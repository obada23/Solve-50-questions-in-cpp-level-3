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

int rowSum(int arr[][3],int rows,int col)
{
    int sum=0;
    for(int j=0;j<col;j++)
        sum+=arr[rows][j];
    return sum;
      
}

void printSumEachRow(int arr[][3],int rows,int col)
{
    cout << "The following are the sum of each row in the matrix:" << endl;
    int i;
    for(int i=0;i<3;i++)
        cout << "Row " << i+1 << " Sum = " << rowSum(arr,i,col) << endl;
     
         
}
int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumber(arr,3,3);
    printMatrix(arr,3,3);
    printSumEachRow(arr,3,3);

    return 0;
}