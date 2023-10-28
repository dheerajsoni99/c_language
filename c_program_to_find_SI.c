#include <stdio.h>
int main() {
  int p,r,t,SI;
printf("enter principle amount \n");
scanf("%d",&p);
printf( " enter rate of interest : \n");
scanf("%d",&r);
printf("enter time (years)");
scanf("%d",&t);
SI=p*r*t;
printf("the simple interest is : %d ");
return 0;
}
