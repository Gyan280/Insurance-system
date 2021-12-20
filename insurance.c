#include <stdio.h>
#include <stdlib.h>

int years;
 int option;	 	
void transaction(){
   
  int choice;
    printf("**WELCOME TO IPMC INSURANCE**\n");

  printf(" Select any of our insurance policies!\n\n");
  
  printf("1. Car insurance\n");
  printf("2. Home insurance\n");
  printf("3. Travel insurance\n");
  printf("4. Funeral insurance\n");
  printf("5. Life insurance\n");
  printf("6. Building insurance\n");
  scanf("%d",  &choice);

  switch(choice){
    case 1:

    printf("Please select one of our collection for car insurance policy:\n");

    printf("1. Car accident insurance settlement\n");
     printf("2. Payment plan\n");
     scanf(" %d", &option);
    if(option ==1){
      printf("You have selected the Car accident insurance settlement\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
        break;
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
       break;
      }


    }

      if(option == 2){
        printf("You have selected the payment plan policy");}
         printf("Choose the number of years \n");
         printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
      if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }







    break;
    
    
    

    case 2:

    printf("Please select one of our collection for home insurance policy:\n");
    printf("1. Skyscraper/ high rise\n");
    printf("2. Semi-detached house\n");
    scanf(" %d", &option);
    if(option ==1){
      printf("You have selected the  Skyscraper/ high rise collection\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    if(option ==2){
      printf("You have selected the Semi-detached house package\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    break;
        case 3:

    printf("Please select one of our collection for travel insurance policy:\n");
    printf("1. Emergency medical expenses\n");
    printf("2. Delayed departure\n");
    scanf(" %d", &option);
    if(option ==1){
      printf("You have selected the  Emergency medical expenses\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    if(option ==2){
      printf("You have selected the Delayed departure package\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    break;
            case 4:

    printf("Please select one of our collection for Funeral insurance policy:\n");
    printf("1. Finance Burial\n");
    printf("2. Funeral Expenses\n");
    scanf(" %d", &option);
    if(option ==1){
      printf("You have selected the  Finance Burial\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    if(option ==2){
      printf("You have selected the Funeral Expenses\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    break;
    
        case 5:

    printf("Please select one of our collection for Life insurance policy:\n");
    printf("1. Lump sum\n");
    printf("2. Interest income\n");
    scanf(" %d", &option);
    if(option ==1){
      printf("You have selected the  Lump sum\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    if(option ==2){
      printf("You have selected the Interest income\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    break;
    
       
        case 6:

    printf("Please select one of our collection for Building insurance policy:\n");
    printf("1. Fire\n");
    printf("2. Earthquakes\n");
    scanf(" %d", &option);
    if(option ==1){
      printf("You have selected the   Fire\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    if(option ==2){
      printf("You have selected the Earthquakes\n");

      printf("\nSelect the number of years you want to be secure:\n");

      printf("1. 3 years\n");
      printf("2. 5 years\n");
      scanf(" %d",&years);
      if(years == 1){
        printf("\nThanks for choosing 3 years of insurance with IPMC\n");
      }
     if(years == 2){
       printf("Thanks for choosing 5 years of insurance with IPMC\n");
      }


    }
    break;
  }
}





int main(){



  transaction();

  return 0;
}
