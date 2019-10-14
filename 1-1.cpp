#include <iostream>
#include <string>

using namespace std;

int main(){

    double n = (-1.00);
    double a;
    double b;
    double c;
    double d;

    while(n < 0 || n > 999){

        cout << "Bills: ";
        cin >> n;

    }

    a = (n / 10) * 6;
    b = (a / 10) * 8;
    c = b / 4;
    d = c / 5;

    cout << "Kecove: " << a << endl;
    cout << "Ekip: " << b << endl;
    cout << "Topka: " << c << endl;
    cout << "Aksesoari: " << d << endl;
    cout << "Obshto: " << (n + a + b + c + d);


}
