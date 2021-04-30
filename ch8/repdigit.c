// 检查数有没有重复数字

#include<stdbool.h> // only for c99
#include<stdio.h>
int main(void){ 
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /=  10;
    }

    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated  digit\n");
        printf("你好啊");
    return  0;
}