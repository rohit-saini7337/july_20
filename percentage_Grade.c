#include<stdio.h>
int main(){
	float a,b,c,d,e;
	printf("enter mark");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	float per, total;
	total=a+b+c+d+e;
	per=total/5;
	printf(" per=%f\n",per);
	if(per>=80){
	printf("a grade");
			
	}
	else if(per>50){
		printf("c grade");
			
	}
	else if(per>=25){
		printf("e grade");
			
	}
	else if(per>45){
		printf("d grade");
			
	}
	else if(per>60){printf("b grade");

	}
	else { printf("fail");
	}
}

