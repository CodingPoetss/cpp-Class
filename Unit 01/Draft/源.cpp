#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int x = 0;
    int sum = 0;
    scanf("%d", &n);
    while (n > 0) {
        sum = 0;
        while (x != -1) {
            scanf("%d", &x);
            if (x % 3 == 1 && x % 5 == 2) {
                sum = sum + x;
            }
        }
        printf("%d\n", sum);
        n--;
    }
    return 0;
}