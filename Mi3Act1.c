#include <stdio.h>
void main()
{ int temp;
printf("Input temperature:");
scanf("%d",&temp);
if (temp<0)
printf("Freezing weather.\n");
else if (temp<10)
printf("Very cold weather.\n");
else if (temp<20)
printf("Cold weather.\n");
else if(temp<30)
printf("Normal in Temperature.\n");
else if(temp<40)
printf("Its Hot.\n");
else if(temp>=40)
printf("Its Very Hot.\n");
}
