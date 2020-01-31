#include <stdio.h>
#include <string.h>
void main()
{
  char a[10], b[10];

  printf("Enter a string to check if it's a palindrome\n");
  scanf("%c",&a);

  strcpy(b, a);  
  strrev(b);  

  if (strcmp(a, b) == 0)  
    printf("The string is a palindrome.\n");
  else
    printf("The string isn't a palindrome.\n");

  return 0;
}
