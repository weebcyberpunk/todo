#include<stdio.h>
#include<stdlib.h>

FILE *open_todo_file(char mode[]);

/*
 * author GG weebcyberpunk@gmail.com
 * version 1.0.0
 * since Mar 8, 2022
 */
int create_task(char task[]) {
    FILE *fp;
    fp = open_todo_file("a");

    for (unsigned long count = 0;; count++) {
        if (task[count] == '\0') break;
        if (task[count] == '\n') {
            fprintf(stderr, "Error: Task cannot contain line breaks.\n");
            exit(1);
        }
    }

    fprintf(fp, "%s\n", task);

    fclose(fp);
    
    return(0);
}
