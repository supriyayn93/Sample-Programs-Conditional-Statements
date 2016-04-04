When parents take their kids for Engineering Counselling, they always go with apreconceived notion that older the college, better will be the quality of education offered. There is a help desk in front of the counselling hall to tell out of the colleges in which seats are available, which college is the older one.
Nowadays, engineering counselling goes on for a month and the help desk needs to function on all days. So the Dean, Admissions decided to automate this task. Can you help him in this task?
Given the year of establishment of 2 colleges, write a  program to determine which college is the older one.
 
Input Format:
Input consists of 2 integers. The first integer corresponds to the year of establishment of college 1 and the second integer corresponds to the year of establishment of college 2.
 
Output Format:
Output consists of the string “College 1 is older” or “College 2 is older”.
Refer sample input and output for further formatting specifications.
 
Sample Input and Output:
[All text in bold corresponds to input and the rest corresponds to output]
 
Enter the year of establishment of college 1
2002
Enter the year of establishment of college 2
2008
College 1 is older
 


Problem Requirements: 

Keyword	   Min Count   	Max Count
if	        1	           1


#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the year of establishment of college 1\n");
  scanf("%d",&a);
  printf("Enter the year of establishment of college 2\n");
  scanf("%d",&b);
  if(a<b)
    printf("College 1 is older\n");
  else
    printf("College 1 is older\n");
  return 0;
}
  
  
