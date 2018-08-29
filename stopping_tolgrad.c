#include "stopping_tolgrad.h"

/* true  = yes,stop
 * false = no,proceed */
bool stopping_tolgrad(double* g, int n, double tolgrad)
{
    int i = 0;
    bool res = true; //assume it's true to terminate
    while(res && i<n){ //check if one grad is big enough to continue
        if(fabs(g[i]) >= tolgrad){
            res = false;
            break;
        }
        i++;
    }
    return res;
}
