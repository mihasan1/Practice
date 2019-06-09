#include <iostream>
#include <cstring>

using namespace std;

struct rail{
int id;
char way[50];
char t_out[10];
char t_in[10];
};

void GetRail(rail *M, int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        cout<<"["<<i+1<<"]"<<"Enter the number of train: ";
        cin>>M[i].id;
        cin.ignore();

        cout<<"["<<i+1<<"]"<<"Enter the route: ";
        cin.getline(M[i].way,50);

        cout<<"["<<i+1<<"]"<<"Arrival time: ";
        cin.getline(M[i].t_in,10);

        cout<<"["<<i+1<<"]"<<"Departure time: ";
        cin.getline(M[i].t_out,10);
        cout << "\n";
    }
}

int main()
{
system("chcp 1251");
int n;
char time_in[10];
cout << "Enter the nubler of routes: ";
cin >> n;
    rail *M=new rail[n];
        GetRail(M,n);
    cout << "Enter the arrival time: ";
    cin.getline(time_in,10);
    cout << "Enter the departure time:\n";
    for(int i=0; i<n; i++){
        if(strcmp(time_in, M[i].t_in)==0){
            cout << "Number of the train: "<<M[i].id<<endl;
            cout << "Route: "<<M[i].way<<endl;
            cout << "Arrival time: "<<M[i].t_in<<endl;
            cout << "Departure time: "<<M[i].t_out<<"\n\n";
        }
    }
return 0;
}
