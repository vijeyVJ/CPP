#include<iostream.h>
#include<conio.h>
//create an array called stack for push and pop operations
int stack[100];
int top,x;
void push (int x)
{
	top = top+1;
	stack[top]=x;
}
void pop(){
	top--;
}
void Leader(int arr[],int size){  //function to find the leaders in the array
	push(arr[size-1]);  //push the value of last element into stack top

	for(int i=size-2; i>=0; i--)
	{
		if(arr[i]>stack[top]){
		push(arr[i]); //push the new value if the value of array is greater than value on stack top
		}
	}
	while(stack[top]!=0){
	cout<<" "<<stack[top];
	pop();
	}
}
int main()
{
	clrscr();
	int arr[]={16,17,4,3,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	Leader(arr,n);
	getch();
	return 0;
}
