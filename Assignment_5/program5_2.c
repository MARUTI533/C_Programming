/*

    Q.Accept a year and determine whether it is a leap year according to greagorian calender rules. a year is leap year if it is divisible by 400. or divisible by 4 but not by 100.

*/

//////////////////////////////////////////////////////////
//
//   function name:checkleapyear
//   description  :check the leap year
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :20-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkleapyear(int year)
{

  if ((year % 400) == 0)
  {
    printf("this is a leap year\n");
  }

  else if ((year % 100 == 0))
  {

    printf("this is not leap year\n");
  }

  else if ((year % 4 == 0))
  {

    printf("this is leap year\n");
  }
  else
  {
    printf("this is not leap year\n");
  }
}

int main()
{
  int ivalue = 0;
  printf("enter the year:\n");
  scanf("%d", &ivalue);

  checkleapyear(ivalue);

  return EXIT_SUCCESS;
}