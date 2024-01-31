#include<stdio.h>
#include<time.h>

int M_ARR[1000007];
FILE* in;
FILE* out;

void bubble_sort(int n)
{
    int swaped = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (M_ARR[j] < M_ARR[j-1])
            {
                swaped = 1;
                int temp = M_ARR[j];
                M_ARR[j] = M_ARR[j-1];
                M_ARR[j-1] = temp;
            }
        }
        if (!swaped) 
            break;
    }
}

int main()
{
    time_t start, end;
    in = fopen("input.txt", "r+");
    out = fopen("output.txt", "a+");

    int n, k;
    fscanf(in, "%d", &n);
    fscanf(in, "%d", &k);
    for (int i = 0; i < n; i++)
    {
        fscanf(in, "%d", &M_ARR[i]);
    }

    time(&start);
    bubble_sort(n);
    time(&end);

    double TOTAL_TIME = (double)(end - start);
    fprintf(out,"Bubble-sort -->    Sample size: %d\n                   Execution time: %lf\n\n", n, TOTAL_TIME);
    printf("  #time: %lf\n\n", TOTAL_TIME);

}