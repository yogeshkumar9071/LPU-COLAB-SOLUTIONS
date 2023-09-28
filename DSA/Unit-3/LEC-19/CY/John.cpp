// John

#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::deque<int> elements(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> elements[i];
    }

    std::sort(elements.begin(), elements.end(), std::greater<int>());

    for (int i = 0; i < N; ++i) {
        std::cout << elements[i] << " ";
    }

    return 0;
}
