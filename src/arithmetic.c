#include <stdio.h>

int main() { 
    double a, b;
    scanf("%lf %lf", &a, &b);
    if (b!=0) {
    printf("%.0lf %.0lf %.0lf %.0lf\n", a+b, a-b, a*b, a/b);
 } else {
    printf("%.0lf %.0lf %.0lf n/a\n", a+b, a-b, a*b);
 }
    return 0;
}
