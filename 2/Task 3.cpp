#include <iostream>
#include <time.h>
#include <random>

using namespace std;

int main()
{
    srand(time(NULL));
int a,b,n,m;
float sum=0;
    cout << "Enter random number generators. From: ";
    cin >> a;
    cout << "To: ";
    cin >> b;
int const N=50;
int const M=50;
    cout << "Enter the size of array A[n]x[m]"<<endl;
    cout << " Rows: ";
    cin >> n;
    cout << " Columns: ";
    cin >> m;
        if(n>N || m>M){cout << "Error!";
            return 0;}
int A[n][m];
    cout << "Array is created with sizes: " << n << m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            A[i][j]=rand() % b+a;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << A[i][j] << " ";
        }cout <<endl;
    }
    int B[n];
    cout << "Created an array with sizes of rows.\n";
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<m; j++)sum+=A[i][j];
        B[i]=sum;
        }
    cout << "Array with sum of every row of array:\n";
    for(int i=0; i<n; i++)cout<<B[i]<<" ";
    return 0;
}
