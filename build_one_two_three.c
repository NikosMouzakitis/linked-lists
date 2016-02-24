#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node* next;
} ;

struct node * buildOneTwoThree()
{
        struct node * head;
        struct node * second;
        struct node * third;

        head = (struct node *)malloc(sizeof(struct node));
        second = (struct node *)malloc(sizeof(struct node));
        third = (struct node *)malloc(sizeof(struct node));


        head->data = 1;
        head->next = second;

        second->data = 2;
        second->next = third;

        third->data = 3;
        third->next = NULL;
        printf("List is of lenght : %d \n",Length(head));

        return head;
}


int main(void)
{
        struct node *ptr;
        ptr = buildOneTwoThree();


        printf("Printing elements: ");
        while(ptr->next != NULL)
        {
                printf("%d ",ptr->data);
                ptr = ptr->next;
        }

        printf("%d ",ptr->data);

        return 0;
}

int Length(struct node* head)
{
        struct node* current = head;
        int count = 0;
        while (current != NULL) {
                count++;
                current = current->next;
                }
        return count;
}


