#include<stdio.h>
int main(void)
{
    int grade,score;
    printf("Enter grade:\n");
    scanf("%d%d",&grade&score);
    if (score<60)
    {
        grade=0;
    }
    else if(score<70)
    {
        grade=1;
    }
    else if(score<80)
    {
        grade=2;
    }
    else if(score<90)
    {
        grade=3;
    }
    else(score<100)
    {
        grade=4;
    }
switch (grade)
{
case 0:
    printf("E\n");
    break;
case 1:
    printf("D\n");
    break;
case 2:
    printf("C\n");
    break;
case 3:
    printf("B\n");
    break;
case 4:
    printf("A\n");
    break;
default:
printf("Illegal garde\n");
    break;
}
return 0;
}