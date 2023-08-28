// DFA for abba
#include<stdio.h>
#include<string.h>
int main(){
	char ch[30];
	int state=0;
	printf("enter the string:\n");
	scanf("%s",ch);
	 for(int i=0;ch[i]!='\0';i++){
	     switch(state){
	     	case 0:{
	     		if(ch[i]=='a'){
	     			state=1;
				 }
				 else{
				 	state=6;
				 }
				break;
			  case 1:{
			  	if(ch[i]=='b'){
			  		state=2;
			  		}
				  else{
				  	state=5;
				  }
				  
				break;
			}
			    case 2:{
			    	if(ch[i]=='b'){
			    		state=3;
					}
					else{
					state=6;
					}
					break;}
				case 3:{
					if(ch[i]=='a'){
						state =4;
					}
					else{
						state=5;
					}
					break;
				}
				case 4:{
					state=5;
					break;
				}
				  case 5:{
					break;
				  }
			
				  }
					
			
			  }
			  
			 }
			 	if(state==4){
					printf("accepted]");
				}	
				else if(state==5){
					printf("not accepted");
				}
			}
				
	


	


