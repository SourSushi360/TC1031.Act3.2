/*  heap.cpp
    Jean Paul López Pándura
    
    ultima modificación: 31/10/2023
    este programa define las funciones de la clase heap, declarada
    en heap.hpp */
#include "heap.hpp"

// constructores
Heap::Heap() {};
Heap::~Heap() {};
// private
void Heap::heapifyUp(int index) {
    while (index > 0) {
        int parentIndex = (index - 1)/2;
        if (heapArray[index] > parentIndex) {
            std::swap(heapArray[index],heapArray[parentIndex]);
            index = parentIndex;
        } else {
            break;
        }
    }
}
void Heap::heapifyDown(int index) {
    int size = heapArray.size();
    int left,right,largest;
   do {
        left = 2*index + 1;
        right = 2*index + 2;
        largest = index;

        if (left < size && heapArray[left] > heapArray[largest]) {
            largest = left;
        } if (right < size && heapArray[right] > heapArray[largest]) {
            largest = right;
        } if (largest != index) {
            std::swap(heapArray[index],heapArray[largest]);
            index = largest;
        }
    } while (largest != index);
}
// public
void Heap::insert(int value) {
    int index = size();
    heapArray.push_back(value);
    heapifyUp(index);
}
int Heap::getMax() {
    return heapArray[0];
}
void Heap::deleteMax() {
    if (isEmpty()) {
        return;
    }
    heapArray[0] = heapArray.back();
    heapArray.pop_back();
    heapifyDown(0);
}
bool Heap::isEmpty() {
    return heapArray.empty();
}
int Heap::size() {
    return heapArray.size();
}
