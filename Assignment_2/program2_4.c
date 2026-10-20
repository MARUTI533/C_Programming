/*

    Q. Accept two numbers from user and display first number in second number of times.

*/

//////////////////////////////////////////////////////////
//
//   function name:display
//   description  :display first number in second number of time
//    input       :int,int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :19-10-2026
//
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void display(int ino, int ifrequency)
{
  int icnt = 0;

  if (ifrequency <= 0) // use updater
  {
    ifrequency = -ifrequency;
  }

  if (ifrequency <= 0)
  {

    return;
  }

  for (icnt = 1; icnt <= ifrequency; icnt++)
  {
    printf("%d\n", ino);
  }
}

int main()
{
  int ivalue = 0;
  int icount = 0;

  printf("enter the value:\n");
  scanf("%d", &ivalue);

  printf("enter the counter:\n");
  scanf("%d", &icount);

  display(ivalue, icount);

  return EXIT_SUCCESS;
}