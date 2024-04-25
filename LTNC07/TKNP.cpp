#include <iostream>
using namespace std;


int binarySearchRecursive(int arr[], int left, int right, int x) {
   if (right >= left) {
       int mid = left + (right - left) / 2;

       if (arr[mid] == x) {
           return mid;
       }

       if (arr[mid] > x) {
           return binarySearchRecursive(arr, left, mid - 1, x);
       }

       return binarySearchRecursive(arr, mid + 1, right, x);
   }

   return -1;
}

int main() {
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 10;
   int result = binarySearchRecursive(arr, 0, n - 1, x);
   if (result == -1) {
       cout << "no";
   } else {
       cout << "vi tri " << result;
   }
   return 0;
}
