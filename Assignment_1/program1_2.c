/*
    Q.Program to print 5 times "marvellous" on screen.
*/

/////////////////////////////////////////////////////
//
// function name:display.
//   description  :it is use display 5 time string
//    input       :int
//    output      :int,string
//    author      :maruti kondiba waghmode
//    date        :18-10-2026
//
//
/////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void display()
{

  int iNo = 0;
  for (iNo = 1; iNo <= 5; iNo++)
  {
    printf("marvellouse\n");
  }
}

int main()
{
  display();
  return EXIT_SUCCESS;
}