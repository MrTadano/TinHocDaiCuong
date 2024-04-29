#include <stdio.h>
#include <math.h>

int sumn(int num)
{   
    int a;
    int b=0;
    int n=num;
    int len=0;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    while (len!=0)
    {
        a=num%10;
        b=b+a;
        num /=10;
        len--;
    }
    return b;
}

int main() {

    int n ;
    scanf("%d",&n);
    char num[50];
    if(n>=1000) 
        printf("ERROR");
    else
    {
        int num = sumn(n);
        printf("%d",num);
    }
    return 0;
}