
#ifndef BOOK_MANAGEMENT_GUARD__H
#define BOOK_MANAGEMENT_GUARD__H

#include <stdio.h>

/*You can extend the structs (Book and BookList) defined in this head file;
  However, you may not change the function prototypes.
  You are also free to add additional head files and data structures as needed.
*/

//他的定义方式：
//typedef struct _Book {
//	    unsigned int id; //Book ID
//		char *title; //book title
//        //char title[20];
//		char *authors; //comma separated list of authors
//		unsigned int year; // year of publication
//		unsigned int copies; //number of copies the library has
//		struct _Book *next; //pointer to the next book element
//}Book;
//我的定义方式：
typedef struct _Book{
    unsigned int id;
    char title[100];
    char author[100];
    unsigned int year;
    unsigned int copies;
    struct_Book *next;
}Book;

//create booklist head pointer
Book* book_head;
//number of books
int book_num;

typedef struct _BookArray {
    Book* array; // pointer to array (or linked list) of struct Book.
    unsigned int length; // number of elements in the (Book*) array
}BookArray;

//typedef struct book_array{//原名字为_BookArray
//    Book* array;
//    unsigned int length;
//}BooKArray;

struct node //Books borrowed by users.
{
    int borrow_amount, max_amount;//The number of books borrowed, the maximum number of books borrowed
    Book borrow_book[10];//Each person can borrow up to 10 books
};

//他的定义方式：
//typedef struct _BookList {
//	 Book* list; // pointer to a list of struct Book.
//	 unsigned int length; // number of elements in the (Book*) List
//}BookList;


//saves the database of books in the specified file
//returns 0 if books were stored correctly, or an error code otherwise
//int store_books(FILE *file);
void store_books();


//loads the database of books from the specified file
//the file must have been generated by a previous call to store_books()
//returns 0 if books were loaded correctly, or an error code otherwise
//int load_books(FILE *file);
void load_books();


//adds a book to the ones available to the library
//returns 0 if the book could be added, or an error code otherwise
//int add_book(Book book);

//removes a book from the library
//returns 0 if the book could be successfully removed, or an error code otherwise.
//int remove_book(Book book);

//finds books with a given title.
//returns a BookList structure, where the field "list" is a list of books, or null if no book with the
//provided title can be found. The length of the list is also recorded in the returned structure, with 0 in case
//list is the NULL pointer.
//删除了原函数类型
//BookList find_book_by_title (const char *title);
//这个要用原来的！！！！void find_book_by_title();

//finds books with the given authors.
//returns a Booklist structure, where the field "list" is a newly allocated list of books, or null if no book with the
//provided title can be found. The length of the list is also recorded in the returned structure, with 0 in case
//list is the NULL pointer.
//BookList find_book_by_author (const char *author);
//这个要用原来的！！！！void find_book_by_author();

//finds books published in the given year.
//returns a Booklist structure, where the field "list" is a list of books, or null if no book with the
//provided title can be found. The length of the list is also recorded in the returned structure, with 0 in case
//list is the NULL pointer.
//BookList find_book_by_year (unsigned int year);
//这个要用原来的！！！！void find_book_by_year();






//图书管理加载：
void creat_book_list(char*, char*, int, int, int);
void store_books();
void load_books();
void display_book();
void search_book_by_title ();
void search_book_by_author ();
void search_book_by_year ();


#endif
