
#include<stdio.h>    
int sum(int num[],int n) {
    int Sum = 0;
    int max = 0;
        for (int i = 0; i < n; i++) {
            if (Sum <= 0) {
                Sum = num[i];
            }
            else {
                Sum = Sum + num[i];
            }
            if (Sum > max) {
                max = Sum;
            }
        }
        return max;
}

int main()
{
    int i, n;
    scanf_s("%d", &n);
    int num[100];
    for (i = 0; i < n; i++)
        scanf_s("%d", &num[i]); 
    int result = sum(num,n);
    printf("连续子元素的最大和为：%d",result);
 return 0;
}