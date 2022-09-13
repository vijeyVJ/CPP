#include<iostream.h>
#include<conio.h>
struct Node{
int data;
Node *link;
};
Node *top=NULL;

void push(int val){
	Node *ptr = new Node();
	ptr->data = val;
	ptr->link = top;
	top = ptr;
}

void pop(){
	if(top!=NULL)
		cout<<"the popped element is :"<<top->data<<endl;
	if(top==NULL)
		cout<<"Stack is Empty"<<endl;
	else{
		Node *ptr = top;
		top = top->link;
		delete(ptr);
	}
}
void peek(){
	if(top==NULL)
		cout<<"stack is empty"<<endl;
	else{
		cout<<"\n Value in the stack is :";
		Node *temp =top;
		while(temp!=NULL)
		{
		cout<<temp->data<<"->";
		temp = temp->link;
		}
		cout<<"\n";
	}
}
void main() {
   clrscr();
   int option, val;
   cout<<"\n STACK Linked List ADT OPERATIONS \n";
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
