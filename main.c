#include <stdio.h>
#include <stdlib.h>

  #include <stdio.h>
 int main(void )
 {
 float a , b;
 a = 0;
 b = -1;
 while (a <= 100)
 {
 if ((a > 98.6) && (b < 98.6))
 {
 printf ("%6.2 f degrees F = %6.2f degrees C\n",
        98.6,(98.6-32.0) * 5.0 / 9.0);
 }
 printf ("%6.2 f degrees F = %6.2f degrees C\n",
        a, (a-32.0) * 5.0 / 9.0);
 b = a;
 a = a + 10;
 }
 return 0;
 }

