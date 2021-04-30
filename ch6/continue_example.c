/*  读入数字，计算之和，遇到0,跳过当次循环，继续执行下次循环 */
#include<stdio.h>

int main(void){
    int n = 0, sum = 0;
    int i;
    printf("Enter a series of integer.\n");
    while (n < 5) {
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
        n++;
    }
    printf("The sum of integers is: %d",  sum);   
}