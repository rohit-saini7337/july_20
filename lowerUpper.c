#include<stdio.h>
int main(){
	
	
		char aa;
	printf("enter your choice=");
	scanf("%c",&aa);
	if( aa>='a' && aa<='z'   ){
		printf("%c lower case  alphabet",aa);
	}
	else if(aa>='0' && aa<='9')
	{
		printf("%c is digit",aa);            // complete
	}
	else{
		printf("%c is upper case alphabet");
}

}
