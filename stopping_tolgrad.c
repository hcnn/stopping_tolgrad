#include "stopping_tolgrad.h"

/* true  = yes,stop
 * false = no,proceed */
bool stopping_tolgrad(const double* g, size_t n, double tolgrad)
{
    size_t i = 0;
    bool res = true; //assume it's true to terminate
    while(i<n){ //check if one grad is big enough to continue
        if(fabs(g[i]) >= tolgrad){
            res = false;
            break;
        }
        i++;
    }
    return res;
}
