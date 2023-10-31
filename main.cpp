/*  main.cpp
    jean paul lopez pandura
    
    última modificación: 31/10/2023 */
#include "heap.hpp"

int main() {
    Heap maxHeap;

    maxHeap.insert(10);
    maxHeap.insert(5);
    maxHeap.insert(17);
    maxHeap.insert(8);
    maxHeap.insert(20);

    std::cout << "Max element: " << maxHeap.getMax() << std::endl;

    maxHeap.deleteMax();
    std::cout << "Max element after deletion: " << maxHeap.getMax() << std::endl;

    maxHeap.insert(25);
    maxHeap.insert(13);

    std::cout << "Heap size: " << maxHeap.size() << std::endl;

    std::cout << "Heap elements (Level by Level): ";
    maxHeap.print(4);
    std::cout << std::endl;

    return 0;
}