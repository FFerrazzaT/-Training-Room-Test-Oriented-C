#include "../../Unity/unity.h"

void setUp(){};

void tearDown(){};

void test_example(){
	TEST_ASSERT_MESSAGE(1==2,"Error! Test 1 failed!");
	TEST_ASSERT_MESSAGE(1==1,"Error! Test 2 failed!");
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_example);
	return UNITY_END();
}
