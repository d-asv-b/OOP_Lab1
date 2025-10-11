#include "../include/is_clean.hpp"

bool isClean(long long number) {
    number = abs(number);

    short curr_num, prev_num = 10;
    bool flag = false;

    while (number > 0 && !flag) {
        curr_num = number % 10;
        number /= 10;

        if (curr_num > prev_num) {
            flag = true;
        }

        prev_num = curr_num;
    }

    return !flag;
}