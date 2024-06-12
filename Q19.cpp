#include <iostream>

int main() {
    double n1, n2, n3, w1, w2, w3;

    std::cout << "Enter grade 1: ";
    std::cin >> n1;
    std::cout << "Enter weight for grade 1: ";
    std::cin >> w1;

    std::cout << "Enter grade 2: ";
    std::cin >> n2;
    std::cout << "Enter weight for grade 2: ";
    std::cin >> w2;

    std::cout << "Enter grade 3: ";
    std::cin >> n3;
    std::cout << "Enter weight for grade 3: ";
    std::cin >> w3;

    double weightedAverage = (n1 * w1 + n2 * w2 + n3 * w3) / (w1 + w2 + w3);

    std::cout << "Weighted Average Grade: " << weightedAverage << std::endl;

    return 0;
}