#ifndef RANDWALK_H
#define RANDWALK_H

void randwalk_init(uint64_t range, uint64_t *c1, uint64_t *c2);
uint64_t randwalk_shuffle(uint64_t c1, uint64_t c2, uint64_t m, uint64_t seed, uint32_t rounds, uint64_t range);
uint64_t randl(void);
#endif
