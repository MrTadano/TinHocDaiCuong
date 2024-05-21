#include<stdio.h>
#include<string.h>
int main(){
    char s[99],t[99],resstr[30];
	int restime[30];
    scanf("%s%s",s,t);
    int reslen = 0;
    for(char i = 'a';i<'z'+1;i++){
    	int hook=0;
		for(int j=0;j<strlen(s);j++){
			if(i==s[j]){
				hook+=1;
			}
		}
		for(int k=0;k<strlen(t);k++){
			if(i==t[k]){
				hook+=1;
			}
		}
		if(hook>0){
			resstr[reslen]=i;
			restime[reslen]=hook;
			reslen++;
		}
	}
	printf("%s",resstr);
	for(int i=0;i<reslen;i++){
		printf("\n%d",restime[i]);
	}
    return 0;
}
