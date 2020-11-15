#include "gtest/gtest.h"
#include "reverse_string.hpp"

#include <string>

//switch_string(std::string& word)
TEST(Switch_stringTest, compareIfThoseWordsAreTheSame){
    std::string test_word = "word";
    switch_string(test_word);
    EXPECT_EQ("drow", test_word);
}

TEST(SwitchStringTest, onlyOneLetter){
    std::string test_word = "s";
    switch_string(test_word);
    EXPECT_EQ("s", test_word);
}

TEST(SwitchStringTest, onlydigits){
    std::string test_word = "1";
    switch_string(test_word);
    EXPECT_EQ("1", test_word);
}

//switch_string2(std::string& word)
TEST(Switch_string2Test, compareIfThoseWordsAreTheSame2){
    std::string test_word = "word";
    switch_string2(test_word);
    EXPECT_EQ("drow", test_word);
}

TEST(SwitchString2Test, onlyOneLetter2){
    std::string test_word = "s";
    switch_string2(test_word);
    EXPECT_EQ("s", test_word);
}

TEST(SwitchString2Test, onlydigits2){
    std::string test_word = "1";
    switch_string2(test_word);
    EXPECT_EQ("1", test_word);
}

//switch_string3(std::string& word)
TEST(Switch_string3Test, compareIfThoseWordsAreTheSame3){
    std::string test_word = "word";
    switch_string3(test_word);
    EXPECT_EQ("drow", test_word);
}

TEST(SwitchString3Test, onlyOneLetter3){
    std::string test_word = "s";
    switch_string3(test_word);
    EXPECT_EQ("s", test_word);
}

TEST(SwitchString3Test, onlydigits3){
    std::string test_word = "1";
    switch_string3(test_word);
    EXPECT_EQ("1", test_word);
}

//switch_string4(std::string& word)
TEST(Switch_string4Test, compareIfThoseWordsAreTheSame4){
    std::string test_word = "word";
    switch_string4(test_word);
    EXPECT_EQ("drow", test_word);
}

TEST(SwitchString4Test, onlyOneLetter4){
    std::string test_word = "s";
    switch_string4(test_word);
    EXPECT_EQ("s", test_word);
}

TEST(SwitchString4Test, onlydigits4){
    std::string test_word = "1";
    switch_string4(test_word);
    EXPECT_EQ("1", test_word);
}
