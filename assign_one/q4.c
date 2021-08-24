#include<stdio.h>
#define size 20

void swap(int* a,int* b){
	int c=*b;
	*b=*a;
	*a=c;
}

void print(int a[]){
	for(int i=0;i<size;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main(){
	int a[size],count = 0;
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);

	printf("Before sorting \n");

	print(a);
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(a[j]<a[i])
				swap(&a[i],&a[j]);
		}
	}

	printf("After sorting \n");
	print(a);
	return 0;
}
