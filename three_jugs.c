#include <stdio.h>
#include <stdbool.h>
#include "three_jugs.h"
// Ths will be our struct



State print_possible_moves(State *moves) {
    for (int i =0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            printf("This is the current move at %d: %d \n", i,  moves[i].water[j]);
        }
    }
}

// This function will generate all of the possible moves
int generate_paths(const State *current, State moves[6]) {
    /*Rules for the logic. If the current position we are in can fill the one of the other two vases, we can make the move
   *Another rule is if the current that we are looking at can be emptied, we can make the move
   */
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            State next = *current;

            if (i == j) {
                continue;
            }
            // This will take the amount in the current space, and compare against capacity minus what is filled
            int amount = MIN(next.water[i], (next.capacity[j] - next.water[j]));
            next.water[i] -= amount;
            next.water[j] += amount;

            moves[count] = next;
            count++;
            printf("printing the element at this index: %d\n", current->capacity[i]);
        }
    }
    print_possible_moves(moves);




}


void three_jugs_problem(State *initial) {
    //
    // For this problem, the dimensions will by 9 * 6 * 4
    int visited[JUG_A + 1][JUG_B + 1][JUG_C + 1]= {false};


    // This will be the queue that will be of type state
    State queue[100];
    int front = 0;
    int rear = 0;

    //
    queue[rear++] = *initial;




    // Time to finally get coding and into the logic.

    // Lets detail the logic
    /*
     *Step one: we will write a for loop that runs while we still have items in our queue
     *Step two: We will check to see if the new routes we want to go to have been visited
     *Rules for the logic. If the current position we are in can fill the one of the other two vases, we can make the move
     *Another rule is if the current that we are looking at can be emptied, we can make the move
     *
     */


    State moves[6];
    State *current = initial;
    while (front != rear) {
        // Down here is where we check if the moves are valid or not
        generate_paths(current, moves);
        for (int i =0; i < 6; i++) {
            int eight_l = moves[i].water[0];
            int five_l = moves[i].water[1];
            int three_l = moves[i].water[2];
            if (visited[eight_l][five_l][three_l] == false) {
                queue[rear++] = moves[i];
            }
            for (int j = 0; j < 3; j++) {
                printf("This is the current move at %d: %d \n", i,  moves[i].water[j]);

            }
        }
        current = &queue[front++];

    }

};

