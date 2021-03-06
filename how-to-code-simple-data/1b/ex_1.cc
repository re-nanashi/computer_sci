#include <iostream>

template <typename Type1, typename Type2> int test_function(Type1 func, Type2 expected_result)
{
    // check if return output of func and expected_result is the same
    if (func == expected_result)
        std::cout << "Expected value is reached. Test passed." << std::endl;
    else
    {
        std::cout << "Test 2 failed. Aborting..." << std::endl;
        return (1);
    }

    return 0;
}

// std::string -> std::string
// produce a string that has "!" appended to the end of a given string
// yell("hello") >> hello!
// yell("123") >> 123!
// yell(123) >> no idea
// std::string yell(std::string str) //stub
//{
//    return "a";
//}

// std::string yell(std::string str)     //template
//{
//    ... str
//}

std::string yell(std::string str)
{
    return (str + "!");
}

int main()
{
    test_function(yell("hello"), "hello!");
    test_function(yell("123"), "123!");
    test_function(yell("hello world"), "hello world!");

    return 0;
}
