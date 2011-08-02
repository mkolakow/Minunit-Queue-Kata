#include <stdlib.h>
#include "queue.h"

Queue * queueInit( void )
{
    return malloc( sizeof( Queue ) );
}
