#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 25

int main(){
    
    char cust[100], more;
    int choice,counter=0,index=0;
    int price[5], count[5],total=0;
    char items[5][20];
    
    printf("\n\t\tVNRZ RESTAURANT\t\t");
    printf("\n-----------------------------------------------");
    printf("\n\t\t    WELCOME\n\n");
    
    do {
        
        printf("MENU\n");
        printf("  NAME                COST\n");
        printf("1. SPRING ROLLS         70\n");
        printf("2. VEG SANDWICH         50\n");
        printf("3. FRENCH FRIES         40\n");
        printf("4. BUTTER NAANS         60\n");
        printf("5. THICK SHAKES         55\n");
        printf("6. Exit          \n");
        printf("Order please:");
        scanf("%d",&choice);
        
        switch(choice) {
            case 1: printf("how many do u prefer:");
                    scanf("%d",&count[counter]);
                    price[counter] = count[counter]*60;
                    strcpy(items[index],"SPRING ROLLS");
                    index++;
                    printf("price:%d\n",price[counter]);
                    break;
                    
            case 2: printf("how many do u prefer:");
                    scanf("%d",&count[counter]);
                    price[counter] = count[counter]*60;
                    strcpy(items[index],"VEG SANDWICH");
                    index++;
                    printf("price:%d\n",price[counter]);
                    break;
                    
            case 3: printf("how many do u prefer:");
                    scanf("%d",&count[counter]);
                    price[counter] = count[counter]*60;
                    strcpy(items[index],"FRENCH FIRES");
                    index++;
                    printf("price:%d\n",price[counter]);
                    break;
                    
            case 4: printf("how many do u prefer:");
                    scanf("%d",&count[counter]);
                    price[counter] = count[counter]*60;
                    strcpy(items[index],"BUTTER NAANS");
                    index++;
                    printf("price:%d\n",price[counter]);
                    break;
                    
            case 5: printf("how many do u prefer:");
                    scanf("%d",&count[counter]);
                    price[counter] = count[counter]*60;
                    strcpy(items[index],"THICK SHAKES");
                    index++;
                    printf("price:%d\n",price[counter]);
                    break;
                    
            case 6: break; 
            
            default:printf("\nInvalid Argument.\n");
        }
        printf("do you like to have any more to eat(y/n) ");
        scanf("%s",&more);
        
        counter++;
        
    }while(more=='y' || more=='Y');
    
    printf("\n\t\tBILL\t\t"); 
    printf("\n-------------------------------------\n");
    time_t t = time(NULL);
    printf("\nDate: %s",ctime(&t));
    printf("\n----------------------------------------------\n");
    printf("\nName of item\t   Quantity\t\tCost\n");
    printf("----------------------------------------------\n");
 
    int j=0;
    for(j=0;j<counter;j++) {
        
        printf("%s\t\t",items[j]);
        printf("%d\t\t",count[j]);
        printf("%d",price[j]);
        printf("\n");
        
        total = total+price[j];
    }
    

    printf("\n");
    printf("----------------------------------------------\n");
    printf("Sub Total:\t\t%d",total);
    printf("\nDiscount 10 prcnt:\t%d\n",(total*10)/100);
    printf("----------------------------------------------\n");
    int net_total= total-((total*10)/100);
    int cgst = (net_total*9)/100;
    printf("Net Total\t\t%d",net_total);
    printf("\nCGST 9 prcnt:\t\t%d",cgst);
    printf("\nSGST 9 prcnt:\t\t%d\n",cgst);
    printf("------------------------------------------------\n");
    printf("Grand Total:\t\t%d",(net_total+cgst+cgst));
    printf("\n------------------------------------------------\n\n");
    printf("\n  **** THANK YOU FOR COMING ****\n");
    printf("***   PLEASE VISIT US NEXT TIME  *****");
    return 0;
}
