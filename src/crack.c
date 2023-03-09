#include <stdio.h>



    int  main() {
        double  x, y, d, r;
        d = scanf("%lf %lf", &x, &y);
        r = x * x + y * y;
	       if (d == 2) { 
                  
                    if (r < 25)
                       printf("GOTCHA\n");
                    else 
                       printf("MISS\n");
              }
              else
                   printf("n/a\n");
    return 0;
    }
