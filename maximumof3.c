Write a C program to find the maximum of 3 numbers.
 
Input Format:
Input consists of 3 lines. Each line consists of an integer.
 
Output Format:
Output consists of a single line. Refer sample output for the format.
 
Sample Input :
3
5
1
 
Sample Output :
5 is the maximum number


#include<stdio.h>
int main()
 {
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if((a>b) && (a>c))
     printf("%d is the maximum number\n",a);
   else if((b>a) && (b>c))
     printf("%d is the maximum number\n",b);
  else((c>a) && (c>b))
     printf("%d is the maximum number\n",c);
  return 0;
}
