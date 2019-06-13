#include <iostream>

using namespace std;

struct licenses{
char name[50];
char date[20];
char type[20];
double cost;
};

void GetLicenses(licenses *M, int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        cout << "Name: ";
        cin.getline(M[i].name,50);

        cout << "Date of obtaining a license: ";
        cin.getline(M[i].date,20);

        cout << "Type of weapon: ";
        cin.getline(M[i].type, 20);

        cout << "The cost of weapon: ";
        cin >> M[i].cost;
        cin.ignore();
        cout << endl;
    }
}

void sort(licenses **N, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(N[i]->cost<N[j]->cost)
            {
                licenses *temp=N[i];
                N[i]=N[j];
                N[j]=temp;
            }
        }
    }
}

int main()
{
int n;
cout << "Enter the number of licenses issued: ";
cin >> n;
licenses *M=new licenses[n];
    GetLicenses(M, n);
licenses **N=new licenses*[n];
for(int i=0; i<n; i++){
    N[i]=&M[i];

}
sort(N,n);
cout << "---Sorted---"<<endl;
for(int i=0; i<n; i++){
    cout <<"Name: "<< N[i]->name<<endl;
    cout <<"Date: "<<N[i]->date<<endl;
    cout <<"Type of weapon: "<<N[i]->type<<endl;
    cout <<"The cost of weapon: "<<N[i]->cost<<endl<<endl;
}
return 0;
}
