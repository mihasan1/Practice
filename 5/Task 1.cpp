	#include <iostream>
	#include <cmath>

	using namespace std;

	int main(int argc, char const *argv[]) {
    float x, y, a, b, r;
    cout << "Enter coordinates\n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
	cout << "Enter the center of circle";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "Enter the radius of circle: ";
    cin >> r;

    float d = sqrt(pow((a - x), 2) + pow((b - y), 2));
    if(d == r)
	cout << "1";
    else
    cout << "0";
    return 0;
}
