#include <stdio.h>
#include <stdlib.h>

int main(){
int inventory[6][4] = {{5,4500,0},{40,1800,0},{60,300,0},{10,4000,0},{30,500,0},{50,1000,0}};
int commodity, sale, i, moneymade = 0;
char choice, choice1;

printf("Items Quantity\tUnit Price\tNumberof sales\n");
for ( i = 0; i < 6; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d\t\t", inventory[i][j]);
    }
        if (inventory[i][0]<4)
    {
        printf("\tThe stock is running low");
    }
    printf("\n");
}

int expectincome = 0;
for ( i = 0; i < 6; i++)
{
    for (int j = 0; j < 4; j++)
    {
        inventory[i][3] = inventory[i][0] * inventory[i][1];
    }
    expectincome = expectincome + inventory[i][3];
}
printf("The expected income from the current stock is %d\n", expectincome);


do
{
  
printf("List of Commodities \n");
printf("1. Bread(%d)\n", inventory[0][0]);
printf("2. Milk(%d)\n", inventory[1][0]);
printf("3. eggs(%d)\n", inventory[2][0]);
printf("4. Bar of soap(%d)\n", inventory[3][0]);
printf("5. Milk biscuits(%d)\n", inventory[4][0]);
printf("6. Fanta mini(%d)\n\n", inventory[5][0]);

printf("Choose the commodity you want to sell: ");
scanf("%d", &commodity);

switch (commodity)
{
case 1:
printf("\nHow many items are you selling?: ");
scanf("%d", &sale);
printf("You now have %d loaves of bread left.\n\n", inventory[0][0]-sale);
        inventory[0][0]= inventory[0][0] - sale;
        inventory[0][2] = sale * inventory[0][1];
    break;

case 2:
printf("\nHow many items are you selling?: ");
scanf("%d", &sale);
printf("You now have %d milk left.\n\n", inventory[1][0]-sale);
        inventory[1][0]= inventory[1][0] - sale;
        inventory[1][2] = sale * inventory[1][1];
    break;

case 3:
printf("\nHow many items are you selling?: ");
scanf("%d", &sale);
printf("You now have %d trays of eggs left.\n\n", inventory[2][0]-sale);
    inventory[2][0]= inventory[2][0] - sale;
    inventory[2][2] = sale * inventory[2][1];
 break;

case 4:
printf("\nHow many items are you selling?: ");
scanf("%d", &sale);
printf("You now have %d bars of soap left.\n\n", inventory[3][0]-sale);
    inventory[3][0]= inventory[3][0] - sale;
    inventory[3][2] = sale * inventory[3][1];
    break;

case 5:
printf("\nHow many items are you selling?: ");
scanf("%d", &sale);
printf("You now have %d milk biscuits left.\n\n", inventory[4][0]-sale);
    inventory[4][0]= inventory[4][0] - sale;
    inventory[4][2] = sale * inventory[4][1];
 break;

case 6:
printf("\nHow many items are you selling?: ");
scanf("%d", &sale);
printf("You now have %d fanta mini left.\n\n", inventory[5][0]-sale);
    inventory[5][0]= inventory[5][0] - sale;
    inventory[5][2] = sale * inventory[5][1];
break;

default:
    break;
}

printf("Items Quantity\tUnit Price\tNumberof sales\n"); 
for ( i = 0; i < 6; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d\t\t", inventory[i][j]);
    }
        if (inventory[i][0]<4)
    {
        printf("\tThe stock is running low");
    }
    printf("\n");
}
printf("You have sold %d items\n", sale);

printf("Do you want to make another sale, enter \"y\" if yes and \"n\" if no: ");
scanf("%s", &choice1);  
} while (choice1 != 'n');

printf("Items Quantity\tUnit Price\tNumber of sales\n"); 
for ( i = 0; i < 6; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d\t\t", inventory[i][j]);
    }
        if (inventory[i][0]<4)
    {
        printf("\t\tThe stock is running low");
    }
    moneymade = moneymade + inventory[i][2];
    printf("\n");
}
printf("She has made %d shillings", moneymade);

    return 0;
}