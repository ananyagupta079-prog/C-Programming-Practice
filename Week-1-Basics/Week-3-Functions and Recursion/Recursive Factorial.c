int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        fact(num * fact(num - 1));
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int f = fact(n);
    printf("%d", f);
}