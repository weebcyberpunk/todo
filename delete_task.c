#include<stdio.h>
#include<stdlib.h>

FILE *open_todo_file(char mode[]);

/*
 * author GG weebcyberpunk@gmail.com
 * version 0.0.0
 * since Mar 08, 2022
 */
int delete_task(char task[]) {

	FILE *fp;
	fp = open_todo_file("r");

	int task_num = atoi(task);
	int task_count = 1;

	// get file size
	fseek(fp, 0, SEEK_END);
	int todo_size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	// put file in buffer
	char *buf_file;	
	buf_file = malloc(todo_size);
	int count = 0;
	int task_exist = 0;
	char c;
	for (;;) {
		c = getc(fp);

		if (c == EOF) {
			buf_file[count] = '\0';
			break;

		}

		if (task_count != task_num) {
			buf_file[count] = c;
			count++;

		} else if (task_exist == 0) {
			task_exist = 1;

		}

		if (c == '\n') task_count++;

	}

	// if task existed, ovewrite file with buffer
	if (task_exist) {

		freopen(NULL, "w", fp);

		for (count = 0;; count++) {

			if (buf_file[count] == '\0') break;
			fputc(buf_file[count], fp);

		}
	}
		
	fclose(fp);

	if (task_exist == 0) {
		fprintf(stderr, "task not found.");
		exit(1);

	}
	
	return(0);
}
