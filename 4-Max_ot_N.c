#include <stdio.h>

//Да се намери max от n

int main(){
    int n = 0;
    do{
        printf("N = ");
        scanf("%d", &n);
    }while(n <= 0);
    int a = 0;
    int max = a;
    int i = 1;

    for(; i <= n; i++){
        printf("a %d = ", i);
        scanf("%d", &a);
        if(a > max){
            max = a;
        }
    }

    printf("Max = %d", max);

}
