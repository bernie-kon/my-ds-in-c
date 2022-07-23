#ifndef _TIMER_H
#define _TIMER_H

#include <time.h>
#include <stdio.h>

#define GET_TICK() (long long int)clock()
#define DIFF_TICK(t1, t2) (long)((t2) - (t1))
#define DIFF_SECOND(t1, t2) ((double)((t2) - (t1)) / CLOCKS_PER_SEC)

#endif
