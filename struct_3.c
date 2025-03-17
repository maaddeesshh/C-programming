#include <stdio.h>
#include <string.h>  // Required for strcpy()

// Define a structure for a Book
struct Book {
    char title[100];  // String (character array)
    char author[50];
    int year;
};

int main() {
    // Declare a structure variable
    struct Book book1, book2;

    // Assign values using strcpy() for string members
    strcpy(book1.title, "The Great Gatsby");
    strcpy(book1.author, "F. Scott Fitzgerald");
    book1.year = 1925;

    strcpy(book2.title, "To Kill a Mockingbird");
    strcpy(book2.author, "Harper Lee");
    book2.year = 1960;

    // Print book details
    printf("Book 1: \"%s\" by %s (Published: %d)\n", book1.title, book1.author, book1.year);
    printf("Book 2: \"%s\" by %s (Published: %d)\n", book2.title, book2.author, book2.year);

    return 0;
}
