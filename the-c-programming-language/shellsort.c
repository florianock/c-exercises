#include <stdio.h>
#include <stdbool.h>

// page 55
/* shellsort: sort v[0]...v[n-1] into increasing order */
static void showNumbers(int numbers[], int n, char *header)
{
	printf("%s:\t", header);
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}

static bool compare(int a, int b)
{
//	printf("\t%d > %d?\n", a, b);
	return a > b;
}

static void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			for (j=i-gap; j>=0 && compare(v[j], v[j+gap]); j-=gap) {
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
				showNumbers(v, n, "Step");
			}
		}
	}
}

int main(int argc, char *argv[])
{
	const int n = 25;
	int nums[] = { 5, 2, 9, 8, 2, 3, 3, 8, 5, 8, 5, 1, 0, 1, 7, 3, 0, 6, 1, 6, 8, 4, 7, 7, 2 };

	showNumbers(nums, n, "Before");
	shellsort(nums, n);
	showNumbers(nums, n, "After");

	return 0;
}
