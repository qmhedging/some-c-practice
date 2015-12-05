#include <stdio.h>
int fab(int k);
int main()

{
    int n;
    scanf("%d",&n);

    printf("%d",fab(n));



    return 0;}

  int fab(int k)

  {


      if (k>2) {return fab(k-1)+fab(k-2);}

      else
       {return 1;}


    }
