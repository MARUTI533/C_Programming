/*

    Q.accept the age of person and determine whether the person is eligible to vote. A person mustt be at least 18 year old to vote. a negative age shoude be considered invalid.

*/

//////////////////////////////////////////////////////////
//
//   function name:checkvotingeligibility
//   description  :check voting eligiblity and check invalid age
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :20-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkvotineligibility(int age)
{

  if (age > 18)
  {
    printf("eligible to voting \n");
  }
  else if (age < 0)
  {
    printf("invalid age\n");
  }
  else
  {
    printf("not eligible for voting\n");
  }
}

int main()
{

  int ivalue = 0;

  printf("enter your age:\n");
  scanf("%d", &ivalue);

  checkvotineligibility(ivalue);

  return EXIT_SUCCESS;
}