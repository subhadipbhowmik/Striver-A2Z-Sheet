#include <algorithm>
#include <iostream>

using namespace std;

void insertion_sort(int array[], int size)
{
  for (int i = 1; i < size; i++)
  {
    int current_element = array[i];
    int j = i - 1;
    while (array[j] > current_element && j >= 0)
    {
      array[j + 1] = array[j];
      j -= 1;
    }
    array[j + 1] = current_element;
  }
}

int main()
{
  int array[] = {5, 3, 2, 1, 4};
  int size = sizeof(array) / sizeof(array[0]);

  insertion_sort(array, size);

  cout << "The sorted array is: ";
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
