#include <stdio.h>

//Да се намери max от 3

int main(){
    int a = 0;
    int max = a;
    int i = 1;

    for(; i <= 3; i++){
        printf("a %d = ", i);
        scanf("%d", &a);
        if(a > max){
            max = a;
        }
    }

    printf("Max = %d", max);

}

