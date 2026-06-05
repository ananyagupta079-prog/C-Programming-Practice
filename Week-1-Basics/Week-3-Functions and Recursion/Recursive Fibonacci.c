int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int num;
    printf("enter the limit");
    scanf("%d", &num);
    int f = fib(num);
    printf("%d", f);
}