#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int marks;
};

int main() {
    FILE *fp;
    struct student s;
    int choice;

    while(1) {
        printf("\n1. Add Student\n2. View Students\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                fp = fopen("students.txt", "a");

                printf("Enter Name: ");
                scanf("%s", s.name);

                printf("Enter Marks: ");
                scanf("%d", &s.marks);

                fprintf(fp, "%s %d\n", s.name, s.marks);
                fclose(fp);

                printf("Student Saved!\n");
                break;

            case 2:
                fp = fopen("students.txt", "r");

                printf("\n--- Student List ---\n");
                while(fscanf(fp, "%s %d", s.name, &s.marks) != EOF) {
                    printf("Name: %s | Marks: %d\n", s.name, s.marks);
                }

                fclose(fp);
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}