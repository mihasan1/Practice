#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
srand(time(NULL));
int const N=50;
int const M=50;
int n,m;
int a,b;
int i,j;
float sum=0;
cout << "Enter the size of the array"<<endl;
cout << "Rows: ";
cin >> n;
cout << "Columns: ";
cin >> m;
if(n>N || m>M){cout << "Error! Invalid dimensions of the array!";return 0;}
float A[n][m];
float B[m];
cout << "Enter the interval at which to generate random numbers"<<endl;
cout << "From: ";
cin >> a;
cout << "To: ";
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

for(j=0; j<m; j++){
    sum=0;
    for(i=0; i<n; i++)sum+=A[i][j];
    B[j]=sum;
}

cout << "An array in which the sum of the columns of a two-dimensional array is written: "<<endl;
for(j=0; j<m; j++) cout << B[j] << " ";
return 0;
}
