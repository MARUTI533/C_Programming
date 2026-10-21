/*

    Q.check whether a number is positive or not.

*/

//////////////////////////////////////////////////////////
//
//   function name:checknumber
//   description  :check the number is positive or nigative
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :20-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checknumber(int ino)
{
  if (ino > 0)
  {
    printf("number is positive.\n");
  }

  else if (ino < 0)
  {
    printf("number is nigative.\n");
  }
  else
  {
    printf("zero.\n");
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  checknumber(ivalue);

  return EXIT_SUCCESS;
}