 /*Fine for overdue library books
Author:Maxwell Kathurima
Reg No: D33-2427-2023 
*/
#include <stdio.h>

int main() {
    char bookID[20];
    int dueDate, returnDate, daysOverdue;
    int fineRate, fineAmount;

    // Get inputs
    printf("Enter Book ID: ");
    scanf("%s", bookID);

    printf("Enter Due Date: ");
    scanf("%d", &dueDate);

    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Initialize fine
    fineRate = 0;
    fineAmount = 0;

    // Determine fine
    if (daysOverdue > 0) {
        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
        fineAmount = daysOverdue * fineRate;
    }

    // Show results
    printf("\n--- Fine Details ---\n");
    printf("Book ID: %s\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate per day: Ksh. %d\n", fineRate);
    printf("Total Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}