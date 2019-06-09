#include <iostream>
#include <time.h>
#include <random>

using namespace std;

int main()
{
srand(time(NULL));
int a,b,n,m,c;
    cout << "Enter random number generators"<<endl;
    cout << "From: ";
    cin >> a;
    cout << "To: ";
    cin >> b;
int const N=50;
int const M=50;
    cout << "Enter array dimensions"<<endl;
    cout << " Rows: ";
    cin >> n;
    cout << " Columns: ";
    cin >> m;
        if(n>N || m>M){cout << "Error! The sizes entered exceed the permissible ones ";
            return 0;}
float A[n][m];
    cout << "Array is created with sizes:  " << n << " x " << m <<endl;
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
float B[m];
    cout << "An array with column sizes is created."<<endl;
        for(int i=0; i<n; i++){B[i]=rand() % b+a;}
        for(int i=0; i<n; i++){cout<<B[i]<<" ";}
    cout <<endl;
    cout << "Enter the column number you want to replace: ";
    cin >> c;
    if(c>m){cout << "No such column!"; return 0;}
        for(int i=0; i<n; i++){
            A[i][c-1]=B[i];
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
             cout << A[i][j] << " ";
            }cout <<endl;
        }
    return 0;
}
