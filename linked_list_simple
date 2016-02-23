#include <stdio.h>
struct node {
        int data;
        struct node *next;
} n1,n2,n3,n4;


void print_existing_nodes(struct node head)
{
        struct node *tmp ;

        printf("NODE DATA\n");

        while( head.next != NULL)
        {
                printf("%d\n",head.data);
                tmp = head.next ;
                head = *tmp ;
        }
        printf("%d",head.data);
}



int main(void)
{

        n1.data = 1;
        n1.next = &n2;
        n2.data = 11;
        n2.next = &n3;
        n3.data = 111;
        n3.next = &n4;
        n4.data = 1111;
        n4.next = NULL;

        print_existing_nodes(n1);

        return(0);
}
