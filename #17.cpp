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
            arr[i][j] = randomNumber(0,10);
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

bool isNumberInMatrix(int arr[][3],int number,int rows,int cols)
{
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            if(arr[i][j]==number)
                return true;

    return false;
            
}

int readNumber(string message)
{
    int number;
    cout << message;
    cin >> number;
    cout << endl;
    return number;
}

int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumber(arr);
    cout << "Matrix1: " << endl;
    printMatrix(arr);

    int number = readNumber("Please Enter the number to look for in matrix? ");

    if(isNumberInMatrix(arr,number,3,3))
        cout << "Yes it is there" << endl<<endl;
    else
        cout << "No it is not exist" << endl<<endl;




    return 0;
} 