#include <stdio.h>
int main()
{
  int num,original,temp,digits,count=0,sum=0,i;
  printf("Enter a number: ");
  scanf("%d",&num);
  original = num;
  temp = num;

  while (temp>0)
    {
      count++;
      temp = temp / 10;
    }
  temp = num;

  while (temp>0)
    {
      digits = temp % 10;
      int power = 1;

      for (i=1; i<= count; i++)
        {
          power = power * digits;
        }
      sum = sum + power;
      temp = temp/10;
    }
  if (sum == original)
  {
    printf("%d is an armstrong number.",original);
  }
  else 
  {
    printf("%d is not an armstrong number.", original);
  }

  return 0;
}
