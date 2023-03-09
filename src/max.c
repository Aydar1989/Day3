#include <stdio.h>

int max(int a, int b);

    int  main() {
        int x, y, c, d;
        d = scanf("%d %d.%d", &x, &y, &c);
        int z = max(x,y);
           if (d != 2 )
               printf("n/a\n");
           else  
              printf("%d\n", z);
    }
        int max(int a, int b) { 
        int m = a;
            if(b>a)
               m = b;     
            return m;
    }
