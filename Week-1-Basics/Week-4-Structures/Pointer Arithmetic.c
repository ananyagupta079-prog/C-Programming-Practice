int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    ptr++; // INCREMENT
    printf("%d\t", *ptr);
    printf("%d", *(ptr + 2)); // ADDING AN INTEGER
    ptr--;                    // DECREMENT
    printf("%d", *ptr);
    int *s = &arr[0];
    int *e = &arr[4];
    printf("%d", e - s); // SUBREACTING TWO POINTERS
}