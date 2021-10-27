#include <stdio.h>

int main()
{
    printf("Hi! Welcome to Happiness Cafe.\n");

    int Order, Price, Payment, Change;
    
    printf("Here is our menu!\n");
    printf("[1] Hot Chocolate (P200)\n");
    printf("[2] Cappucino (P300)\n");
    printf("[3] Iced Coffee (P250)\n");
    printf("Please place your order: ");
    scanf("%d",&Order);
    
    switch(Order)
    {
        case 1:
        Price = 200;
        printf("Hot Chocolate (P200)\n");
        printf("Please enter your payment: ");
        scanf("%d",&Payment);
        if(Payment>=200)
        {printf("Payment Accepted.\n You have successfuly purchased Hot Chocolate!\n");
        Change = Payment-Price;
        printf("Change:%d\n", Change);}
        else if(Payment<200)
        {printf("Oppss! You don't have enough funds.");}
    { 
        break;
    
        case 2:
        Price = 300;
        printf("Cappucino (P300)\n");
        printf("Please enter your payment: ");
        scanf("%d",&Payment);
        if(Payment>=300)
        {printf("Payment Accepted. You have successfuly purchased Hot Chocolate!\n");
        Change = Payment-Price;
        printf("Change:%d\n", Change);}
        if(Payment<300)
        {printf("Oppss! You don't have enough funds.");}
    } 
    { 
        break;
    
        case 3:
        Price = 250;
        printf("Iced Coffee (P250)\n");
        printf("Please enter your payment:");
        scanf("%d",&Payment);
        if(Payment>=250)
        {printf("Payment Accepted!\n You have successfuly purchased Hot Chocolate.\n");
        Change = Payment-Price;
        printf("Change:%d\n", Change);}
        if(Payment<250)
        {printf("Oppss! You don't have enough funds.");}
    } 
    {break;
    defult:
    { printf("The item that you want to purchase is not available.");}
    }
     return 0;
    }
}
        


