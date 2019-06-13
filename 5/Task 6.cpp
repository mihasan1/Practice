#include <iostream>

using namespace std;

struct town{
char lastname[30];
int age;
char sex[20];
};

void getPeople(town *M, int n){
cin.ignore();
for(int i=0; i<n; i++){
    cout << "Last name: ";
    cin.getline(M[i].lastname, 30);

    cout << "Age: ";
    cin >> M[i].age;
    cin.ignore();

    cout << "Sex: ";
    cin.getline(M[i].sex,20);
    cout <<endl;
}
}

int main()
{
int n;
cout << "Enter the number of inhabitants: ";
cin >> n;
town *M = new town[n];
    getPeople(M, n);
    return 0;
}
