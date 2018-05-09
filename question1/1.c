#include<stdio.h>
#include<stdlib.h>

void ranges(int x[], int npts, int *max_ptr, int *min_ptr);


int main()
{


int min;
int max;

int npts1,npts2,npts3;

int x1[5] = {3,8,1,6,2};
int x2[6] = {6,9,-2,1,4,5};
int x3[3] = {-4,0,6,};
npts1 = 5;
npts2 = 6;
npts3 = 3;

ranges(x1, npts1, &max, &min);
printf("for x1 = {3,8,1,6,2}\n");
printf("the maximum is: %d\n", max);
printf("the minimum is: %d\n", min);


ranges(x2, npts2, &max, &min);
printf("for x2 = {6,9,-2,1,4,5}\n");
printf("the maximum is: %d\n", max);
printf("the minimum is: %d\n", min);

ranges(x3, npts3, &max, &min);
printf("for x3 = {-4,0,6}\n");
printf("the maximum is: %d\n", max);
printf("the minimum is: %d\n", min);

return 0;
}

void ranges(int x[], int npts, int *max_ptr, int *min_ptr)
{
int i;
*max_ptr = x[0];
*min_ptr= x[0];
for (i = 0; i < npts; i++)
{
if (x[i]>*max_ptr)
        *max_ptr = x[i];
else if(x[i]<*min_ptr)
        *min_ptr = x[i];
}

}

