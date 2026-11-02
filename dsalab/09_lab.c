#include <stdio.h>
int main()
{
 int a[7] = {10, 20, 30, 40, 50, 60, 70};
 int key = 60;
 int low = 0, high = 6, mid;
 int found = 0;
 while (low <= high)
 {
 mid = (low + high) / 2;
 if (a[mid] == key)
 {
 printf("Element found at index %d\n", mid);
 found = 1;
 break;
 }
 else if (a[mid] < key)
 {
 low = mid + 1;
 }
 else
 {
 high = mid - 1;
 }
 }
 if (found == 0)
 {
 printf("Element not found\n");
 }
 return 0;
}