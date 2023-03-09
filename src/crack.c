#include <stdio.h>



    int  main() {
        double  x, y, d, r;
        d = scanf("%lf %lf", &x, &y);
        r = x * x + y * y;
              if (d == 1 ) { 
                  printf("n/a\n");
                    if (r < 25)
                       printf("GOTCHA");
                    else 
                       printf("MISS");
              }
              else
                   printf("%lf\n", y);
    return 0;
    }
