#include <stdio.h>
#include <string.h>
 
void chuanHoa(char a[])
{
    int n = strlen(a); 
 	int i,j;
    for(i=0;i<n;i++){
        if(a[i]==' '){
            for(j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            a[n-1]='\0';
            i--;
            n--;
        }
        else break;
    }
     
    for(i=n-1;i>=0;i--){
        if(a[i]==' '){
            a[i]='\0';
            n--;
        }
        else break;
    }
     
    for(i=1;i<n-1;i++)
    {
        if(a[i]==a[i+1] && a[i]==' '){
            for(j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            a[n-1]='\0';
            i--;
            n--;
        }
    }
}
int main()
{
    char a[100];
    gets(a);
    chuanHoa(a);
    puts(a);
}
