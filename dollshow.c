In london, every year during dasara there will be a very grand doll show. People try to invent new new dolls of different varieties. The best sold doll's creator will be awarded with cash prize. So people broke their head to create dolls innovatively. Knowing this competition, Mr.Lokpaul tried to create a doll which sings  only when a even number is pressed and the number should be greater than zero and less than 100.

So write a  program to help Mr.Lokpaul to win.

Input Format:

Input Consists of Single Integer which Corresponds to Number pressed by the user to the doll.

Output Format:

Display whether the doll will Sing or not. Output consists of the string "Doll will sing" or "Invalid number".

[All text in bold corresponds to input and the rest corresponds to output.]

Sample Input and Output 1:

Press a number:

56

Doll will sing


Sample Input and Output 2:
Press a number:
21
Invalid number




#include<stdio.h.
int main()
{
  int a;
  printf("Press a number:\n");
  scanf("%d",&a);
  if((a>0 && a<100) && (a%2==0))
    printf("Doll will sing\n");
  else
    printf("Invalid number\n");
  return 0;
}
