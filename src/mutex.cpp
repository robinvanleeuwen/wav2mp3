#include "mutex.h"
#include <pthread.h>
#include <iostream>
#include <sstream>
#include "check_pthread_error.h"
#include "return_code.h"

using namespace std;

pthread::mutex::mutex() noexcept {
    int res = pthread_mutex_init(&_mutex, NULL);
    check_pthread_error(res, "pthread_mutex_init");
}
pthread::mutex::~mutex() {
    int res = pthread_mutex_destroy(&_mutex);
    check_pthread_error(res, "pthread_mutex_destroy");
}

void pthread::mutex::lock() {
    int res = pthread_mutex_lock(&_mutex);
    check_pthread_error(res, "pthread_mutex_lock");
}

void pthread::mutex::unlock() {
    int res = pthread_mutex_unlock(&_mutex);
    check_pthread_error(res, "pthread_mutex_unlock");
}
