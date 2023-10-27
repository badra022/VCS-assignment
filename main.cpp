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


int getMin(const std::vector<int>& vec){
    int min = vec[0];
    for(int value : vec) {
        if(value < min) {
            min = value;
        }
    }

    return min;
}

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sumResult = getSum(myVector);
    int minResult = getMin(myVector);
    std::cout << "Sum of elements in the vector: " << sumResult << std::endl;
    std::cout << "Min of elements in the vector: " << minResult << std::endl;

    return 0;
}
