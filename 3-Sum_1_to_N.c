#include <stdio.h>

//�� �� ������ ������ �� 1 �� N

int main(){

    int n = 0;
    do{
        printf("N: ");
        scanf("%d", &n);
    }while(n <= 0);
    int i = 1;
    int sum = 0;

    for(; i<=n; i++){
        sum = sum + i;
    }

    printf("Sum = %d", sum);

}
