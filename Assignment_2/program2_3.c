/*

    Q.accept on number from user if number is less than 10 then print "hello" otherwise print "demo",

*/

//////////////////////////////////////////////////////////
//
//   function name:display
//   description  :number less than 10 then print hello otherwise print demo.
//   input        :int
//   output       :int
//   author       :maruti kondiba waghmode
//   date         :18-10-2026
//
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void display(int ino)
{
  if (ino < 10)
  {
    printf("hello\n");
  }
  else
  {
    printf("demo\n");
  }
}

int main()
{
  int inumber = 0;

  printf("enter the number:\n");
  scanf("%d", &inumber);

  display(inumber);

  return EXIT_SUCCESS;
}