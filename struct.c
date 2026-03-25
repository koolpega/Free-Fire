#include <stdio.h>

// Define structure
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Function to input student details
void inputStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // To read full name with spaces

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

// Function to display student details
void displayStudents(struct Student s[], int n) {
    printf("\n--- Student Details ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

// Main function
int main() {
    struct Student students[3];

    inputStudents(students, 3);
    displayStudents(students, 3);

    return 0;
}
