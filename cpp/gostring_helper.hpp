#pragma once

#include <string>
#include "../build/libgofuncs.h"

void convert_c_to_go(std::string& src, GoString& dest);
void convert_go_to_c(GoString& src, std::string& dest);