#include <stdio.h>
#include <string>
#include <chrono>


int main() {
    std::string a(100000, 'a');

    auto copyStart = std::chrono::high_resolution_clock::now();
    std::string copy = a;
    auto copyEnd = std::chrono::high_resolution_clock::now();

    auto moveStart = std::chrono::high_resolution_clock::now();
    std::string move = std::move(a);
    auto moveEnd = std::chrono::high_resolution_clock::now();


    auto copyDuration = std::chrono::duration_cast<std::chrono::microseconds>(copyEnd - copyStart).count();
    auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(moveEnd - moveStart).count();

    printf("100,000文字を移動とコピーで比較しました。\n");
    printf("コピー: %lldμs\n", copyDuration);
    printf("移動: %lldμs\n", moveDuration);
    printf("Press any key to continue . . .");

    return 0;
}
