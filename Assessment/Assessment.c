#include <stdio.h>

int main() {
    int choice, qty;
    float amount = 0, total = 0;
    char more;

    do {

        printf("\n Menu \n");
        printf("1. Pizza   price = 180rs/pcs\n");
        printf("2. Burger  price = 80rs/pcs\n");
        printf("3. Dosa   price = 120rs/pcs\n");
        printf("4. maggie    price = 50rs/pcs\n");
        printf("5. idli price =40rs/pcs\n ");


        printf("Please Enter your choice... : ");
        scanf("%d", &choice);


        switch(choice) {
            case 1:
                printf("\nYou have selected Pizza.\n");
                printf("Enter the quantity : ");
                scanf("%d", &qty);
                amount = 180 * qty;
                break;

            case 2:
                printf("\nYou have selected Burger.\n");
                printf("Enter the quantity : ");
                scanf("%d", &qty);
                amount = 80 * qty;
                break;

            case 3:
                printf("\nYou have selected dosa\n");
                printf("Enter the quantity : ");
                scanf("%d", &qty);
                amount = 120 * qty;
                break;

            case 4:
                printf("\nYou have selected maggie.\n");
                printf("Enter the quantity : ");
                scanf("%d", &qty);
                amount = 50 * qty;
                break;

            case 5:
            printf("you have selected idli.\n");
            printf("Enter the quantity:");
            scanf("%d",&qty);
            amount = 40*qty;

            default:
                printf("\nInvalid choice!\n");
                amount = 0;
        }

        // Show amount
        printf("Amount : %.0f\n", amount);

        // Add to total
        total = total + amount;
        printf("Total Amount is = %.0f\n", total);

        // Ask for more orders
        printf("Do you want place more orders ? y & n : ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y');

    // Final bill
    printf("\n===== FINAL BILL =====\n");
    printf("Total Amount is = %.0f\n", total);
    printf(".........Thank you for Visting.........\n");

    return 0;
}
