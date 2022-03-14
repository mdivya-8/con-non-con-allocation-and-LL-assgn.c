//insertion at front middle rear//
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};  
struct node* insertfront(struct node *front, int value){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=front;
    front=temp;
    return front;
} 
struct node* insertrear(struct node *front, int value){
    struct node*t1, *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    if(front==NULL){
        temp->next=NULL;
        front=temp;
    }
    else{
        t1=front;
        while(t1->next!=NULL){
            t1=t1->next;
        }
        temp->next=t1->next;
        t1->next=temp;
    }
    return front;
}
struct node* insertmiddle(struct node *front, int value){
    struct node *t1, *t2, *temp;
    if(front && front->next){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        t1=front;
        t2=front->next;
        while(t2 && t2->next && t2->next->next){
            t2=t2->next->next;
            t1=t1->next;
        }
        temp->next=t1->next;
        t1->next=temp;
    }
    return front;
}
struct node* display(struct node *front){
  struct node *t1=front;
  while(t1){
      printf("%d ",t1->data);
      t1=t1->next;
  }
  return front;
}
int main() {
    struct node *first=NULL;
    int val, choice;
    for(;;){
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            	case 1:
            printf("Enter the Value\n");
            scanf("%d",&val);
            first=insertfront(first,val);
            choice =0;
            break;
            case 2:
            first=display(first);
            break; 
			case 3:
			printf("Enter the Value\n");
            scanf("%d",&val);
            first=insertrear(first,val);
            choice =0;
            break; 
            case 4:
            printf("Enter the Value\n");
            scanf("%d",&val);
            first=insertmiddle(first,val);
            choice =0;
            break; 
			        
        }
    }
    
    return 0;
}
