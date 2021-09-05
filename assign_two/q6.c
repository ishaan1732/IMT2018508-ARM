#include<stdio.h>
#define MAX 5

int front = -1;
int back = -1;

int arr[MAX];

int isFull(){
	if(front==back+1 || back-front==MAX-1)
		return 1;
	return 0;
}
int isEmpty(){
	if(back<0)
		return 1;
	return 0;
}

void add_to_queue(int value){
	if(isFull()){
		printf("Cannot enqueue, it is full\n");
		return;
	}
	else if(isEmpty()){
		front++;
		back++;
		arr[back] = value;
		printf("%d added to queue\n",value );
		return;
	}
	else if(back == MAX-1){
		back = 0;
		arr[back] = value;
		printf("%d added to queue\n",value );
	}
	else{
		arr[++back] = value;
		printf("%d added to queue\n",value );
	}

}

int remove_from_queue(){
	if(isEmpty()){
		printf("Queue is empty!!!\n");
		return -1;
	}
	else if(front==back){
		int data = arr[front];
		front = -1;
		back = -1;
		return data;
	}
	else if(front==MAX-1){
		int data = arr[front];
		front = 0;
		return data;
	}
	else{
		return arr[front++];
	}
}

void print(){
	if(isEmpty()){
		printf("Queue empty!!!\n");
		return;
	}
	printf("Queue is : ");
	if(front<=back){
		for(int i=front;i<=back;i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else{
		for(int i=front;i<MAX;i++)
			printf("%d ", arr[i]);
		for(int i=0;i<=back;i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
}

int main(){
	remove_from_queue();
	add_to_queue(11);
	add_to_queue(21);
	add_to_queue(31);
	add_to_queue(41);
	add_to_queue(51);
	add_to_queue(61);
	printf("front %d back %d\n",front,back);

	print();

	printf("%d removed from stack\n",remove_from_queue());
	printf("%d removed from stack\n",remove_from_queue());

	add_to_queue(61);
	add_to_queue(71);

	add_to_queue(81);
	printf("front %d back %d\n",front,back);

	print();

	printf("%d removed from stack\n",remove_from_queue());
	printf("%d removed from stack\n",remove_from_queue());
	printf("%d removed from stack\n",remove_from_queue());
	printf("%d removed from stack\n",remove_from_queue());
	printf("%d removed from stack\n",remove_from_queue());
	printf("front %d back %d\n",front,back);
	

	print();
}