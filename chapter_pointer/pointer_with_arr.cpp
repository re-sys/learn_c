// This program demonstrates how to use pointers to access elements of an array and uses a function to print the elements of the array.
#include <iostream>
using namespace std;

void printArray(int* arr, int size) {//使用 int* arr 可以更清晰地表达函数参数是一个指针，而不是一个数组。使用 int arr[] 则可以更直观地表达函数参数是一个数组。但实际上都是指针
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;
}
int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]); //计算数组的大小
   
   printArray(arr, size); // 调用函数打印数组
   return 0;
}