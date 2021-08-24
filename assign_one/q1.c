#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c)
			printf("largest no. is: %d\n",a);
		else
			printf("largest no. is: %d\n",c);
	}
	else{
		if(b>c)
			printf("largest no. is: %d\n",b);
		else
			printf("largest no. is: %d\n",c);
	}
	return 0;
}
