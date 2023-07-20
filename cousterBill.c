#include<stdio.h>
int main(){
char s[10];
float d,p,n,ss;
printf("enter your name\n");
scanf("%s",&s);

	printf("enter your number\n");
scanf("%f",&n);
printf("enter your amount");
scanf("%f",&ss);
if(ss>=1000&&ss<=2000){
	d=ss*10/100;
	p=ss-d;
	printf("couster name=%s\n",s);
	printf("couster number=%f\n",n);
	printf("payment=%f\n",ss);
	printf(" discount 10%\n");
	printf("total amount=%f\n",p);
}

 else if(ss>=100&&ss<1000){
	d=ss*5/100;
	p=ss-d;
	printf("couster name=%s\n",s);
	printf("couster number=%f\n",n);
	printf("payment=%f\n",ss);
	printf(" discount 5%\n");
	printf("total amount=%f\n",p);
}
 else if(ss>2000&&ss<=3000){
	d=ss*15/100;
	p=ss-d;
	printf("couster name=%s\n",s);
	printf("couster number=%f\n",n);
	printf("payment=%f\n",ss);
	printf(" discount 15%\n");
	printf("total amount=%f\n",p);

}
else{
	d=ss*30/100;
	p=ss-d;
	printf("couster name=%s\n",s);
	printf("couster number=%f\n",n);
	printf("payment=%f\n",ss);
	printf("discount 30% \n");
	printf("total amount=%f\n",p);
	}
	
}
