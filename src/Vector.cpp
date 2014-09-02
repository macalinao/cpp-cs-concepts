#include <cstring>
#include "Vector.h"

Vector::Vector() {
  capacity = 8;
  data = new int[8];
}

void Vector::add(int value) {
  size += 1;
  if (size > capacity) {
    reserve(capacity * 2);
  }
  data[size - 1] = value;
}

void Vector::reserve(int newCapacity) {
  capacity = newCapacity;
  int* newData = new int[capacity];
  memcpy(newData, data, sizeof(int) * size);
  delete[] data;
  data = newData;
}

int Vector::getCapacity() {
  return capacity;
}
