#include <stdio.h>

// C Program for ATM Transaction //
int main() {
    int ATM_pin, choice, pass, count=0, withdraw, deposit;
    float amount=200000;
    printf(".....WELCOME TO HDFC BANK.....\n");
    
    printf("Please set your ATM pin:\n");
    scanf("%d",&ATM_pin);
    printf("Congratulation! Your ATM pin is set to use\n");
    
    printf("...Please Choose Your Service...\n");
    printf("Press 1: CHECK BALANCE\n");
    printf("Press 2: WITHDRAW CASH\n");
    printf("Press 3: DEPOSIT CASH\n");
    printf("Press 4: QUIT\n");
    scanf("%d",&choice);
    
    switch(choice){
        
        case 1: 
        while(count!=3){
            printf("Please Enter Your ATM Pin\n");
            scanf("%d",&pass);
        if(pass==ATM_pin){
            printf("Your Account Balance is %.2f",amount);
            break;
            }else{
            printf("Incorrect PIN, Please try again\n");
        count++;
            }
        }
        if(count==3){
        printf("PIN limit Reached! Account has been Freezed.\n");}
        break;
        
        case 2:
        while(count!=3){
            printf("Please Enter Your ATM Pin\n");
            scanf("%d",&pass);
        if(pass==ATM_pin){
            do{
                printf("Withdrawal Amount Should be Multiple of 100\n");
                printf("Please Enter The Amount You Want To Withdraw\n");
                scanf("%d",&withdraw);
            }while(withdraw%100!=0);
        amount = amount-withdraw;
        if(amount<200000){
            printf("Please Collect Your Cash From The Machine...\n");
            printf("Your ATM Balance is %.2f\n",amount);
        }else{
            printf("Insufficient Balance!\n");
        }
            break;
            }else{
            printf("Incorrect PIN, Please try again\n");
        count++;
            }
        }
        if(count==3){
        printf("PIN limit Reached! Account has been Freezed.\n");}
        break;
        
        case 3:
        while(count!=3){
            printf("Please Enter Your ATM Pin\n");
            scanf("%d",&pass);
        if(pass==ATM_pin){
            do{
                printf("Deposit Amount Should be Multiple of 100\n");
                printf("Please Enter The Amount You Want To Deposit\n");
                scanf("%d",&deposit);
            }while(deposit%100!=0);
        amount = amount+deposit;
            printf("Please Deposit Your Cash in The Machine...\n");
            printf("Your ATM Balance is %.2f\n",amount);
            break;
            }else{
            printf("Incorrect PIN, Please try again\n");
        count++;
            }
        }
        if(count==3){
        printf("PIN limit Reached! Account has been Freezed.\n");}
        break;
        
        case 4: printf("...Thank You for visiting HDFC Bank...");
        break;
        
        default:
        printf("!!!INVALID REQUEST!!!\n");
    }
    return 0;
}