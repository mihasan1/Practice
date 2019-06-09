#include <iostream>
#include <cstring>

using namespace std;

struct demos{
char sex[10];
char age[10];
char nationality[30];
int count;
};

void GetDemos(demos *M, int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        cout << "Sex: ";
        cin.getline(M[i].sex,10);

        cout << "Age: ";
        cin.getline(M[i].age,10);

        cout << "Nationality: ";
        cin.getline(M[i].nationality,30);

        cout << "Nubmer: ";
        cin >> M[i].count;
        cin.ignore();
        cout << endl;
    }
}

int main()
{
system("chcp 1251");
const char *male="Male";
const char *female="Female";
int n=0;
int type1=0, type2=0;
cout << "Enter the information about town livers:\n";
cout << "Enter the number of lists: ";
cin >> n;
    demos *M=new demos[n];
        GetDemos(M,n);
    for(int i=0; i<n; i++){
        if(strcmp(M[i].sex,female)==0)type1+=M[i].count;
        else if(strcmp(M[i].sex,male)==0)type2+=M[i].count;
    }
         if (type1>type2)cout << "Women more than men.";
    else if (type2>type1) cout << "Men more than women.";
    else if (type1==type2) cout << "The number of the women and men is same.";
return 0;
}
