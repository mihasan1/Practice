#include <iostream>

using namespace std;

struct exam{
char lastname[30];
int math;
int CompSci;
int physics;
} ;

void GetExam(exam *M, int n){
cin.ignore();
    for(int i=0; i<n; i++){
        cout << "Last name: ";
        cin.getline(M[i].lastname, 30);
        cout <<"Maths: ";
        cin>>M[i].math;
        cout << "Computer Science: ";
        cin>> M[i].CompSci;
        cout << "Physics: ";
        cin >> M[i].physics;
        cin.ignore();
        cout << endl;
    }
}

int main()
{
int n;
float GPA1=0, GPA2=0,GPA3=0;
cout << "Enter the number of students in the list: ";
cin >> n;
exam *M=new exam[n];
    GetExam(M,n);
for(int i=0; i<n; i++){
    sred1+=M[i].math;
    sred2+=M[i].CompSci;
    sred3+=M[i].physics;
}
cout << "GPA\nMaths - "<<GPA1/n<<"\nComputer Science - "<<GPA2/n<<"\nPhysics - "<<GPA3/n<<endl;
cout << "Students in whom each score is higher than average: \n";
for(int i=0; i<n; i++){
    if(M[i].math>GPA1/n && M[i].CompSci>GPA2/n && M[i].physics>GPA3/n){
        cout <<M[i].lastname<<endl;}
    }
}
