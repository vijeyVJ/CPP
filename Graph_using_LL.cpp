#include<iostream.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
};
struct vertexlist
{
struct node *vlisthead;
};
struct Graph
{
int v;
struct vertexlist *vl;
};
struct Graph* CreateGraph(int n)
{
int i;
struct Graph *vlist=new Graph;
vlist->v=n;
vlist->vl=new vertexlist[n+1];
for(i=0;i<n+1;i++)
{
vlist->vl[i].vlisthead=NULL;
}
return vlist;
}
struct node* NewNode(int value)
{
struct node *newnode=new node;
newnode->data=value;
newnode->link=NULL;
return newnode;
}
void InsertNode(Graph *G,int v1, int v2)
{
node *newnode1=NewNode(v1);
node *newnode2=NewNode(v2);
//node *temp=new node;
if(G->vl[v2].vlisthead==NULL)
{
G->vl[v2].vlisthead=newnode1;
}
else
{
newnode1->link=G->vl[v2].vlisthead;
G->vl[v2].vlisthead=newnode1;
}
if(G->vl[v1].vlisthead==NULL)
{
G->vl[v1].vlisthead=newnode2;
}
else
{
newnode2->link=G->vl[v1].vlisthead;
G->vl[v1].vlisthead=newnode2;
}
}
void main()
{
clrscr();
cout<<"GRAPH REPRESENTATION USING LINKED LIST"<<endl;
int i,e,v,a=2;
cout<<"\nEnter the number of vertexes of the Graph:";
cin>>v;
struct Graph *G=CreateGraph(v);
cout<<"Enter the number of edges of the Graph:";
cin>>e;
int *edge=new int[e*a];
for(i=0;i<e;i++)
{
cout<<"\nEnter the vertex pair for Edge:"<<i+1;
cout<<"\nV(1):";
/*cin>>edge[i][0];*/
cin>>*(edge+i*e+0);
cout<<"V(2):";
/*cin>>edge[i][1];*/
cin>>*(edge+i*e+1);
/*InsertNode(G, edge[i][0],edge[i][1]);*/
InsertNode(G,*(edge+i*e+0) ,*(edge+i*e+1));
}
cout<<"\nThe incidence list representation for the given graph";
for(i=0;i<v;i++)
{
cout<<"\n \tV("<<i+1<<")-> {  ";
while(G->vl[i+1].vlisthead!=NULL)
{
cout<<G->vl[i+1].vlisthead->data<<" ";
G->vl[i+1].vlisthead=G->vl[i+1].vlisthead->link;
}
cout<<"}";
}
getch();
}
