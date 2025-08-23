#include <stdio.h>
int total(int subject, float arr[], float *sum)
{
    for (int i = 0; i < subject; i++)
    {
        *sum = *sum + arr[i];
    }
    return *sum;
}
int main()
{
    int subject;
    printf("Enter the number of subjects = ");
    scanf("%d", &subject);
    int marks;
    printf("Enter Total Marks of one subject = ");
    scanf("%d", &marks);
    int fullmarks = subject * marks;
    printf("Marks is out of=%d\n", fullmarks);
    float arr[subject];
    for (int i = 0; i < subject; i++)
    {
        printf("Enter the marks of %d subject you have out of %d = ", i + 1, marks);
        scanf("%f", &arr[i]);
    }
    float sum = 0.00;
    float totalmarks = total(subject, arr, &sum);
    printf("Total Marks you have= %f\n", totalmarks);
    float avg = sum / subject;
    printf("Avrage = %f\n", avg);
    float persentage = (sum / fullmarks) * 100;
    printf("Persentage = %f %c\n", persentage, '%');
    float fpm = (fullmarks * 5) / 100; // five percent marks
    if (sum <= fullmarks && sum > fullmarks - fpm)
        printf("Result = Pass \nGrade = o");
    else if (sum <= fullmarks - fpm && sum > fullmarks - 2 * fpm)
        printf("Result = Pass \nGrade=A");
    else if (sum <= fullmarks - 2 * fpm && sum > fullmarks - fpm * 4)
        printf("Result = Pass \nGrade=B");
    else if (sum <= fullmarks - fpm * 4 && sum > fullmarks - fpm * 6)
        printf("Result = Pass \nGrade=C");
    else if (sum <= fullmarks - fpm * 6 && sum > fullmarks - fpm * 8)
        printf("Result = Pass \nGrade=D");
    else if (sum <= fullmarks - fpm * 8 && sum > fullmarks - fpm * 12)
        printf("Result = Pass \nGrade=E");
    else
        printf("Fail");

    return 0;
}