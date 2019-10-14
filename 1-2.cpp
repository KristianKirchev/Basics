#include <iostream>
#include <string>

using namespace std;

int main(){

    int n = 0;
    int m = 0;
    double a = 0;
    double e;
    double pn;
    double pm;
    double b;

    while(a <= 0 || a > 100000){
        cout << "Pari za tenis raketi: ";
        cin >> a;
    }

    while(n <= 0 || n > 100){
        cout << "Broi tenis raketi: ";
        cin >> n;
    }

    while(m <= 0 || m > 100){
        cout << "Broi chiftove maratonki: ";
        cin >> m;
    }

    pn = a * n;
    pm = (a / 6) * m;
    e = (pn + pm) / 5;
    b = pn + pm + e;

    cout << "Price to be paid by Djokovic: " << (b / 8) << endl;
    cout << "Price to be paid by sponsors: " << ((b / 8) * 7);



}
