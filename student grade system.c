/ * * * student grade system * * * /
#include <stdio.h>
int main() 
{
    int subjects,i,grade_points;
    char grade;
    float credits[10], total_credit_score = 0.0,sum= 0.0;
    printf("Enter the number of subjects:\n");
    scanf("%d",&subjects);
    for (i = 0; i < subjects; i++) 
    {
        printf("Enter grade for subject %d (S,A,B,C,D,E,F):\n", i + 1);
        scanf(" %c", &grade);
        printf("Enter credits for subject %d:\n", i + 1);
        scanf("%f", &credits[i]);
        if (grade == 'F') 
        {
            printf("Fail.\n");
            return 0; 
        }
        switch (grade) 
        {
            case 'S':
                grade_points = 10;
                break;
            case 'A':
                grade_points = 9;
                break;
            case 'B':
                grade_points = 8;
                break;
            case 'C':
                grade_points = 7;
                break;
            case 'D':
                grade_points = 6;
                break;
            case 'E':
                grade_points = 5;
                break;
            default:
                printf("Invalid grade entered! Please enter a grade from S to F.\n");
                break; 
        }
        sum+= credits[i];
        total_credit_score += grade_points * credits[i];
    }
    if (sum > 0) 
    {
        printf("Total Credit Score: %.1f\n",total_credit_score/sum);
    }
    return 0;
}
