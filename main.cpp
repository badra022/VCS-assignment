#include <iostream>
#include <vector>

// Function to calculate the sum of elements in a vector
int getSum(const std::vector<int>& vec) {
    int sum = 0;
    for (int value : vec) {
        sum += value;
    }
    return sum;
}

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sumResult = getSum(myVector);
    std::cout << "Sum of elements in the vector: " << sumResult << std::endl;

    return 0;
}
