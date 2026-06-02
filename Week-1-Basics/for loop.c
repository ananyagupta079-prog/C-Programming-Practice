int main()
{
    int a, b, n;
    scanf("%d\n%d", &a, &b);

    for (n = a; n <= b; n++)
    {
        if (n >= 1 && n <= 9)
        {
            char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            printf("%s\n", words[n]);
        }
        else if (n > 9 && n % 2 == 0)
        {
            printf("even\n");
        }
        else if (n > 9 && n % 2 != 0)
        {
            printf("odd");
        }
    }

    return 0;
}