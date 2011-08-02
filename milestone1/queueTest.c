#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define mu_assert(message, test) do { if (!(test)) return message; } while (0)

static char * testQueueCreation()
{
    Queue * q = queueInit();
    mu_assert( "testQueueCreation failed!, q == NULL", q != NULL );
    return 0;
}

int main( int argc, char ** argv )
{
    char * result = testQueueCreation();

    if( result != 0 )
        printf( "%s\n", result );
    else
        printf( "ALL TESTS PASSED, BOMB-DIGGITY!\n" );

    return 0;
}
