#include <iostream>

using namespace std;

int main()
{
system("chcp 1251");
int i,n,null1, null2;
double max=0,dobutok=1;
cout << "Enter the size of array: ";
cin >> n;
double arr[n];
cout << "Enter the elements of array. \n";
    for(int i=0; i<n; i++){
       cout << "["<<i+1<<"]:";
       cin >> arr[i];
    }

    for(i=0; i<n; i++){
        if(arr[i]>max){max=i; }
    }
    for(i=0;i<n;i++)
		if(arr[i] == 0){
        null1 = i;
        break;};

	for(i=null1+1;i<=n;i++)
		if(arr[i] == 0){
        null2 = i;
        break;};

	if(null2 != 0){
        for(i=null1+1;i<null2;i++)
        dobutok *= arr[i];}

    cout << "Maximum elements of array: "<<max<<endl;
    cout << "Product of the element between the first and second nulls of array: "<<dobutok;
return 0;
}
