#include <iostream>

#include "gostring_helper.hpp"
#include "../build/libgofuncs.h"


void echo() {

    std::string message;
    std::cout << "Input message: \n - ";
    std::cin >> message;

    // Input
    GoString message_go;
    convert_c_to_go(message, message_go);

    // Run "echo" go function
    go_echo_return ret_go = go_echo(message_go);

    // Output
    std::cout << "Echoed message: \n - " << ret_go.r0 << std::endl;

    // Free
    free(ret_go.r0);
    free(ret_go.r1);
}

int main(int argc, char** argv) {

    echo();

}