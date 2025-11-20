#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        char* args[] = {"ls", NULL};
        execvp("ls", args);
    } else {
        wait(NULL);
        printf("Parent: exec is done\n");
    }

    return 0;
}
