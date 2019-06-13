#include <iostream>

using namespace std;

struct kartoteka{
char name[50];
double cost;
char producer[30];
};

void GetFilm(kartoteka *M, int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        cout<<"\n";
        cout<<"["<<i+1<<"]"<<"Film name: ";
        cin.getline(M[i].name,50);

        cout<<"["<<i+1<<"]"<<"Cost: ";
        cin>>M[i].cost;
        cin.ignore();

        cout<<"["<<i+1<<"]"<<"Producer: ";
        cin.getline(M[i].producer,30);
    }
}

int main()
{
int n,a;
double average,sum=0,min,max;
cout << "Enter films number: ";
cin >> n;
kartoteka *M= new kartoteka[n];
    GetFilm(M,n);
cout << "\n";
max=M[0].cost;
min=M[0].cost;
    for(int i=0; i<n; i++){
        sum+=M[i].cost;
        if(M[i].cost > max) max=M[i].cost;
        if(M[i].cost < min) min=M[i].cost;
    }
    average=sum/n;
    cout << "Show information about the movie, the cost of which:\n";
    cout << "1 - Higher than minimim\n2 - Lower than average\n3 - Higher than average\n4 - Lower than maximal\n0 - Exit\n";
    while (a!=0){
        cout << "Make your choice: ";
        cin >> a;
        cout << endl;
        switch(a){
        case 1:{cout << "Movies, cost of which higher than minimim\n";
        for(int i=0; i<n; i++){
            if(M[i].cost>min){cout <<"Name:"<<M[i].name<<endl;
                          cout <<"Cost: "<< M[i].cost<<endl;
                 cout << "Producer:"<<M[i].producer<<endl<<endl;}
                else continue;}
                        break;}
  case 2:{cout<<"Movies, cost of which lower than average\n";
        for(int i=0; i<n; i++){
            if(M[i].cost<average){cout<<"Name:"<<M[i].name<<endl;
                          cout<<"Cost:"<< M[i].cost<<endl;
                 cout <<"Producer:"<<M[i].producer<<endl<<endl;;}
                else continue;}
                        break;}
  case 3:{cout<<"Movies, cost of which higher than average\n";
        for(int i=0; i<n; i++){
            if(M[i].cost>average){cout<<"Name:"<<M[i].name<<endl;
                        cout << "Cost: "<< M[i].cost<<endl;
             cout << "Producer: "<< M[i].producer<<endl<<endl;;}
                else continue;}
                        break;}
  case 4:{cout << "Movies, cost of which lower then maximum\n";
        for(int i=0; i<n; i++){
 if(M[i].cost<max){cout << "Name: " << M[i].name<<endl;
         cout << "Cost: "<< M[i].cost<<endl;
         cout << "Producer: "<< M[i].producer<<endl<<endl;;}
                else continue;}
                        break;}
        case 0:{exit(0);break;}
        default:{cout << "Error!\n";}
        }
    }
 
    delete []M;
    return 0;
}
