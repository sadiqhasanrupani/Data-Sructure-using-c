/*#include <stdio.h>
struct Bank
{
    char acc_holder_name[30];
    int acc_no;
    int balance;
};
int main()
{
    struct Bank bank[] = {{"Yasin Bhojani", 121416, 12000},
                          {"Zakir Kalwani", 828323, 14000},
                          {"Soham Ganmote", 693274, 19000},
                          {"Sadiq Rupani", 494732, 17000}};
    int acc, i;
    printf("Enter account number : ");
    scanf("%d", &acc);
    for (i = 0; i < 4; i++)
    {
        if (acc == bank[i].acc_no)
        {
            printf("your account balance is %d\n", bank[i].balance);
            break;
        }
    }
    return 0;
}*/
#include <stdio.h>
struct bank
{
    char acc_holder_nm[100];
    int account_no;
    int balance;
};

int main()
{
    struct bank Bank[] = {
        {"Sadiqhasan Rupani", 678451, 90000},
        {"Aliabbas Rupani", 678452, 91000},
        {"Fatima kamani", 678453, 78000},
        {"Yasin bhojani", 678454, 60000}};
    int account, i;
    printf("\n Enter Your Account Number: ");
    scanf("%d", &account);

    for (i = 0; i < 4; i++)
    {
        if (account == Bank[i].account_no)
        {
            printf("\n Your Account Name is: %s", Bank[i].acc_holder_nm);
            printf("\n Your Account Balance is: %d Rupees.\n", Bank[i].balance);
            break;
        }
    }
    return 0;
}
