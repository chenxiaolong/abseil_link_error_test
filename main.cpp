#include <iostream>
#include <vector>

#include <cstdlib>

#include "absl/strings/str_split.h"

int main(int argc, char *argv[])
{
    std::vector<absl::string_view> pieces = absl::StrSplit("a/b/c", '/');
    for (auto const &piece : pieces) {
        std::cout << piece << '\n';
    }
    return EXIT_SUCCESS;
}
