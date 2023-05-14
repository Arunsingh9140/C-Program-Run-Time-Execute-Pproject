//Program to display the name of item when price of item is enterd at run time

#include<stdio.h>
int main(){
    float price;
    
    //Note:-Items availabe are:
    //(1)Guitar at price $1000.60,(2) Violin at price $500.25,(3)Flute at price $200
    
    printf("Items availabe in price => $1000.60,$500.25,$200");
    printf("\n select the price");
    scanf("%f",&price);
    
    if(price == 1000.60)
    printf("\n Giutar");
   
    else
    if(price == 500.25)
    printf("\nViolin");
   
    else
    if(price == 200)
    printf("\n Flute");
   
    else
    printf("\n Item not avilable with this price");
    return 0;
    
}
