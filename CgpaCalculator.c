/*   
    Mini Project Name : CGPA CALCULATOR
    Team members:
     1)Y.Aswini kumar-RA2311003011159
     2)B.Lokesh Praman-RA2311003011220
*/


/*
    File Name  :CgpaCalculator.c
    purpose    :The primary purpose of the CGPA Calculator project is to provide students with an accessible,  user-friendly, and accurate tool for determining their
                CGPA. It addresses the challenges associated with manual CGPA calculations, offering a digital solution that simplifies the process and ensures correctness. 
    Author name:Y.Aswini kumar
                B.Lokesh praman
    created by  :Y.Aswini kumar
                B.Lokesh praman
    updated on  :17/11/2023
*/

#include <stdio.h>
#include <string.h>

int main() {
    int totalSubjects;
    printf("Enter the total number of subjects: ");
    scanf("%d", &totalSubjects);

    float totalCredits = 0.0;
    float totalGradePoints = 0.0;

    // Arrays to store subject names, credits, and grades
    char subjectNames[totalSubjects][50];
    float credits[totalSubjects];
    float grades[totalSubjects];

    // Input subject details for each subject
    for (int i = 0; i < totalSubjects; i++) {
        printf("Enter the name for subject %d: ", i + 1);
        scanf("%s", subjectNames[i]);

        printf("Enter the credits for subject %d: ", i + 1);
        scanf("%f", &credits[i]);

        printf("Enter the grade for subject %d: ", i + 1);
        scanf("%f", &grades[i]);

        totalCredits += credits[i];
        totalGradePoints += credits[i] * grades[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    printf("Your CGPA is: %.2f\n", cgpa);

    // Display the subject names and corresponding credits and grades
    printf("Subject Details:\n");
    for (int i = 0; i < totalSubjects; i++) {
        printf("Subject: %s, Credits: %.1f, Grade: %.1f\n", subjectNames[i], credits[i], grades[i]);
    }

    return 0;
}
