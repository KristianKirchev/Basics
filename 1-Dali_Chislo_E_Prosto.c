#include <stdio.h>

//ƒа се определи дали едно естествено число е просто

int main(){
    int n = 0;

    do {
        scanf("%d", &n);
    } while (n < 2);

    int i = 1;

    do {

    } while (n % ++i != 0);

    if(n == i){
        printf("Prosto");
    }else{
        printf("Ne e prosto");
    }
}
