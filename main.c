#include <stdio.h>
#include "myBank.h"

int main(){
    char action;
    printf("Please choose a transaction type:\nO-Open Account\nB-Balance Inquiry\nD-Deposit\nW-Withdrawal\nC-Close Account\nI-Interest\nP-Print\nE-Exit\n");
    int check =scanf(" %c",&action);
        if(check!=1)
            printf("Invalid transaction type\n");
        else{
    while (action!='E')
    {
        if(action=='O'){
            openAcc();

        }
        else if(action=='B'){
           balance(); 
        }
        else if(action=='D'){
            deposit();
        }
        else if(action=='W'){
            withdrawal();
        }
        else if(action=='C'){
            closeAcc();
        }
        else if(action=='I'){
            interestRate();
        }
        else if(action=='P'){
            printAll();
        }
        else
            printf("Invalid transaction type\n");
        printf("\nPlease choose a transaction type:\nO-Open Account\nB-Balance Inquiry\nD-Deposit\nW-Withdrawal\nC-Close Account\nI-Interest\nP-Print\nE-Exit\n");
        scanf(" %c",&action);
        }
     }
closeAll();
return 0;
}