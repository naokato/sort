#include <iostream>
#include <utility>
using namespace std;

void quick_sort(int arr[], int left, int right) {
  int i = left;
  int j = right;

  int pivot = arr[(i + j) / 2];

  while (i <= j) {
    while(arr[i] < pivot) i++;
    while(arr[j] > pivot) j--;
    
    if (i <= j) {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }

  }
  if (left < j) quick_sort(arr, left, j);
  if (i < right) quick_sort(arr, i, right);
}

int main() {
  int arr[] = { 5, 4, 1, 3, 2, 7 };
  int size = sizeof(arr) / sizeof(arr[0]);
  quick_sort(arr, 0, size - 1);

  for (int i = 0; i <= size - 1; i++) cout << arr[i] << " ";
  return 0;
}
