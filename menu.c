#include <stdio.h>

int main() {
    int c, q, t;

    printf("\nWelcome to Baddas CaFe\n");
    printf("\n1. Coffee\t - Rs:30\n");
    printf("\n2. Tea\t\t - Rs:25\n");
    printf("\n3. Sandwiches\t - Rs:50\n");
    printf("\n4. Pastries\t - Rs:40\n");
    printf("\n5. Soup\t\t - Rs:60\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    if (c < 1 || c > 5) {
        printf("Invalid choice. Please Enter a valid menu number (1-5):\n");
        return 1;
    }

    printf("Enter Quantity: ");
    scanf("%d", &q);

    switch (c) {
        case 1:
            t = q * 30;
            printf("Your order: %d Coffee.\nTotal: Rs-%d\n", q, t);
            break;
        case 2:
            t = q * 25;
            printf("Your order: %d Tea.\nTotal: Rs-%d\n", q, t);
            break;
        case 3:
            t = q * 50;
            printf("Your order: %d Sandwiches.\nTotal: Rs-%d\n", q, t);
            break;
        case 4:
            t = q * 40;
            printf("Your order: %d Pastries.\nTotal: Rs-%d\n", q, t);
            break;
        case 5:
            t = q * 60;
            printf("Your order: %d Soup.\nTotal: Rs-%d\n", q, t);
            break;
        default:
            printf("Something went wrong.\n");
            break;
    }

    return 0;
}