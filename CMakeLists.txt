cmake_minimum_required(VERSION 3.10)
project(BitcoinKeyScanner VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bitcoin_scanner
    src/main.cpp
    src/scanner.cpp
    src/utils.cpp
)

target_include_directories(bitcoin_scanner PRIVATE src)

# For release build
set(CMAKE_BUILD_TYPE Release)