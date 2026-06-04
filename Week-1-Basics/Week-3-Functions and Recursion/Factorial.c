int fact(int num)
{
    int f = 1;
    for (int i = 0; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}
void main()
{
    int n;
    scanf("%d", &n);
    int f = fact(n);
    printf("%d", f);
    return 0;
}