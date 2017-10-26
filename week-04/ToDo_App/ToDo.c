#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "ToDo_Fun.h"

main()
{

    ToDo_Startup();

    char user_input[] = "";

    while (strcmp(user_input, "exit") != 0) {
        gets(user_input);

    if (strcmp(user_input, "-a") == 0) {
        Add_Task();
        }


    }

    puts(user_input);

    return 0;
}
