#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t child_pid, grandchild_pid;
    int status;

    child_pid = fork();

    if (child_pid == 0) {
        grandchild_pid = fork();
        if (grandchild_pid == 0) {
            printf("I am the grandchild (%d)\n", getpid());
        } else {
            wait(&status);
            printf("I am the child (%d)\n", getpid());
        }
    } else {
        wait(&status);
        printf("I am the parent (%d)\n", getpid());
    }

    return 0;
}
