


/*
    File Name  :CgpaCalculator.c
    purpose    :The primary purpose of the CGPA Calculator project is to provide students with an accessible,  user-friendly, and accurate tool for determining their
                CGPA. It addresses the challenges associated with manual CGPA calculations, offering a digital solution that simplifies the process and ensures correctness. 

*/


// SOURCE CODE:
                                             // CGPA CALCULATOR


#include <stdio.h>
#include <string.h>

int main() 
{
    printf("          -----------------\n");
    printf("          |CGPA CALCULATOR|  \n");
    printf("          -----------------\n");
    // Variable to store the total number of subjects
    int totalSubjects;
    printf("Enter the total number of subjects: ");
    scanf("%d", &totalSubjects);

    // Variables to store total credits and total grade points
    float totalCredits = 0.0;
    float totalGradePoints = 0.0;

    // Arrays to store subject names, credits, and grades

    char subjectNames[totalSubjects][50];
    float credits[totalSubjects];
    float grades[totalSubjects];

    // Input subject details for each subject

    for (int i = 0; i < totalSubjects; i++)
    {
        printf("Enter the name for subject %d: ", i + 1);
        scanf("%s", subjectNames[i]);

        printf("Enter the credits for subject %d: ", i + 1);
        scanf("%f", &credits[i]);

        printf("Enter the grade for subject %d: ", i + 1);
        scanf("%f", &grades[i]);

        // Update total credits and total grade points
        totalCredits += credits[i];
        totalGradePoints += credits[i] * grades[i];
    }

    // Calculate CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display CGPA
    printf("----------------------");

    printf("\n| Your CGPA is: %.2f |\n", cgpa);

    printf("----------------------");

    // Display the subject names and corresponding credits and grades
    printf("\n");
    printf("\nSubject Details:\n");
    for (int i = 0; i < totalSubjects; i++)
    {
        printf("Subject: %s, Credits: %.1f, Grade: %.1f\n", subjectNames[i], credits[i], grades[i]);
    }

    return 0;
}


