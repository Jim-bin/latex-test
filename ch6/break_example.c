/*  读入数字，j计算之和，遇到0则截止 */
#include<stdio.h>

int main(void){
    int n = 0, sum = 0;
    int i;
    printf("Enter a series of integer.\n");
    while (n < 5) {
        scanf("%d", &i);
        if (i == 0)
            break;
        sum += i;
        n++;
    }
    printf("The sum of integers is: %d",  sum);   
}