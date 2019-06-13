#include <iostream>

using namespace std;

int main()
{
int n,nul=0,a;
cout << "Enter the number of array elements: ";
cin >> n;
double A[n], min,sum=0;
cout << "Enter the elements of the array"<<endl;
for(int i=0; i<n; i++){
    cin >> A[i];
        }
min=A[0];
for(int i=0; i<n; i++){
    if(A[i]<=min){min=A[i]; a=i;}
    if(A[i]==0)nul++;
        }
for(int i=a+1; i<n; i++){
    sum+=A[i];
    }
cout << "Number of zeros in the massive: "<<nul<<endl;
cout << "The sum of the elements located after the minimal element: "<<sum;
return 0;
}
