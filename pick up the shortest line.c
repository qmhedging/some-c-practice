//pick up the shortest line
#include <stdio.h>
#include <string.h>

#define N 20

#define M 81

int getstr(char p[][M])

{
    char t[M],n=0;

    printf("Enter string,an empty string to end the input\n");

    gets(t);

    while (strcmp(t," "))// if input t is not empty then copy t into p

    {
        strcpy(p[n],t);

        n++;

        gets(t);
    }

    //puts(t);

    return n;
}

char * findmin(char (* a)[M],int n)

{
    char * q;

    int i;

    q=a[0];//presume first string shortest

    for (i=1;i<n;i++)

        if (strcmp(a[i],q)<0)//if string a[i] shorter than q,then q points to a[i]

        q=a[i];

    return q;
}

main()

{
    char s[N][M],* sp;int n;

    n = getstr(s);

    sp =findmin(s,n);

    printf("the mini string is :\n");

    puts(sp);
}
