#include <iostream>

using namespace std;

struct exam{
char fam[30];
int math;
int CompSci;
int physics;
};

void GetExam(exam *M, int N){
    cin.ignore();
    for(int i=0; i<N; i++){
        cout << "Last name: ";
        cin.getline(M[i].fam,30);

        cout << "Maths: ";
        cin >> M[i].math;
        cin.ignore();

        cout << "Compuer Science: ";
        cin >> M[i].CompSci;
        cin.ignore();

        cout << "Physics: ";
        cin >> M[i].physics;
        cin.ignore();
        cout <<endl;
    }
}

int main()
{
int N, a=0;
cout << "Enter the nubmer of students in list: ";
cin >> N;
exam *M=new exam[N];
    GetExam(M, N);
cout << "Studens who have two '5' and one '4': "<<endl;
    for(int i=0; i<N; i++){
        if(M[i].math == 5 || M[i].CompSci == 5 || M[i].physics == 4){
            if(M[i].math == 4 || M[i].CompSci == 5 || M[i].physics == 5){
                if(M[i].math == 5 || M[i].CompSci == 4 || M[i].physics == 5){a++;
                cout <<"["<<a<<"]Lastname: "<<M[i].fam<<endl;}
            }
        }
    }
cout << "Amount: "<<a;
    return 0;
}
