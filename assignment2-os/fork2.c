#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        printf("Child is running\n");
        sleep(2);
        printf("Child finished\n");
    } else {
        wait(NULL);
        printf("Parent continues after child\n");
    }

    return 0;
}
