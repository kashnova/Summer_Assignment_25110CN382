// Write a program to create inventory management system.
#include <stdio.h>
#include <string.h>
struct product
{
    char product_name[100];
    char product_id[100];
    int quantity;
    float price;
};
int main()
{
    int n, i;
    char search[100];
    int found = 0;
    struct product p[100];
    printf("Enter the number of products:\n");
    scanf("%d", &n);
    getchar();
    if (n <= 0 || n > 100)
    {
        printf("Invalid number of products.\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the product name:\n");
        fgets(p[i].product_name, sizeof(p[i].product_name), stdin);
        p[i].product_name[strcspn(p[i].product_name, "\n")] = '\0';
        printf("Enter the product ID:\n");
        fgets(p[i].product_id, sizeof(p[i].product_id), stdin);
        p[i].product_id[strcspn(p[i].product_id, "\n")] = '\0';
        printf("Enter the quantity of a product:\n");
        scanf("%d", &p[i].quantity);
        getchar();
        printf("Enter the price of a product:\n");
        scanf("%f", &p[i].price);
        getchar();
    }
    printf("Enter the product ID you want to search:\n");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';
    for (i = 0; i < n; i++)
    {
        if (strcmp(p[i].product_id, search) == 0)
        {
            found = 1;
            printf("--------PRODUCT FOUND !----------\n");
            printf("Product Name is: %s\n", p[i].product_name);
            printf("Product ID is: %s\n", p[i].product_id);
            printf("Product Quantity is: %d\n", p[i].quantity);
            printf("Product Price is: %.2f\n", p[i].price);
            break;
        }
    }
    if (found == 0)
    {
        printf("PRODUCT NOT FOUND!\n");
    }
    return 0;
}
