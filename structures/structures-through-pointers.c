#include <stdio.h>

struct student {
    int r_no;
    char name[20];
    char cource[20];
    int fees;
};

int main()
{
    struct student stud1, *ptr_stud1;
    ptr_stud1 = &stud1;
    printf("\n Enter the details of the student: ");
    printf("\n Enter the Roll Number = ");
    scanf("%d", &ptr_stud1->r_no);
    printf("Enter the name = ");
    gets(ptr_stud1->name);
    printf("\n Enter the Course = ");
    gets(ptr_stud1->cource);
    printf("\n Enter the Fees = ");
    scanf("%d", &ptr_stud1->fees);
    printf("\n DETAILS OF THE STUDENT");
    printf("\n Roll Number = %d", ptr_stud1->r_no);
    printf("\n Name = %s", ptr_stud1->name);
    printf("\n Course = %s", ptr_stud1->cource);
    printf("\n Fees = %d", ptr_stud1->fees);

    return 0;
}