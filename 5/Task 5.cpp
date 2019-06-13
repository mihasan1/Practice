#include <iostream>

using namespace std;

struct company{
char name[50];
double profit;
double payment;
};

void report(company *M, int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        cout <<"Name of Company: ";
        cin.getline(M[i].name,50);

        cout<<"Profit: ";
        cin>>M[i].profit;

        cout <<"Charges on salary: ";
        cin >> M[i].payment;
        cout << endl;
        cin.ignore();
    }
}

void sort(company **N, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(N[i]->profit<N[j]->profit)
            {
                company *temp=N[i];
                N[i]=N[j];
                N[j]=temp;
            }
        }
    }
}

int main()
{
int n;
cout << "Enter the number of companies: ";
cin >> n;
company *M=new company[n];
    report(M, n);
company **N=new company*[n];
for(int i=0; i<n; i++){
    N[i]=&M[i];
}
sort(N,n);
cout << "--- 3 the most profitable enterprise ---"<<endl;
for(int i=0; i<3; i++){
    cout << "Name of Company: "<<N[i]->name<<endl;
    cout << "Profit for the month: "<< N[i]->profit<<endl;
    cout << "Charges on salary: "<<N[i]->payment<<endl;
}
return 0;
}
