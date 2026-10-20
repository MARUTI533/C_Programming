/*

  Q.write a program which accept number from user and print even factors of that number.

*/

//////////////////////////////////////////////////////////
//
//   function name:displayfactor
//   description  :display the factors
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :19-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void displayfactor(int ino)
{
  int icount = 0;

  if (ino <= 0)
  {
    ino = -ino;
  }

  for (icount = 1; icount <= ino / 2; icount++)
  {
    if ((ino % icount) == 0)
    {
      printf("%d\n", icount);
    }
  }
}
int main()
{
  int ivalue = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  displayfactor(ivalue);

  return EXIT_SUCCESS;
}