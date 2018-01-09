#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int score = 0;

void question(char *q_text, char *correct)
{
	char *input = malloc(10);

	printf("%s\n", q_text);
	printf("-> ");
	fgets(input, 10, stdin) != NULL;
	input = strtok(input, "\n");

	if (strcmp(input, correct) == 0) {
		printf("Correct!\n\n");
		score++;
	} else {
		printf("Nope. The correct answer is:\n%s\n\n", correct);
	}
	printf("===============================================\n\n");

}

int main()
{
	char *s = malloc(200);

	printf("C Pointer Quiz\n\n");

	s = "int a = 5, b = 11, c[5];\nint *p;\n\n"
		"p = &a;\nprintf(\"%p\\n\", p);\n\nPrints:\n"
		"a. A memory address\nb. 5\nc. 0\nd. Error\n";
	question(s, "a");

	s = "b = *p;\nprintf(\"%d\\n\");\n\nPrints:\n"
		"a. 11\nb.5\nc.A memory address\nd. 0\n";
	question(s, "b");

	s = "*p = 1; printf(\"%d\\n\", *p);\n\nPrints:\n"
		"a. Error\nb. 5\nc. 11\nd. 1\n";
	question(s, "d");

	s = "p = &c[1];\nprintf(\"%p\\n\", p);\n\nPrints:\n"
		"a. 0\nb. A memory address\nc. 1\nd. 11\n";
	question(s, "b");

	s = "int f1(char *s)\n{\n\tchar *p = s;\n\n\twhile (*p != '\\0')\n"
		"\treturn p - s;\n}\n\n...\n\nchar *s = \"oh hey world\";\n"
		"char *t = (char*) malloc(100);\nint d = f1(s);\nprintf(\"%d\\n\", d);\n"
		"\nWhat is printed?\na. Error\nb. 0\nc. 12\nd. A memory address\n";
	question(s, "c");

	s = "Which is an invalid declaration of a string?\n"
		"a. char *s\nb. char s[]\nc. string s\nd. All are valid\n";
	question(s, "c");

	s = "void f2(char *from, char *to)\n{\n\twhile(*to++ = *from++)\n"
		"\t\t;\n}\n\n...\n\nf2(s, t);\nprintf(\"%s\\n\", s);\n\n"
		"How can f2 be altered to copy the contents of s to t?\n"
		"a. Replace \"%s\" with \"*s\"\nb. Move the assignment logic to the body"
		"of the loop\nc. Function needs to return a string\nd. Can't be done\n";
	question(s, "a");

	s = "What do \"char *line[]\" and \"*line++\" represent in f3?\n"
		"a. A string called \"line\" of unknown length and iteration over th e"
		"chars of a string\nb. An array of strings and the retrieval of a string "
		"value followed by an increment to the next string in memory\n"
		"c. An incrementing memory address being printed.\n";
	question(s, "b");

	s = "What is the difference between the following?\nint (*x)[24]\n"
		"int *x[24]\n\na. The top is an array of 24 pointers to integers, "
		"and the bottom is a pointer to an array of 24 integers\nb. The top"
		"is a pointer to an array of 24 integers, and the bottom is an array"
		"of 24 pointers to integers\nc. They are functionally equivalent\n";
	question(s, "b");

	s = "Pointer asterisks (stars) have higher precedence than brackets.\n"
		"a. True\nb. False\n";
	question(s, "b");

	s = "A function f4 requires an array of 24 integers as a parameter."
		"Which of the following is an invalid function declaration?\n"
		"a. f4(int y[5][24])\nb. f4(int y[][24])\nc. f4(int (*y)[24])\n"
		"d. They are all valid\n";
	question(s, "d");

	s = "\"int x[3][2]\" will create the same block of memory as \"int x[6]\"\n"
		"a. True\nb. False\n";
	question(s, "a");

	s = "int *p2;\nint A[] = {1, 2, 3};\np2 = A;\nprintf(\"%d\\n\", *p2);\n\n"
		"What will the above print?\na. [1, 2, 3]\nb. A pointer value\nc. 1\n";
	question(s, "c");

	s = "The following are all equivalent:\nmatrix[i][j]\n*(matrix[i] + j)\n"
		"(*(matrix + i))[j]\n*((*(matrix + i)) + j)\n*(&matrix[0][0] + 4*i + j)\n"
		"\na. True\nb. False\n";
	question(s, "a");

	s = "\"(void *)\" is a generic pointer.\na. True\nb. False\n";
	question(s, "a");

	s = "What is \"int (*cmp)(void *, void *)\"?\n"
		"a. A function that takes two arguments and returns an integer\n"
		"b. A pointer to a function that takes two arguments and returns"
		"an integer\nc. A pointer to a function that takes pointers to "
		"two arguments and returns an integer\nd. A pointer to a tuple"
		"of generic pointers\n";
	question(s, "b");

	s = "\"char **argv\" is a:\na. Pointer to a pointer to a char\n"
		"b. Circular pointer\nc. Pointer to a char; the extra '*' is "
		"a syntax convention for argv";
	question(s, "a");

	s = "X is a function returning a generic pointer, and Y is a"
		"pointer to a function returning void.\na. X = "
		"\"void (*f)()\"; Y = \"void *f()\"\nb. X = "
		"\"void &f()\"; Y = \"void **f()\"\nc. X = "
		"\"void *f()\"; Y = \"void (*f)()\"\n";
	question(s, "c");

	s = "Which is a function returning a pointer to an array of ints?\n"
		"a. int (*(*f())[])()\nb. int (**f())[]\nc. int (*(*f()))()\n"
		"d. int (**f()[])[]\n";
	question(s, "a");

	s = "Which is an array of size four  containing pointers to "
		"functions returning pointers to char arrays of size two?\n"
		"a. char (*(*f[2])())[4]\nb. char (**f[4]()[2])\n"
		"c. char (*(*f[4])(2))[2]\nd. char *(*f[2])()[4]\n";
	question(s, "c");

	printf("\n\nThat's it! You scored %d/20\n\n", score);

	return 0;
}
