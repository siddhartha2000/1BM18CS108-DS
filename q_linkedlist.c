#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};
typedef struct Node* node;
node rear = NULL;
node front = NULL;

node getnode()
{
    node temp = NULL;
    temp = (node)malloc(sizeof(node));
    temp->next = NULL;
    return temp;
}

void insert(int value)
{
   node newNode;
   newNode = getnode();
   newNode->data = value;
   if(front == NULL)
   {
      front  = newNode;
      rear = newNode;
   }
   else{
      rear -> next = newNode;
      rear = newNode;
   }
}
void delete()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      node temp = front;
      front = front -> next;
      printf("\nThe Deleted element is: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
    node temp = front;
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      while(temp->next!= NULL){
	 printf("%d->",temp->data);
	 temp = temp -> next;
      }
      printf("%d",temp->data);
   }
}

void main()
{
   int choice, value;
   while(1){
            printf("Enter choice: 1. Insert 2. Delete 3. Display 4. Exit : ");
            scanf("%d",&choice);
            switch(choice){
            case 1: printf("Enter the value to be insert: ");
                    scanf("%d", &value);
                    insert(value);
                    break;
            case 2: delete(); 
                    break;
            case 3: display(); 
                    break;
            case 4: exit(0);
      }
   }
}