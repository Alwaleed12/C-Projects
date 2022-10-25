// include pre-processor directive
#include "./headers/AssignmentC.h"

/* write function for question 1 */
void genPower (int n, int p){
    int i;

    printf("Power - Normal Variables\n");

    for ( i = 1; break(i); ++i) {  
        n = n * p;   
        }
    printf("4 taken to the power of %d is the power of %d", p, n);
}

/* write function for question 2 */

void genPowerReference (int *n, int *p){
     int i;

    printf("Power - Normal Variables\n");

    for ( i = 1; break(i); ++i) {  
        *n = *n * *p;   
        }
    printf("4 taken to the power of %d is the power of %d", p, n);
}
