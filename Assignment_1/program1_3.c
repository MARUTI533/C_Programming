/*
  Q.program to print 5 to 1 number on screen.
*/

/////////////////////////////////////////////////////
//
//   function name:display.
//   description  :print number in reverce order
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :18-10-2026
//
//
/////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void dispay()

{
  int iNo = 0;

  iNo = 5;
  while (iNo >= 1)
  {
    printf("%d\n", iNo);
    iNo--;
  }
}

int main()
{
  dispay();
  return EXIT_SUCCESS;
}