#include"todo.h"
#include<string.h>

/*
 * Todo is licensed under the GNU GPLv3 and the source code is 
 * avaiable at https://www.github.com/weebcyberpunk/todo 
 *
 * This program comes with absolutely no warranty. See the GNU GPLv3 at
 * https://www.gnu.org/licenses/gpl-3.0.html or the copy at the online
 * repository of Todo for details.
 */

/*
 * author GG weebcyberpunk@gmail.com
 * version 1.0.0
 * since Mar 5, 2022
 */
int main(int argv, char *argc[]) {

	if (argv == 1) {
		list_tasks();

	} else {
		// eval args
		if ((strcmp(argc[1], "--list") == 0) || (strcmp(argc[1], "-l") == 0)) list_tasks();
		else if ((strcmp(argc[1], "--create") == 0) || (strcmp(argc[1], "-c") == 0)) create_task(argc[2]);
		else if ((strcmp(argc[1], "--delete") == 0) || (strcmp(argc[1], "-d") == 0)) delete_task(argc[2]);
		else if (strcmp(argc[1], "--help") == 0) todo_help();
		else todo_help();

	}
	
	return(0);
}
