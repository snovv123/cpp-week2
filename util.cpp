#include <cstdlib>
#include <ctime>

int generateRandomNumber() {
    srand(time(nullptr));
    int number = rand() % 900 + 100;
    return number;
}
