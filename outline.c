#include <stdio.h>
#include <stdlib.h>

int f1(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return p - s;
}

void f2(char *from, char *to)
{
	while (*to++ = *from++)
		;
}

void f3(char *line[], int n)
{
	while (n-- > 0)
		printf("%s\n", *line++);
}

int main() {

	int a = 5, b = 11, c[5]; // init variables
	int *p; // init pointer to an integer

	p = &a; // p points to the address of a
	printf("%p\n", p);
	b = *p; // b points to the contents of the address at p (b = 5)
	printf("%d\n", b);
	*p = 1; // The contents of the address of a are now 1 (a = 1)
	printf("%d\n", *p);
	p = &c[1]; // p points to the second indice of c
	printf("%p\n", p);
	
	char *s = "oh hey world";
	char *t = (char*) malloc(100);

	// What will the following return?
	int d = f1(s);
	printf("%d\n", d);
	
	/*
	a. Error
	b. 0 
	c. 12
	d. a memory location
	*/

	/*
	Which is an invalid declaration of a string?
	a. char *s
	b. char s[]
	c. string s
	*/
	// See the below output
	f2(s, t);
	printf("%s\n", s);
	/*
	How can we make f2 copy the contents of s to t?
	a. Replace "&s" with "*s"
	b. Move assignment logic to the body of the for loop
	c. Function needs to return a string
	*/

	/*
	What do "char *line[]" and "*line++" represent in f3?
	a. A string called "line" of undetermined length and iteration over the characters of the string.
	b. An array of strings and the retrieval of a string value followed by an increment to the next string in memory.
	c. An incrementing memory address being printed.
	*/
	
	/*
	What is the difference between the following?
	int (*x)[24]
	int *x[24]

	a. The top is an array of 24 pointers to integers, and the bottom is a pointer to an array of 24 integers.
	b. The top is a pointer to an array of 24 integers, and the bottom is an array of 24 pointers to integers.
	c. They are functionally equivalent.
	*/

	/*
	Pointer asterisks (stars)  have higher precedence than brackets.
	a. True
	b. False
	*/

	/*
	A function f4 requires an array of 24 integers as a parameter. Which of the following is an invalid function declaration?
	a. f4(int y[5][24])
	b. f4(int y[][24])
	c. f4(int (*y)[24])
	d. They are all valid.
	*/

	/*
	"int x[3][2]" will create the same block of memory as "int x[6]"
	a. True
	b. False
	*/

	int *p2;
	int A[] = {1, 2, 3};
	p2 = A;
	printf("%d\n", *p2);

	/*
	What will the above print?
	a. [1, 2, 3]
	b. A pointer value
	c. 1
	*/

	printf("%d\n", p2[2]);
	/*
	The above will print 3.
	a. True
	b. False
	*/

	/*
	The following are all equivalent:
	matrix[i][j]
	*(matrix[i] + j)
	(*(matrix + i))[j]
	*((*(matrix + i)) + j)
	*(&matrix[0][0] + 4*i + j)

	a. True
	b. False
	*/

	/*
	"(void *)" is a generic pointer.
	a. True
	b. False
	*/

	/*
	What is "int (*cmp)(void *, void *)"?
	a. A function that takes two arguments and returns an integer
	b. A pointer to a function that takes two arguments and returns an integer
	c. A pointer to a function that takes pointers to two arguments and returns an integer
	d. A pointer to a tuple of generic pointers
	*/

	/*
	"char **argv" is a:
	a. Pointer to a pointer to a char
	b. Circular pointer
	c. Pointer to a char; the extra * is a syntax convention for argv
	*/

	/*
	X is a function returning a generic pointer, and Y is a pointer to a function returning void.
	a. X = "void (*f)()"; Y = "void *f()"
	b. X = "void &f()"; Y = "void **f()"
	c. X = "void *f()"; Y = "void (*f)()"
	*/

	/*
	Which is a function returning a pointer to an array of pointers to functions returning ints?
	a. int (*(*f())[])()
	b. int (**f())[])
	c. int (*(*f()))()
	d. int (**f())[])[]
	*/

	/*
	Which is an array of size 4 containing pointers to functions returning pointers to char arrays of size two?
	a. char (*(*f[2])())[4]
	b. char (**f[4]()[2])
	c. char (*(*f[4])())[2]
	d. char *(*f[2])()[4]
	*/

	return 0;
}
