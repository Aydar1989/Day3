#include <stdio.h>
#include <math.h>

int max(int a, int b);

    int  main() {
        double  x, y, d;
        d = scanf("%lf", &x);
        y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1/3) - 1e3) * x + 3) / (x * x / 2) - x * pow( (10 + x), (2/x)) - 1.01 ;
              if (d != 1 )
                   printf("n/a\n");
              else
                   printf("%.1lf\n", y);
    return 0;
    }
