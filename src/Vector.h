class Vector {
  public:
    Vector();
    void add(int value);
    int size;
    int* data;
    int getCapacity();
    int operator[] (int x) {
      return data[x];
    }
  private:
    int capacity;
    void reserve(int newCapacity);
};
