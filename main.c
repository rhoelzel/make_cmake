#include <stdio.h>
#include <stuff.h>
#include "mystatlib.h"

extern int function1();
extern int function2();
extern int function3();

extern int function5();

int main()
{
  printf("%d+%d+%d=%d\n",function1(),function2(), function3(),function1()+function2()+function3());extern int function1();
  printf("and four is %d\n",function4());
  printf("and five is %d\n",function5());
  printf("and six is %d\n",function6());
  return 0;
}
