# CMakeList.txt : OptionPricer の CMake プロジェクト。ソースを含めて、次を定義します:
# プロジェクト専用ロジックはこちらです。
#

# ソースをこのプロジェクトの実行可能ファイルに追加します。
add_executable (OptionPricer "OptionPricer.cpp" "OptionPricer.h" )#"src/main.cpp" "src/Product/AsianOption.cpp" "src/Product/AsianOption.h" "src/NumericalUtils/MonteCarlo.h")

add_subdirectory ("src")

target_include_directories(OptionPricer
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)


target_link_libraries(OptionPricer
    PRIVATE
        ProductLib
)


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET OptionPricer PROPERTY CXX_STANDARD 20)
endif()



# TODO: テストを追加し、必要な場合は、ターゲットをインストールします。
