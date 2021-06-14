#include <iostream>
#include <cassert>
#include <thread>


void do_somthing() {
	std::cout << "do_something" << std::endl;
}

void do_other_somthing() {
	std::cout << "do_other_somthing" << std::endl;
}

int main() {
	std::thread t1(do_somthing);
	std::thread t2 = std::move(t1);
	

	return 0;
}