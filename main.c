#include"todo.h"
#include<string.h>

int main(int argv, char *argc[]) {
	// eval args
	if ((strcmp(argc[1], "--list") == 0) || (strmp(argc[1], "-l") == 0)) list_tasks();
	else if ((strcmp(argc[1], "--create") == 0) || (strcmp(argc[1], "-c"))) create_task(argc[2]);
	else if ((strcmp(argc[1], "--delete") == 0) || (strcmp(argc[1], "-d") == 0)) delete_task(argc[2]);
	else if (strcmp(argc[1], "--help") == 0) todo_help();
	else list_tasks();
	
	return(0);
}
