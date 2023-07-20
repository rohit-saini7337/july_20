#include<stdio.h>
int main(){
	
	char aa;
	printf("enter your choice=");
	scanf("%c",&aa);
	if( (aa>='a' && aa<='z')|| (aa>='A' && aa<='Z')   ){
		printf("%c is a alphabet",aa);
	}
	else if(aa>='0' && aa<='9')
	{
		printf("%c is digit",aa);
	}
	else{
		printf("sorry");
	}
}
