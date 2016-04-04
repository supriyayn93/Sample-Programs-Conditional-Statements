A task is given to 3 persons to complete it within a particular time. If the person exceeds the time limit he will be disqualified. Only those who complete it within the given time limit is qualified. Among the qualified persons, the person who completes the task first will be rewarded.

Write a program to find the person who is rewarded.

 

Input Format:

First input corresponds to the Time limit for the task in hours.  Second,Third and Fourth Inputs correspond to the number of hours Taken by the first , second and third persons respectively to complete the task.

 

Output Format:

Display the person who Completes first.

[All text in bold corresponds to input and the rest corresponds to output]

 

Sample Input and Output 1:

Enter the Time Limit:

10

Enter the time taken by the first person:

5

Enter the time taken by the second person:

6

Enter the time taken by the third person:

4

Third person wins!!!

 

Sample Input and Output 2:

Enter the Time Limit:

5

Enter the time taken by the first person:

3

Enter the time taken by the second person:

6

Enter the time taken by the third person:

4

First person wins!!!

 

Sample Input and Output 3:

Enter the Time Limit:

4

Enter the time taken by the first person:

9

Enter the time taken by the second person:

6

Enter the time taken by the third person:

7

No person wins:-(



#include<stdio.h>
int main()
{
  int a,b,c,tl;
  printf("Enter the Time Limit:\n");
  scanf("%d",&tl);
  printf("Enter the time taken by the first person:\n");
  scanf("%d",&a);
  printf("Enter the time taken by the second person:\n");
  scanf("%d",&b);
  printf("Enter the time taken by the third person:\n");
  scanf("%d",&c);
  if((a<b) && (a<c) && (a<=tl))
    printf(First person wins!!!\n");
  else if((b<a) && (b<c) && (b<=tl))
    printf(Second person wins!!!\n");
  else if((c<a) && (c<b) && (c<=tl))
    printf(Third person wins!!!\n");
  else(a||b||c>tl)
    printf("No person wins:-(\n");
  return 0;
}
  
  
