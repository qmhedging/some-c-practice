//dynamicchaintable

#include<stdio.h>

#include<stdlib.h>

struct slist

    {
        int data;

        struct slist * next;
    };

typedef struct slist SLIST;

SLIST *creat_slist1()
{
    int c;

    SLIST * h,* s,* r;

    h=(SLIST *)malloc(sizeof(SLIST));//generate the chain head

    r=h;// the tail variable also points to head at first

    scanf("%d",&c);// get the list data

    while (c!=-1)
         {
           s=(SLIST *) malloc(sizeof(SLIST));//generate a new node
           s->data = c;

           r->next =s;

           r=s;

           scanf("%d",&c);


         }
      r->next ='\0';//set tail indicator to the end of chain

      return h;


}


main()

{
    SLIST * head;

    head = creat_slist();
}
