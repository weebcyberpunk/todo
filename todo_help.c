#include<stdio.h>
#include<stdlib.h>

/*
 * author GG weebcyberpunk@gmail.com
 * version 1.0.0
 * since Mar 09, 2022
 */
int todo_help() {

	// simply concatenate the help file to stdout
	
	FILE *fp;
	fp = fopen("/usr/share/todo-stupid/help.txt", "r");
	char c;

	if (fp == NULL) {
		fprintf(stdout, "cannot open help file in /usr/share/todo/help.txt\n");
		exit(1);

	}

	while ((c = fgetc(fp)) != EOF) printf("%c", c);
	
	return(0);
}
