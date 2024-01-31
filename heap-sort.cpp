#include<stdio.h>
#include<time.h>
#include<queue>
using namespace std;

priority_queue<int> M_QUE;
FILE* in;
FILE* out;

void heap_sort(int n)
{
    while (!M_QUE.empty())
        M_QUE.pop();
}

int main()
{
    time_t start, end;
    in = fopen("input.txt", "r+");
    out = fopen("output.txt", "a+");

    int n, k, tt;
    fscanf(in, "%d", &n);
    fscanf(in, "%d", &k);
    time(&start);
    for (int i = 0; i < n; i++)
    {
        fscanf(in, "%d", &tt);
        M_QUE.push(tt);
    }

    
    heap_sort(n);
    time(&end);

    double TOTAL_TIME = (double)(end - start);
    fprintf(out,"Heap-sort -->      Sample size: %d\n                   Execution time: %lf\n\n", n, TOTAL_TIME);
    printf("  #time: %lf\n\n", TOTAL_TIME);
}