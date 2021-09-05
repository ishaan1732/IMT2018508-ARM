#include<stdio.h>
#define MAX 5

int top = 0;
int arr[MAX];

int isEmpty(){
	if(top<1)
		return 1;
	return 0;
}
int isFull(){
	if(top>MAX-1)
		return 1;
	return 0;
}
void push(int value){
	if(!isFull()){
		arr[top++] = value;
		printf("Pushed %d to the stack\n",value );
	}
	else
		printf("Stack Full, cannot push\n");
}

int pop(){
	if(!isEmpty())
		return arr[--top];
	else{
		printf("Stack empty, cannot pop\n");
		return -1;
	}
}

void print(){
	if(isEmpty()){
		printf("Stack empty!!!\n");
		return;
	}
	printf("Stack is : ");
	for(int i=0;i<top;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(){
	pop();
	
	push(11);
	push(21);
	push(31);
	push(41);
	push(51);
	push(61);
	
	printf("top value %d\n",top);
	print();
	
	printf("%d poped from the stack\n",pop());
	printf("%d poped from the stack\n",pop());
	
	print();

	printf("%d poped from the stack\n",pop());
	printf("%d poped from the stack\n",pop());
	printf("%d poped from the stack\n",pop());
	
	print();
}