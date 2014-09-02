class Vector {
  public:
    Vector();
    void add(int value);
    int size;
    int* data;
    int getCapacity();
  private:
    int capacity;
    void reserve(int newCapacity);
};
