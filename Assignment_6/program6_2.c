/*

  Q.A student is eligible for admission if the  student marks at least 60 and age is at least 17 year . accept both values and determine eligibility. negative age or marks outside 0-100 must be treated as invalid input.

*/

//////////////////////////////////////////////////////////
//
//   function name:checkadmission
//   description  :check admission eligibility
//    input       :int, float
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :21-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkadmission(int age, float marks)
{
  if ((age < 0) || (marks < 0) || (marks > 100))
  {
    printf("invalid input\n");
  }
  else if ((age >= 17) && (marks >= 60))
  {
    printf("eligible for admission\n");
  }

  else
  {
    printf("not eligible\n");
  }
}

int main()
{
  int iage = 0;
  float fmarks = 0.0f;

  printf("enter age and marks:\n");
  scanf("%d %f", &iage, &fmarks);

  checkadmission(iage, fmarks);
  return EXIT_SUCCESS;
}