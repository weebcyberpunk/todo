#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"todo.h"

int main(int argv, char *argc[]) {
	// getting todo.txt
	FILE *fp;
	char *home[] = { getenv("HOME"), NULL };
	char todo_file_name[25] = "/.local/share/todo.txt";

	strcat(*home, todo_file_name);
	fp = fopen(*home);

	// eval args
	if ((argc[1] == "--list") || (argc[1] == "-l")) list(fp);
	else if ((argc[1] == "--create") || (argc[1] == "-c")) create(argc[2], fp);
	else if ((argc[1] == "--delete") || (argc[1] == "-d")) delete(argc[2], fp);
	else list();
	
	return(0);
}
