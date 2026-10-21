/*

  Q. accept two intigers and determine which number is grater.if both number are equal display an appropriate message.

*/

//////////////////////////////////////////////////////////
//
//   function name:findgreater
//   description  :accept two number and check which number are grater or if both number are equal then print equal
//    input       :int,int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :20-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void findgreater(int ino1, int ino2)
{

  if (ino1 > ino2)
  {
    printf("%d is grater\n", ino1);
  }
  else if (ino1 < ino2)
  {
    printf("%d is grater\n", ino2);
  }

  else
  {
    printf("both number are equal\n");
  }
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0;

  printf("enter first number:\n");
  scanf("%d", &ivalue1);

  printf("enter second number:\n");
  scanf("%d", &ivalue2);

  findgreater(ivalue1, ivalue2);

  return EXIT_SUCCESS;
}