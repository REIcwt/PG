#include <stdio.h>
#include <thread>

using namespace std;

void Thread1() {
    printf("Thread1\n");
}

void Thread2() {
    printf("Thread2\n");
}

void Thread3() {
    printf("Thread3\n");
}

int main() {
    thread thread1(Thread1);
    thread1.join();

    thread thread2(Thread2);
    thread2.join();

    thread thread3(Thread3);
    thread3.join();

    return 0;
}
