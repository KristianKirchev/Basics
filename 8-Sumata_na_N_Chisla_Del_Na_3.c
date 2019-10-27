#include <stdio.h>

//Да се намери сумйата на n числа, но само тези делящи се на 3

int main(){

    int n = 0;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while(n <= 0);

    printf("1\n");
    printf("n:%d\n", n);

    int sum = 0;

    for (int c = 1; c <= n; c++) {
        int a = 0;
        while(a < 2) {
            printf("a%d = ", c);
            scanf("%d", &a);
        }


        if(a % 3 == 0){
            sum += a;
        }
    }

    printf("Sum = %d", sum);
}
