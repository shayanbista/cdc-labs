#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	  char a[20];
	  int flag;
	  int i=1;
	  printf("enter the string");
	  scanf("%s",a);
	  if(isalpha(a[0])||a[0]=='_'){
	  	flag=1;
	  }
	  else{
	  	printf("not a valid identifier");
	  }
	  while(a[i]!='\0'){
	  	if(!isdigit(a[i]) && !isalpha(a[i])){
	  	  flag=0;
	  	  break;
		  }
		  i++;
		  }
		   if(flag==1){
	  	printf("valid identifier");
	   }
	   else if(flag==0){
	   	printf("invalid identifier");
	   }
	 
	return 0;
	  }
	 

