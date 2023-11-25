#include <stdio.h>

struct grocery {
    int id;
    char name[20];
    int price;
};

int i;
int noOfItems;
int totalPrice = 0;

int main() {
    printf("Enter no of items: ");
    scanf("%d", &noOfItems);
    struct grocery item[noOfItems];

    for (i = 0; i < noOfItems; i++) {
        printf("\nEnter Item %d Id  : ", i + 1);
        scanf("%d", &item[i].id);

        printf("Enter Item %d Name : ", i + 1);
        scanf("%s", item[i].name);

        printf("Enter Item %d Price : ", i + 1);
        scanf("%d", &item[i].price);
    }

    printf("SELECT ITEMS : \n");
    for (i = 0; i < noOfItems; i++) {
        printf("%d \t %s \t %d \n", item[i].id, item[i].name, item[i].price);
    }

    int itemID, Quantity;
    

    totalPrice = 0;

    while (1) {
        printf("Enter itemID or 0 to exit: ");
        scanf("%d", &itemID);
         if (itemID == 0) {
            break; // Exit the loop when itemID is 0
        }

        printf("Enter Quantity: ");
        scanf("%d", &Quantity);

        for (i = 0; i < noOfItems; i++) {
            if (item[i].id == itemID) {
                item[i].price = Quantity * item[i].price;
                totalPrice += item[i].price;
                printf("ID \t  Item \t Qty \t Price \n");
                printf("%d \t %s \t  %d  \t %d \n", item[i].id, item[i].name,Quantity, item[i].price);
            }
        }

    }

    printf("Total Price: %d\n", totalPrice);

    return 0;
}
