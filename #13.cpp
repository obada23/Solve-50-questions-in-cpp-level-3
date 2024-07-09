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

bool isIdentityMatrix(int arr[][3],int rows,int cols)
{
    bool t=true;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i==j && arr[i][j]!=1)
                return false;
            
            else if(i!=j && arr[i][j]!=0)
                return false;

        }
    }

    return true;
            
}

int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumber(arr);
    cout << "Matrix1: " << endl;
    printMatrix(arr);

    if(isIdentityMatrix(arr,3,3))
        cout << "Yes: Matrix is identity" << endl;
    else
        cout << "No: Matrix is not identity" << endl;




    return 0;
} 