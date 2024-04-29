#include <stdio.h>
#include <math.h>
int main() {

    int a,b,c;
    scanf("%d%d%d",&a ,&b,&c);
    if(a==0)
    {
        if(b==0){
            if(c==0)
            printf("Phuong trinh vo so nghiem");
            else
            printf("Phuong trinh vo nghiem");
        }
        else
        {   
            double x= -c/b;
            printf("%f", x) ;
        }
    }
    else
    {
        double delta=b*b-4*a*c;
        double x1,x2,i,r;
        if(delta>0)
        {
            double x1,x2;
            x1= (-b + sqrt(delta)) / (2*a);
            x2= (-b - sqrt(delta)) / (2*a);
            if (x1>x2) 
                printf("%f\n%f",x1,x2);
            else
                printf("%f\n%f",x2,x1);
        }
        else if(delta==0){
            double x= -c/b;
            printf("%f", x);
        }
        else{
            i=-b/2*a; r=sqrt(-delta)/2*a;
            printf("%f",i);
            printf("+");
            printf("%f",r);
            printf("i\n");
            printf("%f",i);
            printf("-");
            printf("%f",r);
            printf("i");
        }
        
    }
    return 0;
}