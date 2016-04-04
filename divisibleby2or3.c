Write a  program that prints “yes” if the given integer is divisible by 2 or 3 and “no” otherwise.
 
Input Format:
Input consists of a single integer.
 
Output Format:
Output consists of a single line. Refer sample output for the format.
 
Sample Input 1 :
21
 
Sample Output 1 :
yes
 
Sample Input 2:
19
 
Sample Output 2:
no


#include<stdio.h>
int main()
{
  int a;
  scanf(%d",&a);
  if((a%2==0) || (a%3==0))
    printf("yes\n");
  else
    printf("no\n");
  return 0;
}
