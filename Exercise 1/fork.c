#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int parent,a,b;

    parent = getpid();
    fork();
    a = getpid();
    if( a==parent )
    {
        printf("I am the parent: %d\n",parent);
    }
    else
    {
        fork();
        b = getpid();
        if( a==b )
            printf("I am the child: %d\n",a);
        else
            printf("I am the grandchild: %d\n",b);
    }
    return 0;
}