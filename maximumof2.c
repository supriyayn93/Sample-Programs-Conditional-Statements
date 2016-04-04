Write a program to find the maximum of 2 numbers.
 
Input Format:
Input consists of 2 lines. Each line consists of an integer.
 
Output Format:
Output consists of a single line. Refer sample output for the format.
 
Sample Input 1:
3
5
 
Sample Output 1:
5 is the maximum number
 
 
#include<stdio.h>
int main()
  {
     int a,b;
     scanf("%d %d",&a,&b);
     if(a>b)
      printf("%d is the maximum number\n",a);
    else
      printf("%d is the maximum number\n",b);
    return 0;
  }
