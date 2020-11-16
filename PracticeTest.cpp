/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("hannah");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, number_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("12321");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbol_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("%&*&%");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_symbol_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("^)*&");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, not_number_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("12345");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, spaces_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("a b a");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, already_descending)
{
	Practice obj;
	int first = 5;
	int second = 3;
	int third = 1;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_ascending)
{
	Practice obj;
	int first = 1;
	int second = 3;
	int third = 5;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, all_same)
{
	Practice obj;
	int first = 5;
	int second = 5;
	int third = 5;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, two_same)
{
	Practice obj;
	int first = 5;
	int second = 3;
	int third = 5;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}
