#include<stdio.h>
int main(){
float s,l ,p,u,n;
printf("enter your unit");
scanf("%f",&u);
printf("how many amount you take of 1 unit");
scanf("%f",&p);
if(u>=1 && u<=10){
	printf("unit=%f\n",u);
	n=p*u;
	printf("amount=%f\n",n );
	l=n*10/100;
	s=n-l;
	printf("discount 10%\n");
	printf("total payment=%f",s);			
}		

else if(u>=11 && u<=15){
	
		printf("unit=%f\n",u);
	n=p*u;
	printf("amount=%f\n",n );
	l=n*15/100;
	s=n-l;
	printf("discount 15%\n");
	printf("total payment=%f",s);
	
	
	
	
}

else if(u>=21&&u<=40){
	
		printf("unit=%f\n",u);
	n=p*u;
	printf("amount=%f\n",n );
	l=n*30/100;
	s=n-l;
	printf("discount 30%\n");
	printf("total payment=%f",s);
}
else if(u>=31 && u<=50)
{
		printf("unit=%f\n",u);
	n=p*u;
	printf("amount=%f\n",n );
	l=n*150/100;
	s=n-l;
	printf("discount 150%\n");
	printf("total payment=%f",s);
}

	else{
		printf("sorry");	
	}
	
}
