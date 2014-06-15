ADD_EXECUTABLE(testFizzbuzz ${PROJECT_SOURCE_DIR}/test/test_fizzbuzz.cpp)
TARGET_LINK_LIBRARIES(testFizzbuzz boost_unit_test_framework.a)
ADD_TEST(NAME FizzBuzzTest 
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMAND testFizzbuzz)
