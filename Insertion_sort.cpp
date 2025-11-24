#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>

// Function declarations
void insertionSort(std::vector<int>& arr);
void performanceTest();

// Insertion Sort for vectors
void insertionSort(std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Performance test function
void performanceTest() {
    const int SIZE = 1000;  // Smaller for testing
    std::vector<int> arr(SIZE);
    
    // Fill with random numbers
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 1000;
    }
    
    auto start = std::chrono::high_resolution_clock::now();
    insertionSort(arr);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    std::cout << "Time taken to sort " << SIZE << " elements: " 
              << duration.count() << " milliseconds\n";
}

// Simple test function
void simpleTest() {
    std::vector<int> arr = {5, 2, 8, 1, 9, 3};
    
    std::cout << "Original: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;
    
    insertionSort(arr);
    
    std::cout << "Sorted: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;
}

int main() {
    simpleTest();
    std::cout << "\nPerformance Test:\n";
    performanceTest();
    return 0;
}
