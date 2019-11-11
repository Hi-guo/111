#include<stdio.h>
int main(void)
{
    int grade;
    printf("Enter grade:\n");
    scanf("%d",&grade);
switch (grade)
{
case 0(grade<60):
    printf("E\n");
    break;
case 1(grade<70):
    printf("D\n");
    break;
case 2(grade<80):
    printf("C\n");
    break;
case 3(grade<90):
    printf("B\n");
    break;
case 4(grade<100):
    printf("A\n");
    break;
default:
printf("Illegal garde\n");
    break;
}
return 0;
}