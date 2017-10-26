#include <stdio.h>

void ToDo_Startup()
{
printf("Todo application\n"
    "====================\n"
    "Commands:\n"
    "-a\tAdds a new task\n"
    "-wr\tWrite current todos to file\n"
    "-rd\tRead todos from a file\n"
    "-l\tLists all the tasks\n"
    "-e\tEmpty the list\n"
    "-rm\tRemoves a task\n"
    "-c\tCompletes a task\n"
    "-p\tAdd priority to a task\n"
    "-lp\tLists all the tasks by priority\n");
}
