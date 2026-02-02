#include<stdio.h>
#include<stdlib.h>

int num, pin, amt;
int acc001, acc002, acc003, acc004, acc005;   

//pin and atm card no are same  

int main(){
    system("cls");
    

    // Welcome Screen ui  
    printf("\n=====================================\n");
    printf("          WELCOME TO ATM             \n");
    printf("=====================================\n");
    printf("       Insert your ATM Card Number          \n");
    scanf("%d",&num);
    printf("        (Press Enter)                \n");

    //  ATM main menu : UI
    printf("\n=====================================\n");
    printf("           ATM MAIN MENU              \n");
    printf("=====================================\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Deposit Money\n");
    printf("4. Mini Statement\n");
    printf("5. Change PIN\n");
    printf("0. Exit\n");
    printf("-------------------------------------\n");
    int ch;

    while(ch !=0){
    printf("Enter your choice: ");
    scanf("%d",&ch);

    

    //Balance check
    if(ch == 1 && num == acc001){
        printf("Your current balance is %d Rs",5);
    }
    else if(ch == 1 && num == acc002){
        printf("Your current balance is %d Rs",50);
    }
    else if(ch == 1 && num == acc003){
        printf("Your current balance is %d Rs",25);
    }
    else if(ch == 1 && num == acc004){
        printf("Your current balance is %d Rs",35);
    }
    else if(ch == 1 && num == acc005){
        printf("Your current balance is %d Rs",95);
    }

    //Withdrawal amount
    else if(ch == 2 && num == acc001){
        printf("Enter you PIN: ");
        scanf("%d",&pin);
        if(pin == num){
            printf("Enter the amount: ");
            scanf("%d",&amt);
            printf("Please wait patiently....");
            printf("Amount Withdrawal successfull !");
        }
        else{
            printf("PIN INVALID !!!");
        }
    }

    else if(ch == 2 && num == acc002){
        printf("Enter you PIN: ");
        scanf("%d",&pin);
        if(pin == num){
            printf("Enter the amount: ");
            scanf("%d",&amt);
            printf("Please wait patiently....");
            printf("Amount Withdrawal successfull !");
        }
        else{
            printf("PIN INVALID !!!");
        }
    }
    else if(ch == 2 && num == acc003){
        printf("Enter you PIN: ");
        scanf("%d",&pin);
        if(pin == num){
            printf("Enter the amount: ");
            scanf("%d",&amt);
            printf("Please wait patiently....");
            printf("Amount Withdrawal successfull !");
        }
        else{
            printf("PIN INVALID !!!");
        }
    }
    else if(ch == 2 && num == acc004){
        printf("Enter you PIN: ");
        scanf("%d",&pin);
        if(pin == num){
            printf("Enter the amount: ");
            scanf("%d",&amt);
            printf("Please wait patiently....");
            printf("Amount Withdrawal successfull !");
        }
        else{
            printf("PIN INVALID !!!");
        }
    }
    else if(ch == 2 && num == acc005){
        printf("Enter you PIN: ");
        scanf("%d",&pin);
        if(pin == num){
            printf("Enter the amount: ");
            scanf("%d",&amt);
            printf("Please wait patiently....");
            printf("Amount Withdrawal successfull !");
        }
        else{
            printf("PIN INVALID !!!");
        }
    } // 
    }

    
    // Success Message  
    printf("\n*************************************\n");
    printf("   TRANSACTION SUCCESSFUL             \n");
    printf("*************************************\n");

    // Exit screen  
    printf("\n=====================================\n");
    printf("   THANK YOU FOR USING OUR ATM        \n");
    printf("=====================================\n");

    return 0;
}