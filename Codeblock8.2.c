//Create a Bank Service
#include <stdio.h>

struct Customer {
    int acc_no;
    char name[50];
    float balance;
};

void lowBalance(struct Customer c[], int n) {
    printf("\nCustomers with balance below Rs.100:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 100)
            printf("Acc No: %d, Name: %s, Balance: %.2f\n", c[i].acc_no, c[i].name, c[i].balance);
    }
}

void update(struct Customer c[], int n, int acc, float amount, int code) {
    for (int i = 0; i < n; i++) {
        if (c[i].acc_no == acc) {
            if (code == 1)
                c[i].balance += amount;
            else {
                if (c[i].balance < amount)
                    printf("The balance is insufficient for the specified withdrawal.\n");
                else
                    c[i].balance -= amount;
            }
            printf("Updated balance: %.2f\n", c[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

int main() {
    struct Customer c[10];
    int n = 10, acc, code;
    float amount;

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of customer %d:\n", i + 1);
        printf("Account No: "); scanf("%d", &c[i].acc_no);
        printf("Name: "); scanf("%s", c[i].name);
        printf("Balance: "); scanf("%f", &c[i].balance);
    }

    lowBalance(c, n);

    printf("\nEnter account no, amount and code (1 for deposit, 0 for withdrawal): ");
    scanf("%d %f %d", &acc, &amount, &code);
    update(c, n, acc, amount, code);

    return 0;
}//
