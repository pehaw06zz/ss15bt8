#include<stdio.h>
#include<string.h>
void inhoa(char str[]){
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(i==0||str[i-1]==' '){
		   if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]-32;
		   }
	   }
   } 
}
int main(){
char str[100]= "hello world";
fgets(str,sizeof(str),stdin);
inhoa(str);
printf("chuoi da duoc in hoa: %s\n",str);
return 0;
}
