#include <iostream>
#include <ctype.h>
#include <locale>

using namespace std;

locale loc ("English");

int main()
{
system("chcp 1251");
float const Pi=3.14;
double r, d=0, s=0, l=0;
    cout << "Enter the radius: ";
    cin >> r;
	d=2*r;
    l=d*Pi;
    s=(r*r)*Pi;
    cout << "Diameter: "<<d<<" см\nLength: "<<l<<" см\nArea: "<<s<<"Pi";
    return 0;
}
