// Write a program to create library management system.
#include <stdio.h>
#include <string.h>
struct library
{
    char book_name[50];
    int book_id;
    char author_name[50];
};
int main()
{
    int n, i;
    struct library b[100];
    int search;
    printf("Enter the number of books in a library:\n");
    scanf("%d", &n);
    if (n <= 0 || n > 100)
    {
        printf("Limits exceeded !\n");
        return 0;
    }
    getchar();
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of a book:\n");
        fgets(b[i].book_name, sizeof(b[i].book_name), stdin);
        b[i].book_name[strcspn(b[i].book_name, "\n")] = '\0';
        printf("Enter the ID of a book:\n");
        scanf("%d", &b[i].book_id);
        getchar();
        printf("Enter the book's author name:\n");
        fgets(b[i].author_name, sizeof(b[i].author_name), stdin);
        b[i].author_name[strcspn(b[i].author_name, "\n")] = '\0';
    }
    printf("Enter the id of a book you want to search:\n");
    scanf("%d", &search);
    printf("\n");
    int found = 0;
    for (i = 0; i < n; i++)
    {
        if (b[i].book_id == search)
        {

            found = 1;
            printf("Book found!\n");
            printf("Book name:%s\n", b[i].book_name);
            printf("Book's id:%d\n", b[i].book_id);
            printf("Author name is:%s\n", b[i].author_name);
            break;
        }
    }
    if (found == 0)
    {
        printf("Result not found!\n");
    }
    return 0;
}
