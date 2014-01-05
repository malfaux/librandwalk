#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include "randwalk.h"

int main(int argc, char **argv)
{
    int i;
    int out[31];
    int x[31] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int dimlen = 31;
    uint64_t c1, c2;
    uint64_t seed = randl();
    uint32_t rounds = 2;
    randwalk_init(dimlen, &c1, &c2);
    for (i = 0; i < dimlen; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    for(i = 0; i < dimlen; i++) {
        out[i] = randwalk_shuffle(c1, c2, i, seed, rounds, dimlen);
        printf("%d ", out[i]);
    }
    printf("\n");
    return 0;
}
