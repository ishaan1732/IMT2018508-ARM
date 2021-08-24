#include<stdio.h>
#define size 15

int main(){
	int a[size],max = 0;
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<size;i++){
		if(a[i]>max)
			max = a[i];
	}
	printf("largest number in the array is: %d\n",max);
	return 0;
}
