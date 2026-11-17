#include <stdio.h>
int main()
{
  int n,i,count=0;
  printf("Enter the value of n: ");
  scanf("%d",&n);

  printf("Numbers are: ");

  for(i=1; i<=n ; i++)
    {
      if (i%3==0 && i%5!=0)
      {
        printf("%d",i);
        count++;
      }
    }
    printf("\n Total count = %d",count);
    return 0;
}
