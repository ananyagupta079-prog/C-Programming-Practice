void fib(int n)
{
    int f = 0, s = 1, nt;
    if (n <= 0)
    {
        printf("please enter a positive value");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", f);
        nt = f + s;
        f = s;
        s = nt;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    fib(num);
}