struct student
{
    char name[20];
    int rno;
    float marks;
};
int main()
{
    struct student s[100];
    int i, n;
    printf("enter the number of records to enter");
    scanf("%d", &n);
    scanf("enter the records");
    for (i = 0; i < n; i++)
    {
        scanf("%s\n%d\n%f\n", s[i].name, s[i].rno, s[i].marks);
    }
    for (i = 0; i < n; i++)
    {
        printf("%s\n%d\n%f\n", s[i].name, s[i].rno, s[i].marks);
    }
}