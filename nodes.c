#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node *next;
} ;


struct node* head;// global variable


void insert(int x)
{
        struct node *temp = (struct node*)malloc(sizeof(struct node));

        temp->data = x;
        temp->next = NULL;
        if(head != NULL)
                temp->next = head;
        head = temp;
}


void print(void)
{
        struct node *temp;
        temp = head;
        printf("List is: ");
        while (temp != NULL)
        {
                printf("%d ",temp->data);
                temp = temp->next;
        }

        printf("\n");
}

int main(void)
{

        int i,x,n;
        head = NULL; // empty list.

        printf("How many numbers?\n");
        scanf("%d",&n);

        for(i = 0; i< n; i++)
        {
                printf("Enter value:\n");
                scanf("%d",&x);
                insert(x);
                print();
        }



        return (0);
}

