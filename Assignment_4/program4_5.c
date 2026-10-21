/*

  Q.Accept an integer and determine whether it is divisible by 5 without leaving any remainder.


*/
//////////////////////////////////////////////////////////
//
//   function name:checkdivisibility
//   description  :check number is divisible 5 or not
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :20-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkdivisibility(int ino)
{

  if ((ino % 5) == 0)
  {
    printf("divisible by 5 ");
  }
  else
  {
    printf("not divisible by 5 ");
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  checkdivisibility(ivalue);

  return EXIT_SUCCESS;
}