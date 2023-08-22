#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
    int type;       
    int size;       
    float weight;  
};

int main() {
    int numProducts;

    printf("Enter the number of products: ");
    scanf("%d", &numProducts);

    struct Product products[numProducts];

    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter information for product %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", products[i].name);
        printf("Price: ");
        scanf("%f", &products[i].price);
        printf("Type (0: Clothing, 1: Footwear, 2: Electronics): ");
        scanf("%d", &products[i].type);

        if (products[i].type == 0 || products[i].type == 1) {
            printf("Size: ");
            scanf("%d", &products[i].size);
        } else if (products[i].type == 2) {
            printf("Weight: ");
            scanf("%f", &products[i].weight);
        }
    }

    char searchName[50];
    printf("\nEnter the name of the product to retrieve information: ");
    scanf("%s", searchName);

    for (int i = 0; i < numProducts; i++) {
        if (strcmp(searchName, products[i].name) == 0) {
            printf("\nProduct Information:\n");
            printf("Name: %s\n", products[i].name);
            printf("Price: %.2f\n", products[i].price);
            printf("Type: %s\n", products[i].type == 0 ? "Clothing" : (products[i].type == 1 ? "Footwear" : "Electronics"));

            if (products[i].type == 0 || products[i].type == 1) {
                printf("Size: %d\n", products[i].size);
            } else if (products[i].type == 2) {
                printf("Weight: %.2f\n", products[i].weight);
            }

            break;
        }
    }

    return 0;
}
