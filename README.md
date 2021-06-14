# cplusplus_concurrency
# Managing threads
- [move thread ownership](scope_thread.cc)
- [move thread ownership to vector based on the thread moveable](thread_move__vector.cc)
- [`thread_hardware_concurrency` can runtime determine the number of threads](thread_hardware.cc)
- [parallel version of `std::accumulate`](parallel_accumulate.cc)
- [usage of `std::thread::id`](thread_id.cc)

# Share data between threads
- [protecting list access with `std::mutex` and `std::lock_guard`](mutex_lock_guard_list.cc)
- [escape from the protection of the lock](mutex_lock_escape.cc)
- [safe staack over `std::stack`](safe_stack.cc)
- [use `std::lock` to add locks in the same order to avoid deadlocks](mutex_order_lock.cc)
- [`hierarchical_mutex` extensions to the statndard libaray](hierarchical_mutex.cc)
- [use `std::unique_lock` to defer lock](unique_lock_defer_lock.cc)
- [use `std::unique_lock` to transfer ownership of `std::mutex`](unique_lock_ownership.cc)
- [use `std::unique_lock` to degrade the granularity of locks](unique_lock_degrade_lock.cc)
- [initialize in threads using `std::call_onece`](call_onece_initialization_connection.cc)


