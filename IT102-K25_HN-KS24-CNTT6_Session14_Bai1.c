#include<stdio.h>

int total(int a, int b) {
    return a + b;
}

int main() {
    int a,b,sum;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
    sum = total(a,b);
    printf("%d + %d = %d",a, b, sum);
    return 0;
}