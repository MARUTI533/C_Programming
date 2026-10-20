/*

 Q.accept one number from user and print that number of * on screen .

*/

//////////////////////////////////////////////////////////
//
//   function name:display
//   description  :accept number from user and print *
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :18-10-2026
//
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void display(int ino)
{

  if (ino <= 0)
  {
    ino = -ino;
  }

  while (ino >= 0)
  {

    printf("*\n");
    ino--;
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