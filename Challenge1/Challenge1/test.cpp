#include "gtest/gtest.h"
#include "challenge.h"

TEST(AddTest, ZeroValue) {
	EXPECT_FALSE(isPositive(0));
}

TEST(AddTest, PositiveValue) {
	EXPECT_TRUE(isPositive(5));
}

TEST(AddTest, NegativeValue) {
	EXPECT_FALSE(isPositive(-1));
}

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}