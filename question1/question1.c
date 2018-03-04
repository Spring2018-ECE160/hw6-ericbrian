#include <stdio.h>
#define MAXLENGTH 100

int num_values(int x[])
{
	int temp = 0;	
	int i;
	for(i = 0; x[i] != '\0'; i++)
	{
		i++;
	}
	temp = --i;

	return temp;
	
}

void swap(int v[], int i, int j)
{
	int temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void qsort(int v[], int left, int right)
{	
	int i, last;
	if (left >= right)
		return;
	swap(v, left, (left + right)/2); 
	last = left;
	for (i = left+1; i <= right; i++)
        if (v[i] < v[left])
            swap(v, ++last, i);

	swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}

int ranges(int x[], int npts, int *max_ptr, int *min_ptr)
{
	
	int i;
	int left = 0;
	int right = npts - 1;
	printf("\nArray: ");
	for(i = 0; i < npts; i++)
	{
		printf("%d ", x[i]);
	}
	qsort(x, left, right);
	*min_ptr = x[left];
	*max_ptr = x[right];

}

int main()
{
	int i;
	int max_ptr;
	int min_ptr;
	int example1[MAXLENGTH] = {11, 1, 3, 4, 5, 2, 62, 200, 70};
	int example2[MAXLENGTH] = {3, 1, 2};
	int example3[MAXLENGTH] = {200, 300, 100, 400, 500, 700, 900, 1000, 800};

	ranges(example1, num_values(example1), &max_ptr, &min_ptr);	
	printf("\nMin value:%d \nMax value:%d\n", min_ptr, max_ptr);
	ranges(example2, num_values(example2), &max_ptr, &min_ptr);
	printf("\nMin value:%d \nMax value:%d\n", min_ptr, max_ptr);
	ranges(example3, num_values(example3), &max_ptr, &min_ptr);	
	printf("\nMin value:%d \nMax value:%d\n", min_ptr, max_ptr);
	return 0;
}