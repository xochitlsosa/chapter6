#include<stdio.h>
#include<math.h>
int main()
{
   int a1, b1, a2, b2, a, b, squareDistance;

   printf("write two numbers as coordinates for the first point: ");
   scanf("%d %d",&a1, &b1);

   printf("write two numbers as coordinates for the second point: ");
   scanf("%d %d",&a2, &b2);

   a = (a2-a1);
   b = (b2-b1);

   squareDistance = sqrt(a*a + b*b);

   printf("Distance = %d", squareDistance);

   return 0;
}