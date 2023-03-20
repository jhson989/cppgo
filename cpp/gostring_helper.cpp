#include "gostring_helper.hpp"


void convert_c_to_go(std::string& src, GoString& dest) {
    dest.p = src.c_str();
    dest.n = src.length();

}
void convert_go_to_c(GoString& src, std::string& dest) {
    dest = std::string(src.p, src.n);
}