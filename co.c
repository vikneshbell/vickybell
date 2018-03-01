#include <stdio.h>
 
void main()
{
  int a[100], i, s, c;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &s);
 
  printf("Enter %d integers\n", s);
 
  for (c = 0; c < s; c++)
    scanf("%d", &a[c]);
 
 
  printf("array elements are:");
 for (c = 0; c < s; c++)
 printf("index %d value %d",c,a[c]);
}
