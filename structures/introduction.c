#include <stdio.h>
#include <stdlib.h>

struct student
{
    int r_no;
    char name[20];
    char course[20];
    float fees;
};

struct student2
{
    int r_no;
    char name[20];
    char course[20];
    float fees;
} stud1, stud2;

typedef struct student3
{
    int r_no;
    char name[20];
    char course[20];
    float fees;
};

struct student4
{
    int r_no;
    char name[20];
    char course[20];
    float fees;
} stud3 = {01, "Peter", "BCA", 45000};

int main()
{
    
    return 0;
}