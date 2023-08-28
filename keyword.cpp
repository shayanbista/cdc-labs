//kwyowrd
#include<stdio.h>
#include<string.h>

const char *keywords[]={ "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "return", "sizeof", "struct", "switch", "typedef", "void", "while"};
    
	
	bool iskeyword(const char*str){
	int numkey=sizeof(keywords)/sizeof(keywords[0]);
	for(int i=0;i<numkey;i++){
		if(strcmp(str,keywords[i])==0){
			return true;
		}
	}
	return false;
}
int main(){
	int flag;
	const char *keywords[]={"int","char","struct","for","while"};
	char input[10];
	printf("enter the character");
	scanf("%s",input);
    if(iskeyword(input)){
    	printf("it is a keyword");
	}
	else{
		printf("it is not a keyword");
	}
	return 0;
}
