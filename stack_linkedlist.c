#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node *node;
node top = NULL;
node getnode()
{
    node temp = NULL;
    temp = (node)malloc(sizeof(node));
    temp->next=NULL;
    return temp;
}
node push(node top,int item)
{
    node temp;
    temp=NULL;
    temp = getnode();
    temp->data = item;
    if(top==NULL) {
        top = temp;
    }
    else {
        temp->next=top;
        top = temp;
    }
return top;
}

node pop(node top)
{
    node temp=top;
    int item;
    if(top==NULL) {
        printf("\n The Stack is Empty");
    }
else {
    top = top->next;
    item = temp->data;
    //temp->next=NULL;
    printf("\n The deleted element is %d ",item);
    free(temp);
}
return  top;
}

void disp(node top)
{
    node temp;
    if(top==NULL) {
        printf("The stack is Empty ");
    }
    else {
        temp=top;
        while(temp!=NULL) {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void main()
{
    int ch,item;
    while(1) {
        printf("\nEnter choice: 1. push  2. pop   3. display 4. Exit: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the item to insert\n");
                    scanf("%d",&item);
                    top = push(top,item);
                    break;
            case 2: top = pop(top);
                    break;
            case 3: disp(top);
                    break;
            case 4: exit(0);
                    break;
        }
    }
}