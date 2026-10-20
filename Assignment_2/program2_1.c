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
  int icnt = 0;

  icnt = 1;

  if (ino <= 0) // using updater
  {

    ino = -ino;
  }

  while (icnt <= ino)
  {

    printf("*\n");
    icnt++;
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