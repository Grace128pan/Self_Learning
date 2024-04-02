#include <stdio.h>
#include <stdbool.h>
#include <pthread.h>

// Global variables
int available_tickets = 1;
pthread_mutex_t lock;

// Function to simulate buying tickets
void* buy_ticket(void* arg) {
    int user_id = *((int*) arg);

    // Lock the mutex to ensure mutual exclusion
    pthread_mutex_lock(&lock);

    // Check if tickets are available
    if (available_tickets > 0) {
        printf("User %d bought a ticket.\n", user_id);
        available_tickets--;
    } else {
        printf("User %d couldn't buy a ticket. No tickets available.\n", user_id);
    }

    // Unlock the mutex to release the lock
    pthread_mutex_unlock(&lock);

    return NULL;
}

int main() {
    // Initialize mutex lock
    pthread_mutex_init(&lock, NULL);

    // Create threads for multiple users
    pthread_t user_threads[5]; // Assuming 5 users
    int user_ids[] = {1, 2, 3, 4, 5}; // User IDs

    for (int i = 0; i < 5; i++) {
        pthread_create(&user_threads[i], NULL, buy_ticket, &user_ids[i]);
    }

    // Join threads to wait for their completion
    for (int i = 0; i < 5; i++) {
        pthread_join(user_threads[i], NULL);
    }

    // Destroy mutex lock
    pthread_mutex_destroy(&lock);

    return 0;
}
