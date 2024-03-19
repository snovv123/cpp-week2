#include <cstdlib>
#include <ctime>

int generateRandomNumber() {
    srand(time(NULL));
    int number = rand() % 1000;
    return number;
}
