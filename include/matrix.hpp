#include <iostream>

class matrix_t final
{
private:
    unsigned int rows_;
    unsigned int columns_;
    int** elements_;
public:
    matrix_t() noexcept;
    auto rows() -> unsigned int;
    auto columns() -> unsigned int;
};
