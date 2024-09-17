#include <iostream>
#include <thread>

using namespace std;

void call_from_thread(const string &mensagem){

    cout << mensagem << endl;

}

int main(){

    thread t1(call_from_thread, "Program A");
    t1.join();
    thread t2(call_from_thread, "Program B");
    t2.join();
    thread t3(call_from_thread, "Program B");
    t3.join();
    thread t4(call_from_thread, "Program B");
    t4.join();

}