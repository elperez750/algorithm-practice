//
// Created by elper on 10/14/2026.
//

#ifndef ALGORITHM_PRACTICE_C_THREE_JUGS_H
#define ALGORITHM_PRACTICE_C_THREE_JUGS_H

#define JUG_A 8
#define JUG_B 5
#define JUG_C 3
#define MIN(x, y) ((x) < (y) ? (x) : (y))
typedef struct {
    int water[3];
    int capacity[3];
} State;

void three_jugs_problem(State *initial);


#endif //ALGORITHM_PRACTICE_C_THREE_JUGS_H
