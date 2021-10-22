#include "../../Unity/unity.h"
#include "hypotenuse.h"

void setUp(){};

void tearDown(){};

void test_the_hypotenuse(){
	TEST_ASSERT_FLOAT_WITHIN(0.01,5.0,hypotenuse(3.0,4.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,13.0,hypotenuse(5.0,12.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,25.0,hypotenuse(7.0,24.0));
}

void test_special_values(){
	TEST_ASSERT_FLOAT_WITHIN(0.01,0.0,hypotenuse(3.0,0.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,0.0,hypotenuse(0.0,4.0));
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_the_hypotenuse);
	RUN_TEST(test_special_values);
	return UNITY_END();
}
