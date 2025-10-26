#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter account balance: ");
    scanf("%f", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdraw);

    if ((int)withdraw % 100 != 0)
        printf("Transaction failed: Amount must be multiple of 100\n");
    else if (withdraw > balance)
        printf("Transaction failed: Insufficient balance\n");
    else if (balance - withdraw < 500)
        printf("Transaction failed: Minimum balance of 500 must be maintained\n");
    else
        printf("Transaction successful!\n");

    return 0;
}
