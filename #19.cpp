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
            arr[i][j] = randomNumber(-9,99);
}

void printMatrix(int arr[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            printf("%0*d   ", 2,arr[i][j]);
        cout << endl;
    }
    cout << endl;
    
}

int findMin(int arr[][3],int rows,int cols)
{
    int min=arr[0][0];
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            if(arr[i][j]<min)
                min = arr[i][j];
    return min;
}

int findMax(int arr[][3],int rows,int cols)
{
    int max=arr[0][0];
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            if(arr[i][j]>max)
                max = arr[i][j];
    return max;

}



int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumber(arr,3,3);
    cout << "Matrix1: " << endl;
    printMatrix(arr,3,3);
    cout << "Minimum Number is : " << findMin(arr,3,3) << endl;
    cout << "Max Number is : " <<  findMax(arr,3,3) << endl;



    return 0;
} 