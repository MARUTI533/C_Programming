/*

  Q.Accept the number of electricity unit consumed and cal
    culate the total electricity bill using the following slab wise rates . each slab rate applied only to unit within that slab.

*/

//////////////////////////////////////////////////////////
//
//   function name:calculateelectricitybill
//   description  :calculate electricity bill
//    input       :int
//    output      :void
//    author      :maruti kondiba waghmode
//    date        :21-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void calculateelectricitybill(int iunits)
{
  float fbill = 0.0f;

  if (iunits <= 100)
  {
    fbill = iunits * 5;
    printf("bill =%f\n ", fbill);
  }
  else if (iunits <= 200)
  {
    fbill = 100 * 5 + (iunits - 100) * 7;
    printf("bill =%f\n ", fbill);
  }
  else if (iunits >= 200)
  {
    fbill = 100 * 5 + 100 * 7 + (iunits - 200) * 10;
    printf("bill =%f\n ", fbill);
  }
}
int main()
{
  int iunit = 0;

  printf("enter consumed unit:\n");
  scanf("%d", &iunit);

  calculateelectricitybill(iunit);

  return EXIT_SUCCESS;
}