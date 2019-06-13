#include <iostream>

using namespace std;

int main()
{
int a,b;
cout << "Enter the first number: ";
cin >> a;
cout << "Enter the second number: ";
cin >> b;
switch (a%b){
    case 0:cout << "1";break;
    default:cout << "0";break;
    }

}
