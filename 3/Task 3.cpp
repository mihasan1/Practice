#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
srand(time(NULL));
setlocale(LC_ALL, "RUS");
int const N=30;
int const M=30;
int n,m,i,j,a,b;
cout << "Enter the size of the array"<<endl;
cout << "n: ";
cin >> n;
cout << "m: ";
cin >> m;
if(n>N || m>M){cout << " Error! The size of the array is entered incorrectly.";return 0;}
if(n!=m){cout << "The matrix is ??not square! Replacing diagonals is not possible!";return 0;}
float A[n][m];
cout << "Enter the generation interval of numbers"<<endl;
cout << "a: ";
cin >> a;
cout << "b: ";
cin >> b;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
        A[i][j]=rand()%b+a;
        }
    }
for(i=0; i<n; i++){
    for(j=0; j<m; j++){
        cout << A[i][j] << " ";
    }cout<<endl;
}
cout << endl;
float X[n];
float Y[n];
    for(i=0; i<n; i++){
        X[i]=A[i][i];
            Y[i]=A[i][n-1-i];
    }
    for(i=0; i<n; i++){
        A[i][i]=Y[i];
            A[i][n-1-i]=X[i];
    }
cout << "The matrix after replacing diagonals by places: "<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<A[i][j]<< " ";
        }cout<<endl;
    }
return 0;
}
