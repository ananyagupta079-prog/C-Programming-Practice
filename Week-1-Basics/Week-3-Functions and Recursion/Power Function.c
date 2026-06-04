float power(float a, int b)
{
    int p = 1;
    for (int i = 1; i <= b; i++)
    {
        p = p * a;
    }
    return p;
}
int main()
{
    float x;
    int y;
    scanf("%f %d", &x, &y);
    float p = power(x, y);
    printf("%f", p);
}