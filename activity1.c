#include <stdio.h>
int main()
{
 int marks[5], i;
 int highest, lowest, passCount = 0;
 float sum = 0, average;
 printf("Enter marks of 5 students:\n");
 for(i = 0; i < 5; i++)
 {
 printf("Enter marks for Student %d: ", i + 1);
 scanf("%d", &marks[i]);
 while(marks[i] < 0 || marks[i] > 100)
 {
 printf("Invalid marks! Enter marks between 0 and 100: ");
 scanf("%d", &marks[i]);
 }
 }
 highest = marks[0];
 lowest = marks[0];
 for(i = 0; i < 5; i++)
 {
 sum = sum + marks[i];
 if(marks[i] > highest)
 highest = marks[i];
 if(marks[i] < lowest)
 lowest = marks[i];
 if(marks[i] >= 40)
 passCount++;
 }
 average = sum / 5;
 printf("\nAverage Marks = %.2f", average);
 printf("\nHighest Marks = %d", highest);
 printf("\nLowest Marks = %d", lowest);
 printf("\nNumber of Passed Students = %d", passCount);
 return 0;
}
