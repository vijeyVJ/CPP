#include<iostream.h>
#include<conio.h>
class Node1
{
public:
char var1;
Node1 *next1;
Node1(char v,Node1 *next1=NULL):var1(v),next1(next1){}
};
Node1 *make_list(char array1[],int size1)
{
if(size1 ==0)
return NULL;
else {
Node1 *head = new Node1('o');
Node1 *temp = head;
for(int i=0;i<size1;++i) {
temp->next1 = new Node1(array1[i]);
temp=temp->next1;
}
temp=head;
head = head->next1;
delete temp;
return head;
}
}
void print_list(Node1 *head)
{
while(head){
cout<<head->var1<<"--";
head = head->next1;
}
cout<<"END"<<endl;
}
void insertAfter(Node1** temp,Node1 *n)
{
n->next1 = (*temp)->next1;
(*temp)->next1 = n;
}
int isVowel(char v)
{
switch(v)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
return 1;
default:
return 0;
}
}
Node1 *groupByVowels(Node1 *head)
{
Node1 *vowel=NULL,*consonant=NULL;
vowel = new Node1('L');
consonant = new Node1('C');
Node1 *tv = vowel,*tc=consonant;
for(Node1 *temp=head;temp;)
{
Node1 *tt = temp->next1;
if(isVowel(temp->var1)){
insertAfter(&tv,temp);
tv = tv->next1;
}
else {
insertAfter(&tc,temp);
tc=tc->next1;
}
temp = tt;
}
tv->next1 = consonant->next1;
tv = vowel;
vowel=vowel->next1;
delete tv;
return vowel;
}
void main()
{
clrscr();
char array1[] = {'A','M','A','Z','O','N'};
Node1 *head = make_list(array1,sizeof(array1)/sizeof(array1[0]));
print_list(head);
head = groupByVowels(head);
print_list(head);
getch();
}
