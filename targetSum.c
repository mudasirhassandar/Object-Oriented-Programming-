#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Your array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int target;
    printf("\nEnter Target sum = ");
    scanf("%d", &target);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == target)
            {
                printf("[%d ,%d] and [%d]\n", arr[i], arr[j], target);
                flag = true;
            }
            else
            {
                flag = false;
            }
        }
    }
    if (flag == false)
    {
        printf("THERE IS NO PAIRS IN YOUR ARRAY WHOES SUM IS EQUAL TO TARGET SUM.....");
    }
    return 0;
}