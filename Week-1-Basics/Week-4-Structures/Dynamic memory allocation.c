int main()
{
    int n = 5;
    int *arr;
    int i;
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int *carr = (int *)calloc(n, sizeof(int));
    printf("%d", carr[0]);
    free(carr);
    int *rarr = (int *)realloc(arr, 10, sizeof(int));
    for (i = 5; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
}