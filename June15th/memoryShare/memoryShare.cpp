#include <iostream>
#include <thread>
#include <vector>
using std::thread;
using std::vector;

void worker(int& counter) {
    for (int i = 0; i < 100; i++) {
        counter += 1;
        std::cout << "Thread :: ID  = " << std::this_thread::get_id() << " counter :" << counter << std::endl;
    }
}

int main() {
    int counter = 0;

    vector<thread> workers;
    for (int i = 0; i < 3; i++) {
        workers.push_back(thread(worker, std::ref(counter)));
    }

    for (int i = 0; i < 3; i++) {
        workers[i].join();
    }

    std::cout << counter << std::endl;
}