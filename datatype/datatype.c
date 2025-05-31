#include <stdio.h>

int main() {
    int i=10 ;
   char c='A' ;
   long l=123456L ;
   float f=3.14 ;
   double d= 123.123;
   printf("int value is %d with size of %lu\n",  i, sizeof(i)); 
   printf("char : %c\n", c);
  printf("float: %f\n", f);
   printf("long : %ld\n", l);
   printf("double: %lf\n", d);
    return 0;
}
