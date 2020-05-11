#include <chrono>  
#include <iostream>
#include <mutex>
#include <queue>
#include <string>
#include <thread>
#include <vector>
void producer(std::queue<std::string>* myQueue, std::mutex* m, int index) {
    for (int i = 0; i < 5; i++) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100 * index));

        std::string job = std::to_string(i) + " from thread(" + std::to_string(index) + ")\n";

        m->lock();
        myQueue->push(job);
        m->unlock();
    }
}
void consumer(std::queue<std::string>* myQueue, std::mutex* m, int* processNum) {
    while (*processNum < 25) {
        m->lock();
        if (myQueue->empty()) {
            m->unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
            continue;
        }
        std::string content = myQueue->front();
        myQueue->pop();

        (*processNum)++;
        m->unlock();

        std::cout << content;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
int main() {
    int processNum = 0;
    std::queue<std::string> myQueue;
    std::mutex m;
    std::vector<std::thread> producers;
    for (int i = 0; i < 5; i++) {
        producers.push_back(std::thread(producer, &myQueue, &m, i + 1));
    }
    std::vector<std::thread> consumers;
    for (int i = 0; i < 3; i++) {
        consumers.push_back(
            std::thread(consumer, &myQueue, &m, &processNum));
    }
    for (int i = 0; i < 5; i++) {
        producers[i].join();
    }
    for (int i = 0; i < 3; i++) {
        consumers[i].join();
    }
}