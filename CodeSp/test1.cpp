#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
 };
 int main(){
     struct node *head = NULL;
     struct node *one = NULL;
     struct node *two = NULL;
     struct node *three = NULL;
     struct node *four = NULL;
     struct node *five = NULL;
     struct node *six = NULL;

     one = (struct node *)malloc(sizeof(struct node));
     two = (struct node *)malloc(sizeof(struct node));
     three = (struct node *)malloc(sizeof(struct node));
     four = (struct node *)malloc(sizeof(struct node));
     five = (struct node *)malloc(sizeof(struct node));
     six = (struct node *)malloc(sizeof(struct node));

     one->link = two;
     two->link = three;
     three->link = four;
     four->link = five;
     five->link = six;
     six->link = NULL;

     head = one ;
     struct node *ptr = NULL;
     ptr = head ;
     int data;
     while(ptr!= NULL){
        printf("\nEnter element: ");
        scanf("%d",&ptr->data);
        ptr = ptr->link ;
     } ptr = head ;
     printf("\nLinked list: ");
     while(ptr!= NULL){
        printf(" %d \n",ptr->data);
        ptr = ptr->link ;
     } 
     
     ptr = head ;
     struct node *first = NULL;
     struct node *last = NULL;
     struct node *ran = NULL;
     first = (struct node *)malloc(sizeof(struct node));
     last = (struct node *)malloc(sizeof(struct node));
     ran = (struct node *)malloc(sizeof(struct node));
        //printf("\nEnter an element to insert at first: ");
        //scanf("%d",&first->data);
         
        first->data = 32;
          first->link = one;
          head = first ;
          //head = first ;

        printf("\nAfter insertion at first, Linked list: ");
     while(ptr!= NULL){
        printf(" %d\n",ptr->data);
        ptr = ptr->link ;
     }
     last->data=456;
     six->link = last;
     last->link = NULL;

        printf("\nAfter insertion at last, Linked list: ");
     while(ptr!= NULL){
        printf(" %d\n",ptr->data);
        ptr = ptr->link ;
     }

 }