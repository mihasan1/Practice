#include <iostream>

using namespace std;

struct car{
char name[50];
char model[20];
char number[20];
double power;
};

void GetCar(car *M, int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        cout << "Name: ";
        cin.getline(M[i].name,50);

        cout << "Model: ";
        cin.getline(M[i].model,20);

        cout << "Number: ";
        cin.getline(M[i].number, 20);

        cout << "Power: ";
        cin >> M[i].power;
        cin.ignore();
        cout << endl;
    }
}

void sort(car **N, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(N[j]->power>N[j+1]->power)
            {
                car *temp=N[j];
                N[j]=N[j+1];
                N[j+1]=temp;
            }
        }
    }
}

int main()
{
int n;
cout << "Enter the number of car owners: ";
cin >> n;
car *M=new car[n];
    GetCar(M, n);
car **N=new car*[n];
for(int i=0; i<n; i++){
    N[i]=&M[i];

}
sort(N,n);
cout << "---Sorted---"<<endl;
for(int i=0; i<n; i++){
    cout <<"Name: "<< N[i]->name<<endl;
    cout <<"Model: "<<N[i]->model<<endl;
    cout <<"Number: "<<N[i]->number<<endl;
    cout <<"Power: "<<N[i]->power<<endl<<endl;
}
return 0;
}
