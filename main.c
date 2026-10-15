
#include <stdio.h>
#include "insertion_sort.h"
#include <time.h>
#include "swap.h"
#include "three_jugs.h"


int main(void) {

    State initial = {
        {8, 0, 0},
        {JUG_A, JUG_B, JUG_C},
    };


    three_jugs_problem(&initial);


    return 0;
}