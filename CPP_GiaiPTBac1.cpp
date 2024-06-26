#include <iostream>
using namespace std;
int main() {
    double a, b, x;
    cout << "nhap a";
    cin >> a;
    cout << "nhap b";
    cin >> b;
    x = -b / a;
    if (a == 0 && b == 0) {
        cout << "phuong trinh dung voi bac x";
    }
    else if (a == 0 && b != 0) {
        cout << "vo nghiem";
    }
    else if (a != 0) {
        cout << "nghiem" << x;
    }
    return 0;
}