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
            arr[i][j] = randomNumber(0,9);
}

void printMatrix(int arr[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            printf("%0*d   ",1,arr[i][j]);
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

void intersectedNumberBetweenTwoMatrices(int arr[][3],int arr2[][3],int intersectedNumbers[9],int rows,int cols,int &count)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(isNumberInMatrix(arr,arr2[i][j],rows,cols))
            {
                bool alreadyAdded = false;
                for(int s=0;s<count;s++)
                {
                    if(arr2[i][j]==intersectedNumbers[s])
                    {
                        alreadyAdded=true;
                        break;
                    }
                        
                        
                }
                if(!alreadyAdded)
                {
                    intersectedNumbers[count] = arr2[i][j];
                    count++;
                }
                
                
            }
        }
    }
  
            
}


int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3],arr2[3][3];

    fill3x3MatrixWithRandomNumber(arr,3,3);
    cout << "Matrix1: " << endl;
    printMatrix(arr,3,3);

    fill3x3MatrixWithRandomNumber(arr2,3,3);
    cout << "Matrix2: " << endl;
    printMatrix(arr2,3,3);

    int intersectedNumbers[9];
    int count=0;
    intersectedNumberBetweenTwoMatrices(arr,arr2,intersectedNumbers,3,3,count);

    cout << "Intersected Number are: " << endl;
    for(int i=0;i<count;i++)
        cout << intersectedNumbers[i] << "   ";
    cout << endl << endl;






    return 0;
} 