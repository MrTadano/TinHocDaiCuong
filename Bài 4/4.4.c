#include <stdio.h>

int ucln(int a, int b){
   while(b != 0){
      int r = a % b;
      a = b;
      b = r;
   }
   return a;
}
int main() {

    int a,b;
    scanf("%d%d",&a ,&b);
    if(a<=0||b<=0)
        printf("ERROR");
    else{
    int c=ucln(a, b);
    printf("%d\n", c);
    int d=(a*b)/c;
    printf("%d", d);
    }
    return 0;
}