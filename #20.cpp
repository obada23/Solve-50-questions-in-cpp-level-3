#include <iostream>
#include <iomanip>
using namespace std;

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

bool isPalindrome(int arr[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols/2;j++)
        {
            if(arr[i][j]!=arr[i][cols-1-j])
                return false;
        }
    return true;
}




int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3]={{5,0,5},{3,5,3},{1,1,1}};
    cout << "Matrix1: " << endl;
    printMatrix(arr,3,3);

    if(isPalindrome(arr,3,3))
        cout << "Yes: Matrix is Palindrome" << endl << endl;
    else 
        cout << "No: Matrix is NOT Palindrome" << endl << endl;
    
   


    return 0;
} 