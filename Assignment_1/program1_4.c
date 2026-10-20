/*
  Q.accept one number and check waither is divisible by 5 or not
*/

/////////////////////////////////////////////////////
//
//   function name:check.
//   description  :divisible 5 or not
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :18-10-2026
//
//
/////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL check(int iNo)
{

  if ((iNo % 5) == 0)
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
  BOOL bRet = false;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  bRet = check(ivalue);

  if (bRet == true)
  {
    printf("number is divisible\n");
  }
  else
  {

    printf("number is notdivisible\n");
  }

  return EXIT_SUCCESS;
}