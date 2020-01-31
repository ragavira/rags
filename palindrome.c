#include <stdio.h>
#include <string.h>
void main()
{
  char a[10], b[10];
  scanf("%c",&a);

  strcpy(b, a);  
  strrev(b);  

  if (strcmp(a, b) == 0)  
    printf("yes");
  else
    printf("no");

  return 0;
}
