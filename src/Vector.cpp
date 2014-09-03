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

bool Vector::remove(int index) {
  if (index + 1 > size) {
    // Ignore
    return false;
  }

  for (int i = index; i < size; i++) {
    data[i] = data[i + 1];
  }
  data[size] = 0;
  size -= 1;
  return true;
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
