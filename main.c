#include"todo.h"
#include<string.h>

/*
 * Copyright 2022 © GG
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy of 
 * this software and associated documentation files (the “Software”), to deal 
 * in the Software without restriction, including without limitation the rights to 
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies 
 * of the Software, and to permit persons to whom the Software is furnished to do 
 * so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all 
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
 * SOFTWARE.
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
