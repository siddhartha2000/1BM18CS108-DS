#include <stdio.h>
#include <stdlib.h>

struct node{
	int val;
	struct node *next;
	};
	
typedef struct node* node;

node get_node();
node ins_pos(node first, int val, int pos);
node del_first(node first);
node del_end(node first);
node ins_front(node first, int val);
node del_pos(node first, int pos);
void display(node first);

node first = NULL;

int main(){
	int i, x, val, pos;
	
	while(x != 7){
		printf("\n1: Enter value from front\n");
        printf("2: Enter value at a position\n");
		printf("3: Delete from front\n");
		printf("4: Delete at end\n");
		printf("5: Delete at given position\n");
        printf("6: Display\n");
        printf("7: Exit\n");

		scanf("%d", &x);
			switch(x){
			case 1:
				printf("Enter value from front: ");
				scanf("%d", &val);
				first = ins_front(first, val);
				break;
            case 2:
				printf("Enter value at position: ");
				scanf("%d", &val);
                printf("Enter position:  ");
                scanf("%d", &pos);
				first = ins_pos(first, val, pos);
				break;
				
			case 3:
				printf("Delete from front ");
				first = del_first(first);
				break;
				
			case 4:
				printf("Delete from end ");
				first = del_end(first);
				break;
            case 5:
                printf("Delete at position  ");
                printf("Enter position:  ");
                scanf("%d", &pos);
				first = del_pos(first, pos);
				break;
            case 6:
				display(first);
				break;
			}
		}
	}
		
node get_node(){
	node temp;
	temp = (node)malloc(sizeof(struct node));
	temp->next = NULL;
	return temp;
	}
	
	
node ins_front(node first, int val){
	node temp;
	if(first == NULL){
		first = get_node();
		first-> val = val;
		}
	else{
		temp = get_node();
		temp->val = val;
		temp->next = first;
		first = temp;
		
		}
	return first;	
	}


node ins_pos(node first, int val, int pos){
	int count=1;
    node temp,curr,prev;
	temp = get_node();
    temp-> val=val;
    temp->next=NULL;
    if(first == NULL && pos == 1)
        return temp;
    if(first == NULL && pos!=1)
     {   printf("\nINVALID POSITION\n");
        return first;
     }
    else{
        curr = first;
    prev = NULL;
    while( curr->next!=NULL && count!=pos)
    {
        prev=curr;
        curr=curr->next;
        count++;
    }
    if(count == pos)
    {
        prev->next=temp;
        temp->next=curr;
        return first;
    }
    else{
        printf("NOT A VALID POSITION\n");
    }
    }
}
node del_first(node first)
{
    node temp;
    if(first==NULL)
     {   printf("Listis empty can't delete\n");
        return first;
     }
    else{
    temp=first;
    printf("Item deleted is %d",temp->val);
    temp=temp->next;
    free(first);
    first=temp;
    return first;
    }
}


node del_end(node first)
{
    node curr,prev;
    if(first == NULL)
    {
        printf("List is empty can't delete\n");
        return first;
    }
    else{
        curr = first;
        prev = NULL;
        while(curr->next!=NULL)
        {
            prev = curr;
            curr=curr->next;
        }   
        prev->next=NULL;
        free(curr);
        return first;
    }
}

node del_pos(node first, int pos)
{
    int count=1;
    node curr,prev;
    if(first == NULL)
    {
        printf("List is empty\n");
        return first;
    }
    else{
        curr=first;
        prev=NULL;
        while(curr->next!=NULL && count!=pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(count == pos)
        {
            prev->next=curr->next;
            free(curr);
            return first;
        }
    }
}
void display(node first){
	node curr;
	curr = first;
	while(curr != NULL){
		printf("%d ", curr->val);
		curr = curr->next;
		}
	}
