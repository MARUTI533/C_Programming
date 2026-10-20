/*
    Q.program to divide two number.
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////
//   function name:divide.
//   description  :it is use to perform division of two     number.
//    input       :int,int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :18-10-2026
//
////////////////////////////////////////////////////////////

int Devide(int iNo1, int iNo2)
{

  int iAns = 0;

  if (iNo2 == 0)
  {
    return EXIT_FAILURE;
  }

  iAns = iNo1 / iNo2;

  return iAns;
}

int main()
{

  int iValue1 = 15, iValue2 = 5;
  int iRet = 0;

  iRet = Devide(iValue1, iValue2);

  printf("devision is :%d\n", iRet);

  return EXIT_SUCCESS;
}