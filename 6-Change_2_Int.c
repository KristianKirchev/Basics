#include <stdio.h>

//�� �� ������ ����������� �� 2 ����������

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("a = %d   b = %d", a, b);

}
