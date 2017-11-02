#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changing or setting the Title
 *    * Changing or setting the Author
 *    * Changing or setting the Year of publication
 *    * Getting each of these separately by a single function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */

typedef struct {
     char title[50];
     char author[25];
     int year;
 } Book;

int book_counter = 0;

int new_book(Book book[], char title[], char author[], int year[]);
char set_Title();
char set_Author();
int set_Year();
char get_Title();
char get_Author();
int get_Year();

 int main()
 {
    Book book[10];

    new_book(book, "Book Titles Are Hard To Come Up With", "dr. Book Author", 2000);

    printf("\n\n\tBook counter: %d\n\n", book_counter);

    printf("Title = %s\nAuthor = %s\nYear of Publication = %d", book[0].title, book[0].author, book[0].year);

   /* Book new_book(Book book[book_counter]);
    book[book_counter].title = "Book Titles Are Easier To Come Up With";
    book[book_counter].author = "dr. Second Book Author";
    book[book_counter].year = 2001;

    printf("\n\n\tBook counter: %d\n\n", book_counter);

    printf("Title = %s\nAuthor = %s\nYear of Publication = %d", book[book_counter].title, book[book_counter].author, book[book_counter].year);

*/
    return 0;
 }

int new_book(Book book[], char title[], char author[], int year[])
{
    strcpy(book[book_counter].title, title);
    strcpy(book[book_counter].author, author);
    book[book_counter].year = year;
    book_counter++;
}

/*char set_Title()
{
    char title = "Book Titles Are Hard To Come Up With"
    book1.title = title;

    return title;
}
char set_Author()
{
    char author = "dr. Book Author"
    book1.author = author;

    return author;
}
int set_Year()
{
    int year = 2000;
    book1.year = year;

    return year;
}
*/
