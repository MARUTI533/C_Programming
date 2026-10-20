/*

  Q.write a program which accept one number from user and print that number of even numbers on screen.

*/

//////////////////////////////////////////////////////////
//
//   function name:printeven
//   description  :accept one number from user and print that number of even number.
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :19-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void printeven(int ino)
{
  int icount = 0;

  if (ino <= 0)
  {
    return;
  }

  for (icount = 1; icount <= ino; icount++)
  {
    printf("%d\n", icount * 2);
  }
}
int main()
{
  int ivalue = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  printeven(ivalue);

  return EXIT_SUCCESS;
}