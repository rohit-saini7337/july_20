#include<stdio.h>
int main(){
	float a,b,c,d,e;
	printf("enter marks");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	
	
	if(a>=40 && b>=40 && c>=40 && d>=40 &&e>=40 ){
	float per ,total;
	total=a+b+c+d+e;
	per=total/5;
	printf("per=%f\n",per);
	
	
	
	
	
		if(per>=80){
	printf("a grade");                                             // complete
			
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
	else{
		printf("sorry u fail");
	}
	
	
	
	
	
	
	
	
	
	
	

}
