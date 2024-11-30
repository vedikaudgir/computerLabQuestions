#include <stdio.h>

struct studentData
{
    char studentName[30];
    char department[5];
    char course[10];
    int MISnumber;
    int joiningYear;
};

void readStudentData(struct studentData structarray[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\n\nEnter deatils of student %d", i + 1);

        printf("\n\nEnter Student Name - ");
        getchar();
        scanf("%[^\n]", structarray[i].studentName);

        printf("\nEnter MIS Nnmber - ");
        getchar();
        scanf("%d", &structarray[i].MISnumber);

        printf("\nEnter department - ");
        getchar();
        scanf("%[^\n]", structarray[i].department);

        printf("\nEnter course - ");
        getchar();
        scanf("%[^\n]", structarray[i].course);

        printf("\nEnter joining year - ");
        scanf("%d", &structarray[i].joiningYear);
    }
}

void printByYear(struct studentData structarray[5], int findYear)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (structarray[i].joiningYear == findYear)
        {
            printf("\n\nData of Student %d", i + 1);

            printf("\n\n Student Name - %s", structarray[i].studentName);
            printf("\n MIS Nnmber - %d", structarray[i].MISnumber);
            printf("\n department - %s", structarray[i].department);
            printf("\n course - %s", structarray[i].course);
            printf("\n joining year - %d", structarray[i].joiningYear);
        }
    }
}
void main()
{
    struct studentData a[5];
    readStudentData(a);
    int year;
    printf("Enter year to search");
    scanf("%d", &year);

    printByYear(a, year);
}