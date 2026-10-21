/*

  Q.Accept three integer values representing the leangths the sides of triagle determine whether they can from a valid trigle.all sides must be positive and the sum of any two sides must be greater than the third side.

*/

//////////////////////////////////////////////////////////
//
//   function name:checktriangle
//   description  :check valid triangle
//    input       :int
//    output      :int
//    author      :maruti kondiba waghmode
//    date        :21-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checktriangle(int iside1, int iside2, int iside3)
{
  if (iside1 > 0 && iside2 > 0 && iside3 > 0 && iside1 + iside2 > iside3 && iside3 + iside1 > iside2 && iside2 + iside3 > iside1)
  {
    printf("valid triangle\n");
  }
  else
  {
    printf("invalid triangle\n");
  }
}

int main()
{
  int iside1 = 0, iside2 = 0, iside3 = 0;

  printf("enter three sides:\n");
  scanf("%d %d %d", &iside1, &iside2, &iside3);

  checktriangle(iside1, iside2, iside3);
  return EXIT_SUCCESS;
}