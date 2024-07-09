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
int sumMatrix(int arr[][3],int rows,int cols)
{
    int sum=0;
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            sum+=arr[i][j];
    return sum;


}
void printSumOfTheMatrix(int arr[][3],int rows,int cols)
{
    cout << "Sum of Matrix1 is: " << sumMatrix(arr,rows,cols) << endl;
}
int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumber(arr);
    cout << "Matrix1: " << endl;
    printMatrix(arr);
    printSumOfTheMatrix(arr,3,3);


    return 0;
}