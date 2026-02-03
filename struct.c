// accounts.c
#include <stdio.h>

// Define a structure for accounts
typedef struct {
    int cardNumber;   // ATM card number (also used as PIN)
    int balance;      // Current balance
} Account;

// Create and initialize accounts
Account acc001 = {1001, 5};
Account acc002 = {1002, 50};
Account acc003 = {1003, 25};
Account acc004 = {1004, 35};
Account acc005 = {1005, 95};