#include <stdio.h>
void main(){
	int n, a[50], c, d, t;
	printf("Enter number of elements:");
	scanf("%d", &n);
	printf("Enter the elememts:\n");
	for (c = 0; c < n; c++){
		printf("[%d]:",c+1);
		scanf("%d", &a[c]);
	}
   for (c = 1 ; c <= n - 1; c++){
		d = c;
		while ( d > 0 && a[d-1] > a[d]) {
			t=a[d];
			a[d]=a[d-1];
			a[d-1] = t;
			d--;
		}
	}
	printf("Sorted list in ascending order:\n");
	for (c = 0; c <= n - 1; c++)
		printf("%d ", a[c]);
}