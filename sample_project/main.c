#include<stdio.h>
#include "libadd/add.h"
#include "libsub/sub.h"

int main()
{

#ifdef RELEASE_BUILD
    printf("add(5,10) = %d", add(5, 10));
    printf("sub(15,7) = %d", sub(15, 7));
#endif


#ifdef DEBUG_BUILD
    printf("Answer: add(5,10) = %d", add(5, 10));
    printf("Answer: sub(15,7) = %d", sub(15, 7));
#endif

    return 0;

}
