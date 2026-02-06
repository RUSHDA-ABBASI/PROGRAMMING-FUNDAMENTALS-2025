#include <stdio.h>
int main() {
	int n = 5;
int arr[5] = {5, 2, 9, 1, 3};
int i, j, temp;
for (i = 0; i < n - 1; i++) {
for (j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
printf("Sorted Array: ");
for (i = 0; i < 5; i++) {
printf("%d ", arr[i]);
}
return 0;
}