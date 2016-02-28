#include <stdio.h>
#include <stdlib.h>
// linked list implementation in C language by Mouzakitis Nikolaos.February 2016.

struct kombos {
        int data;
        struct kombos *link;
} ;

void create(struct kombos *p)
{
        int data;

        if ( p->link == NULL)
        {
                struct kombos *new;
                new = malloc(sizeof(struct kombos));
                printf("Enter first integer to insert to the list: ");
                scanf("%d",&data);
                printf("\n");
// DEBUG        printf("[debug]Data to insert: %d\n",data);

                new->data = data;
                p->link = new;
                new->link = NULL;
        }
        else
        {
                struct kombos *new,*seeker;

                new = malloc(sizeof(struct kombos));
                seeker = malloc(sizeof(struct kombos));
                seeker = p;

                printf("Enter integer to insert to the list: ");
                scanf("%d",&data);
                printf("\n");
                new->data = data;
//DEBUG         printf("[debug]line2 %d\n",seeker->link->data);


                while(seeker->link != NULL)
                {
                        seeker = seeker->link;
                }

                seeker->link = new;
                new->link = NULL;

        }

        printf("Operation complete.\n");
}

void print_nodes(struct kombos *p)
{

        if(p->link == NULL)
                printf("List is empty.\n");


        struct kombos *seeker;
        seeker  = malloc(sizeof(struct kombos));

        seeker = p;
        printf("Linked list: ");

        seeker = seeker->link;

        while(seeker->link != NULL)
                {
                        printf("%3d ",seeker->data);
                        seeker = seeker->link;
                }
        printf("%3d \n",seeker->data);
        printf("\n");


}

int main(void)
{
        struct kombos arxh;
        struct kombos *p;
        int ch;
        p=malloc(sizeof(struct kombos));
        p = &arxh;

        //arxh.data =0;
        arxh.link = NULL;


        while(1)
        {

                printf("1.create a new node.\n2.exit\n3.print existing nodes data.\n");
                scanf("%d",&ch);
                switch(ch) {
                        case 1 :
                                create(p);
                                break;
                        case 2:
                                exit(0);
                        case 3:
                                print_nodes(p);
                                break;
                        default :
                                break;
                }
        }

        return 0;
}
