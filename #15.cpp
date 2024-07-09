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
            arr[i][j] = randomNumber(1,20);
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

int readNumber(string message)
{
    int number;
    cout << message;
    cin >> number;
    cout << endl;
    return number;
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



int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumber(arr);
    cout << "Matrix1: " << endl;
    printMatrix(arr);

    int number = readNumber("Enter the number to count in matrix? ");
    int count = countTheNumberInMatrix(arr,number,3,3);
    cout << "Number " << number << " count int matrix is " << count << endl; 
    




    return 0;
} 