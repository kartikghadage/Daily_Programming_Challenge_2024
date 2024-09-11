#include <vector>
#include <iostream>

int findDuplicate(std::vector<int>& arr) {
    // Step 1: Finding the intersection point
    int tortoise = arr[0];
    int hare = arr[0];

    // Move tortoise by 1 step and hare by 2 steps
    do {
        tortoise = arr[tortoise];          // Move one step
        hare = arr[arr[hare]];             // Move two steps
    } while (tortoise != hare);

    // Step 2: Finding the entrance to the cycle
    tortoise = arr[0]; // Reset tortoise to the start
    while (tortoise != hare) {
        tortoise = arr[tortoise]; // Move one step
        hare = arr[hare];         // Move one step
    }

    return hare; // This is the duplicate number
}

int main() {
    std::vector<int> arr = {3, 1, 3, 4, 2};
    std::cout << "Duplicate number: " << findDuplicate(arr) << std::endl; // Output: 3

    return 0;
}
