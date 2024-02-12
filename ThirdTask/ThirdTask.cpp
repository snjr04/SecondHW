#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "RU");
    int sum = 0;
    const int repetitions = 6;
    const int numbersPerIteration = 8;
    int numbers[repetitions * numbersPerIteration];
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < repetitions; i++) {
        for (int j = 0; j < numbersPerIteration; j++) {
            numbers[i * numbersPerIteration + j] = std::rand() % 6;
            sum += numbers[i * numbersPerIteration + j];
            std::cout << numbers[i * numbersPerIteration + j];
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < 48 - 1; ++i) {
        if (numbers[i] == numbers[i + 1] && (i + 1) % 9 != 0) {
            std::cout << numbers[i] << " " << numbers[i + 1] << std::endl;
        }
        else if(numbers[i] == numbers[i + 8]) {
            std::cout << numbers[i] << " " << numbers[i + 8] << std::endl;
        }
    
    }




    return 0;
     
    
}