/*

  Q.accept one number from user and print that number of * on screen.

*/

/////////////////////////////////////////////////////
//
//   function name:accept.
//   description  :accept number from user and print *
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :18-10-2026
//
//
/////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void accept(int ino)
{
  int icnt = 0;

  for (icnt = 1; icnt <= ino; icnt++)
  {
    printf("*\n ");
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  accept(ivalue);

  return EXIT_SUCCESS;
}