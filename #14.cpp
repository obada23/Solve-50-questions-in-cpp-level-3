#include <iostream>
#include <iomanip>
using namespace std;


void printMatrix(int arr[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%0*d   ", 1,arr[i][j]);
        cout << endl;
    }
    cout << endl;
    
}

bool isScalarMatrix(int arr[][3],int rows,int cols)
{
    int number = arr[0][0];
    bool t=true;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i==j && arr[i][j]!=number)
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
    int arr[3][3]={{9,0,0},{0,9,0},{0,0,9}};
    cout << "Matrix1: " << endl;
    printMatrix(arr);

    if(isScalarMatrix(arr,3,3))
        cout << "Yes: Matrix is scalar." << endl;
    else
        cout << "No: Matrix is not scalar." << endl;




    return 0;
} 