#include "bubble.h"
#include "iostream"

int *bubble(int *array, int arraySize) {

  for (int i = 0; i < arraySize; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }

  return array;
}
