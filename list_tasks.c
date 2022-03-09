#include<stdio.h>
#include<stdlib.h>

FILE *open_todo_file(char mode[]);

/*
 * author GG weebcyberpunk@gmail.com
 * version 0.0.0
 * since Mar 08, 2022
 */
int list_tasks() {

	FILE *fp;
	fp = open_todo_file("r");
	int count = 1;
	int print = 1;
	int have_tasks = 0;
	char c;

	for (;;) {
		c = fgetc(fp);

		if (c == EOF) break;
		if (have_tasks == 0) have_tasks = 1;

		if (print == 1) {
			printf("%i - ", count);
			print = 0;
			count++;

		}

		if (c == '\n') print = 1;
		printf("%c", c);

	}

	if (have_tasks == 0) printf("you completed all of your tasks! <3\n");

	fclose(fp);
	
	return(0);
}
