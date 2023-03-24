#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t mutex;
int cnt = 0;
#define MAX_NO_OF_THREADS 4
#define MAX_TIMES_TO_INCREMENT 5
typedef struct arg_data {
    int thread_number;
} arg_data;

void* thread(void* arg) {
    arg_data* current_thread_data = (arg_data*)arg;
    //start of critical section
    printf("\nThread %d entering critical section...\n", current_thread_data->thread_number);
    int local_cnt = cnt;
    for (int i=0; i<MAX_TIMES_TO_INCREMENT; i++) {
        local_cnt++;
        printf("\nThread %d Value: %d\n", current_thread_data->thread_number, local_cnt);
    }
    cnt = local_cnt;
    printf("\nThread %d exiting critical section...\n", current_thread_data->thread_number);
    //end of critical section
    return NULL;
}