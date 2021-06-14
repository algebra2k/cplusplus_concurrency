#include <iostream>
#include <thread>

using std::thread;

class thread_guard {
public:
	thread_guard() = default;
	thread_guard(thread& t) :__t(t) {};
	~thread_guard() {
		if (__t.joinable()) {
			__t.join();
		}
	}
private:
	thread &__t;
};


void do_something(int n) {
  std::cout << "[" << n << "] " << "do_something" << std::endl;

}

int main() {
	for (int i = 0; i < 10; i++) {
		thread t(do_something, i);
		thread_guard tg(t);
	}
	return 0;
}