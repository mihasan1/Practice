#include <iostream>
using namespace std;
int main()
{
int n,i,k=0,z=0,d=0;
float sum=0;
cout << "Enter the size of a one-dimensional array: ";
cin >> n;
int A[n];
cout << "Enter the elements of the array."<<endl;
    for(i=0; i<n; i++){cin >> A[i];}
int min=A[0];
    for(i=0; i<n; i++){if (A[i]<min) min=A[i];}
      while ((i<n)&&(A[i]>0)){
        k++;
        i++;}
    z=k+1;
    while ((z<n)&&(A[z]>0)){
        d++; z++;}
    for (int b=k+1; b<z; b++)
        sum=sum+A[b];
cout << "Minimum array element: "<<min<<endl;
cout << "The sum of the elements between the first and second negative elements: "<<sum;
}
