1.Create a list with 3 nodes having int data in single Linked list data : 100,200,300

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void main(){
struct node*node1=(struct node*)malloc(sizeof(struct node));
node1->data=100;
node1->next=NULL;
struct node*node2=(struct node*)malloc(sizeof(struct node));
node2->data=200;
node2->next=node1;
struct node*node3=(struct node*)malloc(sizeof(struct node));
node3->data=300;
node3->next=node2;
printf("%d %u\n",node1->data,node1->next);
printf("%d %u\n",node2->data,node2->next);
printf("%d %u\n",node3->data,node3->next);
}
