#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    double sqroot = sqrt(n);
    int flag = 0;
     for (int i = 2; i <= sqroot; i++) 
     {
        if (n % i == 0)
        {
        flag = 1;
        break;
        }
    }
    return flag;
}
int main() {

    int n ;
    scanf("%d", &n);
    if (n<=1)
    printf("Khong phai so nguyen to");
    else if(isPrime(n)==0)
    printf("La so nguyen to");
    else
    printf("Khong phai la so nguyen to");
    return 0;
}