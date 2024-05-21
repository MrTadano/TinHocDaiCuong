#include <stdio.h>
#include <math.h>

int sumn(int num)
{   
    int a;
    int b=0;
    while (num!=0)
    {
        a=num%10;
        b=b+a;
        num /=10;
    }
    return b;
}

int main() {

    int n ;
    scanf("%d",&n);
    if(n>=1000) 
        printf("ERROR");
    else
    {
        int num = sumn(n);
        printf("%d",num);
    }
    return 0;
}
