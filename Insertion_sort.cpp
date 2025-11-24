#include <iostream>
#include <vector>
#include <chrono>

// Performance test
void performanceTest() {
    const int SIZE = 10000;
    std::vector<int> arr(SIZE);
    
    // Fill with random numbers
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 1000;
    }
    
    auto start = std::chrono::high_resolution_clock::now();
    
    insertionSort(arr); // Using the vector version
    
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    std::cout << "Time taken to sort " << SIZE << " elements: " 
              << duration.count() << " milliseconds\n";
}

int main() {
    std::cout << "=== Insertion Sort Performance ===\n";
    std::cout << "Time Complexity:\n";
    std::cout << "- Best case: O(n) - when array is already sorted\n";
    std::cout << "- Average case: O(n²)\n";
    std::cout << "- Worst case: O(n²) - when array is reverse sorted\n";
    std::cout << "- Space Complexity: O(1) - in-place sorting\n\n";
    
    performanceTest();
    
    return 0;
}
