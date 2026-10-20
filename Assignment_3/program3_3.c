/*

    Q.write a program which accept number from user and print even factor of that number

*/

//////////////////////////////////////////////////////////
//
//   function name:display
//   description  :display the even factors of that number
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :19-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void display(int ino)
{

  int icount = 0;

  if (ino <= 0)
  {
    ino = -ino;
  }

  for (icount = 1; icount <= ino; icount++)
  {
    if (((ino % icount) == 0) && ((icount % 2) == 0))
    {
      printf("%d\n", icount);
    }
  }
}
int main()
{
  int ivalue = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  display(ivalue);

  return EXIT_SUCCESS;
}