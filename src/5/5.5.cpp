#include <iostream>
int main(void) {
    int grade;
    while (std::cout << "Please enter your grade: ", std::cin >> grade) {
        if (grade < 0 || grade > 100) {
            std::cout << "Wrong Grade" << std::endl;
        }
    }


    return 0;
}