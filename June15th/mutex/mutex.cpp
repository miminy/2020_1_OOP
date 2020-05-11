#include <iostream>
#include <mutex>  
#include <thread>
#include <vector>

void worker(int& result, std::mutex& m) {
    for (int i = 0; i < 100; i++) {
        m.lock();
        result += 1;
        std::cout << "Thread :: ID  = " << std::this_thread::get_id() << " result :" << result << std::endl;
        m.unlock();
    }
}
int main() {
    int counter = 0;
    std::mutex m;

    std::vector<std::thread> workers;
    for (int i = 0; i < 3; i++) {
        workers.push_back(std::thread(worker, std::ref(counter), std::ref(m)));
    }

    for (int i = 0; i < 3; i++) {
        workers[i].join();
    }

    std::cout << counter << std::endl;
}