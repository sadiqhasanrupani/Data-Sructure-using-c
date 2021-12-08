#include<stdio.h>
struct bank{
    float deposit, withdraw;
    int balance, account_no;
    char branch[100], ac_holder[100];
};

struct bank b;

void main(){

    printf("\n Enter the following details: \n");
    printf("\n Account Holder Name: ");
    fgets(b.ac_holder, sizeof(b.ac_holder),stdin);
    printf("\n Plz Enter your Account Number: ");
    scanf("%d",&b.account_no);
    printf("\n Plz Enter your Current Balance: ");
    scanf("%d",&b.balance);
    printf("\n Plz Enter your Branch: ");
    scanf("%s",&b.branch);

    int i;

    do{
        printf("\n ~~~~~~~~~~~~~~~~~~~~~Select the Options: ~~~~~~~~~~~~~~~~~~~~~\n");

        printf("\n 1.Display Account\n 2.withdraw\n 3.Deposit\n 4.Check Balance\n 5.Exit \n -> ");

        scanf("%d",&i);

        switch(i){
            case 1:
                printf("\n Account Details are: \n");
                printf("\n Name: %s \n",b.ac_holder);
                printf("\n Account Number: %d \n",b.account_no);
                printf("\n Branch Name: %s \n",b.branch);
                printf("\n Your Current Balace: %s \n",b.balance);
                break;
            case 2: 
                printf("\n Enter Account to Withdraw: ");
                scanf("%f",&b.withdraw);
                b.balance = b.balance - b.withdraw;

                printf("\n Remaining Balance: %d \n",b.balance);
                break;
            case 3:
                printf("\n Enter Account for Deposit: ");
                scanf("%f",&b.deposit);

                b.balance= b.balance + b.deposit;

                printf("\n Updated Balance: %d",b.balance);
                break;
            case 4:
                printf("\n Checking Balance...... \n");
                printf("\n Your Current Balance: %d\n",b.balance);
                break;
            case 5:
                printf("\n Thanks for your Visit, Have a Nice Day :) \n");
                break;
            default:
                printf("\n Not Valid Option, Please Try Again.\n");

        }

    }while(i<=4);
}