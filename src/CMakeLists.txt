# Create executable CMAKE target
add_executable(main main.cpp)

# Specify C++ compiler version
set_property(TARGET main PROPERTY CXX_STANDARD 17)
set_property(TARGET main PROPERTY CXX_STANDARD_REQUIRED ON)

# Link library to target
target_link_libraries(main PRIVATE fmt::fmt)
