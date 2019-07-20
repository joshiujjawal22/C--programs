
#include <stdio.h>
#include <math.h>

int
main ()
{
  int a, b, c;
  double Root1, Root2, D;
  printf ("Enter coefficient of ax^2+bx+c");
  scanf ("%d %d %d", &a, &b, &c);
  D = b * b - 4 * a * c;
  if (D > 0)
    printf ("Real and distinct roots");
  else if (D < 0)
    printf ("Imaginary Roots");
  else
    printf ("Equal Roots");
  Root1 = (-b + sqrt (D)) / 2 * a;
  Root2 = (-b - sqrt (D)) / 2 * a;
  printf ("%lf %lf", Root1, Root2);

  return 0;
}
