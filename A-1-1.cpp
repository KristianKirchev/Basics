#include <iostream>
using namespace std;

int main() {
    int n;
    char x = 0;
    char y = 0;
    int i;

    cout << "The num of * is: ";
    cin >> n;

    for(x = 0; x < n; x++){
        for(y = 0; y < n; y++){
            if(x == 0 || x == n - 1 || y == 0 || y == n - 1){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
