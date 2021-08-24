#include<stdio.h>
#define size 20

int main(){
	int a[size],count = 0;
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<size;i++){
		if(a[i]%2==0)
			count++;
	}
	printf("Count of even numbers in the array is: %d\n",count);
	return 0;
}
