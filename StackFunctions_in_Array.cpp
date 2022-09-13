#include <iostream.h>
#include<conio.h>
int stack[100], n=100, top=-1;
void push(int val){ //function to push an element on stack top
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {  //function to remove an element from the stack top
   if(top<=-1)
   cout<<"Stack is empty"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void peek() { //function to view all the elements in the stack
   if(top>=0) {
	cout<<"Elements in stack are:"<<endl;
	for(int i=top; i>=0; i--)
		cout<<stack[i]<<" "<<endl;//printing all the values inside the stack
   }
   else
   cout<<"Stack is empty"<<endl;
}
void main() {
   clrscr();
   int option, val;
   cout<<"\n STACK ADT OPERATIONS \n";
   cout<<"1) Push an element into stack"<<endl;
   cout<<"2) Pop the last element stack"<<endl;
   cout<<"3) Display the stack"<<endl;
   cout<<"4) Exit"<<endl;
   while(option!=4) {
      cout<<"Enter choice: "<<endl;
      cin>>option;
      switch(option) {
	 case 1: {
	    cout<<"Enter value to be pushed:"<<endl;
	    cin>>val;
	    push(val);
	    break;
	 }
	 case 2: {
	    pop();
	    break;
	 }
	 case 3: {
	    peek();
	    break;
	 }
	 case 4: {
	    cout<<"Exiting.."<<endl;
	    break;
	 }
	 default: {
	    cout<<"Invalid Choice"<<endl;
	 }
      }//switch case ends here
   }//while loop ends here
}//void main ends here
