#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    
    int status;
    
    printf("   WELCOME TO OUR STORE    \n");
    
    int product;
    bool open=true;
    int new;
    int quantity;
    // int orders=0;
    int payment;
    // int limit=0;
    struct items {
        int itemId;
        int price;
        int stock;
    };
    struct items lays;
    lays.itemId = 1;
    lays.price = 25;
    lays.stock = 20;
    struct items sprite;
    sprite.itemId = 2;
    sprite.price = 40;
    sprite.stock = 10;
    struct items maggi;
    maggi.itemId = 3;
    maggi.price = 30;
    maggi.stock = 15;
    struct items chocolate;
    chocolate.itemId = 4;
    chocolate.price = 45;
    chocolate.stock = 7;
    struct items chowmein;
    chowmein.itemId = 5;
    chowmein.price = 35;
    chowmein.stock = 10;
    struct items juice;
    juice.itemId = 6;
    juice.price = 50;
    juice.stock = 20;
    while (open){
        bool activity=true;
        int bill = 0;
        while (activity){
            printf("THE REAL TIME MENU INCLUDES:    \n");
            printf("LAYS            ITEM ID : %d,   Rs.%d,   STOCK: %d\n",lays.itemId,lays.price,lays.stock);
            printf("SPRITE          ITEM ID : %d,   Rs.%d,   STOCK: %d\n",sprite.itemId,sprite.price,sprite.stock);
            printf("MAGGI           ITEM ID : %d,   Rs.%d,   STOCK: %d\n",maggi.itemId,maggi.price,maggi.stock);
            printf("CHOCOLATE       ITEM ID : %d,   Rs.%d,   STOCK: %d\n",chocolate.itemId,chocolate.price,chocolate.stock);
            printf("CHOWMEIN        ITEM ID : %d,   Rs.%d,   STOCK: %d\n",chowmein.itemId,chowmein.price,chowmein.stock);
            printf("JUICE           ITEM ID : %d,   Rs.%d,   STOCK: %d\n",juice.itemId,juice.price,juice.stock);
            printf("what you want to have?(ITEM ID)\n");
            scanf("%d",&product);
            // printf("What quantity of item ID %d you want?\n", product);
            // scanf("%d",&quantity);
            switch (product){
                case 1:    
                    if (lays.stock>= quantity){
                        printf("What quantity of item ID %d you want?\n", product);
                        scanf("%d",&quantity);
                        bill = bill + (lays.price* quantity);
                        lays.stock=lays.stock-quantity;
                        printf("YOUR CURRENT BILL AMOUNT IS :\n    %d\n", bill);
                        break;
                    }
                    else{
                        printf("OOPS...\n We don't have the desired quantity of lays\nPlease try some lower quantity\nOr choosing another item");
                        break;
                    }

                case 2:
                    if (sprite.stock>= quantity){
                        printf("What quantity of item ID %d you want?\n", product);
                        scanf("%d",&quantity);
                        bill = bill + (sprite.price* quantity);
                        sprite.stock=sprite.stock-quantity;
                        printf("YOUR CURRENT BILL AMOUNT IS :\n    %d\n", bill);
                        break;
                    }
                    else{
                        printf("OOPS...\n We don't have the desired quantity of sprite\nPlease try some lower quantity\nOr choosing another item");
                        break;
                    }

                case 3:
                    if (maggi.stock>= quantity){
                        printf("What quantity of item ID %d you want?\n", product);
                        scanf("%d",&quantity);
                        bill = bill + (maggi.price* quantity);
                        maggi.stock=maggi.stock-quantity;
                        printf("YOUR CURRENT BILL AMOUNT IS :\n    %d\n", bill);
                        break;
                    }
                    else{
                        printf("OOPS...\n We don't have the desired quantity of maggi\nPlease try some lower quantity\nOr choosing another item");
                        break;
                    }

                case 4:
                    if (chocolate.stock>= quantity){
                        printf("What quantity of item ID %d you want?\n", product);
                        scanf("%d",&quantity);
                        bill = bill + (chocolate.price* quantity);
                        chocolate.stock=chocolate.stock-quantity;
                        printf("YOUR CURRENT BILL AMOUNT IS :\n    %d\n", bill);
                        break;
                    }
                    else{
                        printf("OOPS...\n We don't have the desired quantity of chocolate\nPlease try some lower quantity\nOr choosing another item");
                        break;
                    }

                case 5:
                    if (chowmein.stock>= quantity){
                        printf("What quantity of item ID %d you want?\n", product);
                        scanf("%d",&quantity);
                        bill = bill + (chowmein.price* quantity);
                        chowmein.stock=chowmein.stock-quantity;
                        printf("YOUR CURRENT BILL AMOUNT IS :\n    %d\n", bill);
                        break;
                    }
                    else{
                        printf("OOPS...\n We don't have the desired quantity of chowmein\nPlease try some lower quantity\nOr choosing another item");
                        break;
                    }

                case 6:
                    if (juice.stock>= quantity){
                        printf("What quantity of item ID %d you want?\n", product);
                        scanf("%d",&quantity);
                        bill = bill + (juice.price* quantity);
                        juice.stock=juice.stock-quantity;
                        printf("YOUR CURRENT BILL AMOUNT IS :\n    %d\n", bill);
                        break;
                    }
                    else{
                        printf("OOPS...\n We don't have the desired quantity of juice\nPlease try some lower quantity\nOr choosing another item");
                        break;
                    }

                default:
                    printf("ERROR!!!\nPLEASE REFER TO MENU\n");
            }
                printf("Do you want to add more items to cart?\n If yes choose 1 otherwise choose 0 \n");
                scanf("%d", &status);
                if (status==0){
                    activity = 0;
                }

            }
        printf(" \n   YOUR TOTAL AMOUNT IS : %d", bill);
        if (bill>1000){
            printf("\n  DISCOUNTED AMOUNT IS     %2.f", bill*0.9);

        }
        else {
            printf("\nFinal Payable amount is : %d\n\n Pay the amount on the Counter\n",bill);
        }    
        printf("Thanks for visiting us\n\n");

        printf(" WANT TO PLACE ANOTHER ORDER?\n FOR NEXT CUSTOMER RESPONSE ONLY\n (1 for yes and 0 for no) \n");
        scanf("%d", &new);
        if (new){
            continue;
        }
        else{
            open = false;
            }

        printf("CLOSING STOCK\n\n");
        printf("LAYS            ITEM ID : %d,      STOCK: %d\n",lays.itemId,lays.stock);
        printf("SPRITE          ITEM ID : %d,      STOCK: %d\n",sprite.itemId,sprite.stock);
        printf("MAGGI           ITEM ID : %d,      STOCK: %d\n",maggi.itemId,maggi.stock);
        printf("CHOCOLATE       ITEM ID : %d,      STOCK: %d\n",chocolate.itemId,chocolate.stock);
        printf("CHOWMEIN        ITEM ID : %d,      STOCK: %d\n",chowmein.itemId,chowmein.stock);
        printf("JUICE           ITEM ID : %d,      STOCK: %d\n",juice.itemId,juice.stock);    
    
    
    return 0;}
    }
