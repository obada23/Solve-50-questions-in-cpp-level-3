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
            arr[i][j] = randomNumber(1,100);
}

void printMatrix(int arr[][3])
{
    cout << "The following is a 3x3 random matrix:" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout << setw(3) << arr[i][j] << "   ";
        cout << endl;
    }
}
int main()
{system("clear");
    srand((unsigned)time(NULL));
    int arr[3][3];
    fill3x3MatrixWithRandomNumber(arr);
    printMatrix(arr);

    return 0;
}