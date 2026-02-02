#include <stdio.h>
int percentage(int m, int s, int c);
int main()
{
    int m, s, c;
    printf("Enter marks of Mathematics, Science and Computer Science: ");
    scanf("%d %d %d", &m, &s, &c);
    int percent = percentage(m, s, c);
    printf("Percentage: %d%%\n", percent);
    return 0;
}

int percentage(int m, int s, int c)
{
    int total = m + s + c;
    int percent = (total / 300.0) * 100;
    return percent;
}