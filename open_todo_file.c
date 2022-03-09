#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *open_todo_file(char mode[]) {
	// getting todo.txt location
	char *home[] = { getenv("HOME"), NULL };
	char todo_file_name[25] = "/.local/share/todo.txt";

	strcat(*home, todo_file_name);

	FILE *fp = fopen(*home, mode);

	// error
	if (fp == NULL) {
		fprintf(stdout, "cannot open ~/.local/share/todo.txt\n");
		fprintf(stdout, "maybe file is not created? try creating a task with --create, it should creates the file.\n");
		exit(1);

	}

	return(fp);
}
