#include "formatter_ex.h"
#include "../formatter_lib/formatter.h"
void formatter_ex(const std::string& message) {
    formatter("=========================\n" + message + "\n=========================");
}

