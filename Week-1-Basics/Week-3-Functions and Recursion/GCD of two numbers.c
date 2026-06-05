int main()
{
    int a, b;
    printf("enter the two numbers");
    scanf("%d %d", &a, &b);
    gcd(a, b);
}
int gcd(int x, int y)
{
    if (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    printf("%d", x);
}