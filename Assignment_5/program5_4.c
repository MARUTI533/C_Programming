/*

    Q.Accept an intiger and determine whether it is divisible by both 3 and 5,only 3,only 5 or or neither.

*/

//////////////////////////////////////////////////////////
//
//   function name:checkmultipledivisibility
//   description  :check divisibility
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :21-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkmultipledivisibility(int ino)
{

  if (((ino % 5) == 0) && ((ino % 3) == 0))
  {
    printf("divisible by both\n");
  }

  else if ((ino % 3) == 0)
  {
    printf("divisible by 3 only\n");
  }
  else if ((ino % 5) == 0)
  {
    printf("divisible by 5 only\n");
  }
  else
  {
    printf("not divisible by either\n");
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  checkmultipledivisibility(ivalue);

  return EXIT_SUCCESS;
}