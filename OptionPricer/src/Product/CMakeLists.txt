add_library(ProductLib  
"AsianOption.cpp"
 "EuropeanOption.h" "EuropeanOption.cpp")

target_include_directories(ProductLib PUBLIC
    ${PROJECT_SOURCE_DIR}
)