
/*

  Q.accept an intiger from user and determine whether it is even or odd an even number is completly divisible by 2.

*/

//////////////////////////////////////////////////////////
//
//   function name:checkevenodd
//   description  :check the number is even or odd
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :20-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkevenodd(int ino)
{
  if ((ino % 2) == 0)
  {
    printf("it is even number.\n");
  }
  else
  {
    printf("it is odd number.\n");
  }
}

int main()
{

  int ivalue = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  checkevenodd(ivalue);

  return EXIT_SUCCESS;
}