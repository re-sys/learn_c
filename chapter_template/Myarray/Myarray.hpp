#progma once

#include <iostream>

template <typename T>
class Myarray {
private:
    T* arr;
    int size;
    int capacity;
public:
    Myarray(int sz = 10) {
        size = 0;
        capacity = sz;
        arr = new T[capacity];
    }

    ~Myarray() {
        delete[] arr;
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }

    void resize(int new_capacity) {
        T* new_arr = new T[new_capacity];
        for (int i = 0; i < size; i++) {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;
        capacity = new_capacity;
    }

    void push_back(const T& val) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        arr[size++] = val;
    }

    T& operator[](int index) {
        return arr[index];
    }

    const T& operator[](int index) const {
        return arr[index];
    }
    void erace(int index) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    Myarray(const Myarray& other) {
        size = other.size;
        capacity = other.capacity;
        arr = new T[capacity];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    Myarray& operator=(const Myarray& other) {
        if (this == &other) {
            return *this;
        }
        delete[] arr;
        size = other.size;
        capacity = other.capacity;
        arr = new T[capacity];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
        return *this;
    }
};