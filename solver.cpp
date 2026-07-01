#include "solver_lib/solver.h"
#include "formatter_ex/formatter_ex.h"
#include <string>
int main() {
    float result = solve(2.5, 3.5);
    formatter_ex("Result: " + std::to_string(result));
    return 0;
}

