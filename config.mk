# Directory containing test files
TEST_PATH     := test
# Space-separated list of header files (e.g., algebra.hpp)
HEADERS       := emergency.hpp
# Space-separated list of implementation files (e.g., algebra.cpp)
IMPLEMS       := emergency.cpp
# File containing main
DRIVER        := tuffyaid.cpp
# Expected name of executable file
EXECFILE      := tuffyaid
CLANGTDY_CHKS := *,-google-build-using-namespace,-fuchsia-default-arguments,-llvm-header-guard,-google-runtime-int,-cppcoreguidelines-pro-type-member-init,-hicpp-member-init
