#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int i,n,mod;
cout << "Enter array dimensions: ";
cin >> n;
double a[n];
double sum=0;
cout << "Enter array elements"<<endl;
    for(i=1; i<=n; i++){
        cout <<"["<<i<<"]: ";
        cin>>a[i];
            }
    double min=fabs(a[1]);
    for(i=1; i<=n; i++){
        if(fabs(a[i])<min){min=fabs(a[i]);
         mod=i;}
    }
    for(i=1; i<=n; i++){
        if(a[i]<0){
        for(int j=i+1; j<=n; j++){sum+=fabs(a[j]);}
         break;}
    }
    cout << "Index of the minimum number modulus: "<<mod<<endl;
    cout << "The sum of the mudulus elements located after the first negative number: "<<sum;
}
