Ms. Sita, the faculty handling programming lab for you is very strict. Your seniors have told you that she will not allow you to enter the week's lab if you have not completed atleast half the number of problems given last week. Many of you didn't understand this statement and so they requested the good programmers from your batch to write a program to find whether a student will be allowed into a week's lab given the number of problems given last week and the number of problems solved by the student in that week.
Can you help in writing this program?
 
Input Format:
Input consists of 2 integers. The first integer corresponds to the number of problems given and the second integer corresponds to the number of problems solved.
 
Output Format:
Output consists of the string “IN” or “OUT”.
Refer sample input and output for further formatting specifications.
 
Sample Input and Output:
[All text in bold corresponds to input and the rest corresponds to output]
 
Enter the number of problems given
8
Enter the number of problems solved
3
OUT


Problem Requirements: 

Keyword	          Min Count	         Max Count


#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the number of problems given\n");
  scanf("%d",&a);
   printf("Enter the number of problems solved\n");
  scanf("%d",&b);
  if(b>(a/2))
    printf("IN\n");
  else
    printf("OUT\n");
  return 0;
}
  
