#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& arr) {
    int n = arr.size() + 1; // Since arr has n-1 elements
    int expectedSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    // Calculate the sum of the elements in the array
    for (int num : arr) {
        actualSum += num;
    }

    // The missing number is the difference between expected and actual sum
    return expectedSum - actualSum;
}

int main() {
    // Test Cases
    std::vector<int> testCase1 = {1, 2, 4, 5};
    std::cout << "Missing number: " << findMissingNumber(testCase1) << std::endl; // Output: 3

    std::vector<int> testCase2 = {2, 3, 4, 5};
    std::cout << "Missing number: " << findMissingNumber(testCase2) << std::endl; // Output: 1

    std::vector<int> testCase3 = {1, 2, 3, 4};
    std::cout << "Missing number: " << findMissingNumber(testCase3) << std::endl; // Output: 5

    std::vector<int> testCase4 = {1};
    std::cout << "Missing number: " << findMissingNumber(testCase4) << std::endl; // Output: 2

    std::vector<int> testCase5(999999);
    for (int i = 0; i < 999999; ++i) {
        testCase5[i] = i + 1; // Fill with numbers from 1 to 999999
    }
    std::cout << "Missing number: " << findMissingNumber(testCase5) << std::endl; // Output: 1000000

    return 0;
}
