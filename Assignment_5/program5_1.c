/*

  Q. accept three intigers and determine the greatest number among them. the program must also work correctly when two or all three number are equal.

*/

//////////////////////////////////////////////////////////
//
//   function name:findgreatest
//   description  :display thre number and find greatest
//    input       :int,int,int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :20-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void findgreatest(int ino1, int ino2, int ino3)
{

  if (ino1 > ino2 && ino1 > ino3)
  {
    printf("%d is gretest\n", ino1);
  }

  else if (ino2 > ino1 && ino2 > ino3)
  {
    printf("%d is gretest\n", ino2);
  }

  else
  {
    printf("%d is gretest\n", ino3);
  }
}

int main()
{

  int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0;

  printf("enter three number:\n");
  scanf("%d %d %d", &ivalue1, &ivalue2, &ivalue3);

  findgreatest(ivalue1, ivalue2, ivalue3);

  return EXIT_SUCCESS;
}