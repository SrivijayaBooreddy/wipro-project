#include <stdio.h>
int main() 
{
  int x=101;
  int y=20;
  int z;
  z = ++x;
  y = ++z;
  ++y;
  printf("\nx=%d, y=%d, z=%d", x++, ++y, --z); 
  return 0;
}