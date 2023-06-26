#include <iostream>
#include <random>

int main() {
    // Constants
    const int ANSWER = std::random_device{}() % 20 + 1;
    const int NUM_TRIES = 4;

    // Variables
    int guess = -1;
    int tries = 0;

    // std::cout << ANSWER << std::endl;

    while (guess != ANSWER && tries < NUM_TRIES) {
        std::cout << "기회가 " << (NUM_TRIES - tries) << "번 남았습니다. 1-20 사이의 숫자를 맞혀보세요: ";
        std::cin >> guess;
        tries++;

        if (ANSWER > guess) {
            std::cout << "Up" << std::endl;
        } else if (ANSWER < guess) {
            std::cout << "DOWN" << std::endl;
        }
    }

    if (guess == ANSWER) {
        std::cout << "축하합니다. " << tries << "번 만에 숫자를 맞히셨습니다." << std::endl;
    } else {
        std::cout << "아쉽습니다. 정답은 " << ANSWER << "입니다." << std::endl;
    }

    return 0;
}