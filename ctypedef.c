// typedef

#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} MEBook;

int main() {
	MEBook book;
	strcpy(book.title, "C语言");
	strcpy(book.author, "王家伟");
	strcpy(book.subject, "教程");
	book.book_id = 12345;
	printf("%s%s%s%d\n", book.title, book.author, book.subject, book.book_id);
	return 0;
}