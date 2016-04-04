Write a program to find whether a given number is divisible by both 7 and 3.
 
Input Format:
Input consists of a single integer.
 
Output Format:
Output consists of a single line. Refer sample output for the format.
 
Sample Input 1:
21
 
Sample Output 1 :
21 is divisible by both 7 and 3
 
Sample Input 2:
18
 
Sample Output 2:
18 is not divisible by both 7 and 3




#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if((a%3==0) && (a%7==0))
    printf("%d is divisible by both 7 and 3\n",a);
  else
    printf("%d is not divisible by both 7 and 3\n",a);
  return 0;
}
