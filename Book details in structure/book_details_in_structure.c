/* program to store information (title, author, subject
and book_id) of a Book using structure and display
it in appropriate format. */

#include <stdio.h>
#include <string.h>

struct Book {
    char title[20];
    char author[30];
    char subject[20];
    int book_id;
};

int main() {
    struct Book book;
    // input the values
    printf("Enter the title of the book: ");
    fgets(book.title, sizeof(book.title), stdin);
    printf("Enter the author of the book: ");
    fgets(book.author, sizeof(book.author), stdin);
    printf("Enter the aubject of the book: ");
    fgets(book.subject, sizeof(book.subject), stdin);
    book.book_id = 25;

    // output the values
    printf("\n\nTitle of the book is: %s", book.title);
    printf("Author of the book is: %s", book.author);
    printf("Subject is: %s", book.subject);
    printf("Book id is: %d", book.book_id);
    return 0;
}
