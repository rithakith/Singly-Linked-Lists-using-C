#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

int traverse(struct Node* head);

int main(){
    int condition = 1;
    int i=1;
    while (condition)
    {
        
        char character;
        printf("Do you want to add a node?");
        scanf(" %c",&character);
        if (character=='n'||character=='N')
        {
            condition=0;
            traverse(head);

            return 0;
        }

        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        printf("Enter node value %d: ",i);
        scanf("%d",&temp->data);
        i+=1;
        temp->next=NULL;

        if(head==NULL){
            head = temp;
            
        }
        else{
            struct Node* ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
        
    }

    
}

int traverse(struct Node* head){
    struct Node* ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 1;
}