Write a  program that accepts a character as input and checks whether it is an uppercase letter or lowercase letter or neither.
 
Input Format:
Input consists of a single character.
 
Output Format:
Output consists of a single line. Refer sample output for the format.
 
Sample Input 1 :
c
 
Sample Output 1 :
c is lowercase letter
 
Sample Input 2:
A
 
Sample Output 2:
A is uppercase letter
 
Sample Input 3:
5
 
Sample Output 2:
5 is neither an uppercase or lowercase letter


#include<stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
    printf("%c is upperrcase letter\n",ch);
  else if(ch>='a' && ch<='z')
    printf("%c is lowercase letter\n",ch);
  else
    printf("%c is neither an uppercase or lowercase letter\n",ch);
  return 0;
}
