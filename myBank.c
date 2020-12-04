#include <stdio.h>

double arr [51][2];
int accCount=1;
double amount=0;
int account=0;


void openAcc(){
    if(accCount<=50&&accCount>=1){
    int i=1;
    while (arr[i][0]==1)
    i++;
    printf("New account number is:%d\n",i+900);
    printf("Please enter amount for deposit:\n");
    int check =scanf("%lf",&amount);
        if(check!=1)
            printf("Failed to read the amount\n");
        else{
            arr[i][0]=1;
            arr[i][1]=amount;
            accCount++;
        }
    }
        else printf("We are full,please try again later.\n");
}

void balance(){
    printf("Please enter account number:\n");
    scanf("%d",&account);
    if(account>900&&account<951){
        if(arr[account-900][0]==1){
            printf("The balance of account number %d is: %.2lf\n",account,arr[account-900][1]);
         }
      else  printf("This account is closed\n");
      }
   else printf("Failed to read the account number.\n");
    }   

void deposit(){
     printf("Please enter account number:\n");
    scanf("%d",&account);
    if(account>900&&account<951){
        if(arr[account-900][0]==1){
            printf("Please enter your deposit amount:\n");
            int check =scanf("%lf",&amount);
        if(check!=1)
            printf("Failed to read the amount\n");
        else{
            arr[account-900][1]=arr[account-900][1]+amount;
            printf("The new balance is:%.2lf\n",arr[account-900][1]);
        }
            }
        printf("This account is closed.\n");
        }
       else printf("Failed to read the account number.\n");
    }   

void withdrawal(){
    double cash;
    printf("Please enter account number:\n");
    scanf("%d",&account);
    if(account>900&&account<951){
        if(arr[account-900][0]==1){
            printf("Please enter the amount to withdraw:\n");
            int check =scanf("%lf",&amount);
        if(check!=1)
            printf("Failed to read the amount\n");
           else if(arr[account-900][1]>cash){
               arr[account-900][1]=arr[account-900][1]-cash; 
               printf("T new balance is:%.2lf\n",arr[account-900][1]);
            }
             else printf("Cannot withdraw more than the balance\n");
        }
        else printf("This account is closed.\n");
    }
    else printf("Failed to read the account number.\n");
}

void closeAcc(){
    printf("Please enter account number:\n");
    scanf("%d",&account);
    if(account>900&&account<951){
        if(arr[account-900][0]==1){
           arr[account-900][0]=0; 
           accCount--;
           printf("Account number %d successfully closed.\n",account);
        }
        else printf("This account is already closed.\n");
    }
    else printf("Failed to read the account number.\n");
}
void interestRate(){
    double interest=0;
    printf("Please enter interest rate:\n");
    int check =scanf("%lf",&interest);
        if(check!=1)
            printf("Failed to read the interest rate\n");
        else{
            for (int i = 1; i < 51; i++)
            {
                if(arr[i][0]==1){
                    arr[i][1]=arr[i][1]*((interest/100)+1);
             }
         }
    }
}
void printAll(){
    if(accCount>0){
        for (int i = 1; i < accCount; i++)
            if(arr[i][0]==1)
                printf("The balance of account number %d is: %.2lf\n",900+i,arr[i][1]);
    }
    else printf("All the accounts are closed.\n");
}
void closeAll(){
    if(accCount>0){
        for (int i = 0; i < accCount; i++)
        {
            arr[i][0]=0;
            arr[i][1]=0;
            accCount--;
        }
    }
}