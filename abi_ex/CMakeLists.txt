
include_directories (${PROJECT_SOURCE_DIR}/abi_ex)
add_library(abi_ex abi_ex.cpp)
target_link_libraries(abi_ex -lrt -ldl)
install(FILES abi_ex.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/abi_ex)
