#include<stdio.h>
int main()
{
    int i,n,Number;
    double attendance,assignments,classtest,midterm,termfinal,totalmarks,percentage;
    printf("~~~~~~~~~~ United International University ~~~~~~~~~~\n");
    printf("      Theory Course Grading System (CSE Department)\n");
    printf("=====================================================\n");

    printf("Enter the number of students:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Enter the marks for student %d\n",i);
        printf("Attendance marks out of 5:");
        scanf("%lf",&attendance);
        printf("Assignments marks out of 5:");
        scanf("%lf",&assignments);
        printf("Class test marks out of 20:");
        scanf("%lf",&classtest);
        printf("Midterm marks out of 30:");
        scanf("%lf",&midterm);
        printf("Term final marks out of 40:");
        scanf("%lf",&termfinal);
        totalmarks=attendance+assignments+classtest+midterm+termfinal;
        percentage=totalmarks;

        Number=percentage+2;

        switch(Number/4)
        {
        case 25:
        case 24:
        case 23:
            printf("Grade :A\n");
            break;
        case 22:
            printf("Grade :A-\n");
            break;
        case 21:
            printf("Grade :B+\n");
            break;
        case 20:
            printf("Grade :B\n");
            break;
        case 19:
            printf("Grade :B-\n");
            break;
        case 18:
            printf("Grade :C+\n");
            break;
        case 17:
            printf("Grade :C\n");
            break;
        case 16:
            printf("Grade :C-\n");
            break;
        case 15:
            printf("Grade :D+\n");
            break;
        case 14:
            if(percentage >= 55)
                printf("Grade :D\n");
            else
                printf("Grade :F\n");
            break;
        default:
            printf("Grade :F\n");
        }
    }
    return 0;
}
