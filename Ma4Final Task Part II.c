#include<stdio.h>
int
main ()
{
  int num;

  printf ("Enter any positive integers: ");
  scanf ("%d", &num);


  while (num > 1)
    {
      if (num % 2 == 0)
	{
	  num = num / 2;
	  printf ("Current Given Value is %d\n", num);
	}
      else
	{
	  num = num * 3 + 1;
	  printf ("Current Given Value is %d\n", num);
	}
    }
  return 0;
}
