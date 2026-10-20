

/*
  Q.Accept number from user and check whether is even or odd.
*/

//////////////////////////////////////////////////////////
//
//   function name:checkeven
//   description  :check even and odd number
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :19-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL checkeven(int ino)
{
  if ((ino % 2) == 0)
  {
    return true;
  }

  else
  {
    return false;
  }
}
int main()
{
  int ivalue = 0;
  BOOL bret = false;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  bret = checkeven(ivalue);

  if (bret == true)
  {
    printf("number even\n");
  }

  else
  {
    printf("number is odd\n");
  }
  return EXIT_SUCCESS;
}