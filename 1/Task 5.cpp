#include <iostream>

using namespace std;

struct pogran{
char name[30];
char date[10];
int code;
int number;
};

void GetPogran(pogran  *M, int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        cout <<"["<<i+1<<"]Enter the name: ";
        cin.getline(M[i].name,30);

        cout <<"["<<i+1<<"]Enter the date: ";
        cin.getline(M[i].date,10);

        cout <<"["<<i+1<<"]Enter the code: ";
        cin>>M[i].code;
        cin.ignore();

        cout <<"["<<i+1<<"]Enter the number: ";
        cin >>M[i].number;
        cin.ignore();
        cout << "\n";
    }
}

int main()
{
int n,a;
cout << "Enter the number of reports: ";
cin >> n;
pogran *M=new pogran[n];
    GetPogran(M,n);
int max=0;
    for(int i=0; i<n; i++){
    if(M[i].number>max){max=M[i].number; a=i;}
    }
    cout << "Most withdrawn: " << M[a].name<<endl;
return 0;
}
