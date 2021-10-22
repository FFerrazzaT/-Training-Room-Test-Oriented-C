# -Training-Room-Test-Oriented-C
A repository to training the Test Oriented C



É necessario GCC (compilador)

É necessario Make (diretriz do compilador)

É necessario Unity (framework) https://github.com/ThrowTheSwitch/Unity (Apenas a pasta src)



To enable testing, you need to export the library via #include

```c
#include "Directory/Unity/unity.h"
#include "Directory/Test function"

void setUp(){};

void tearDown(){};

void test_funcition(){
    	TEST_ASSERT_EQUAL();
    
}


int main(void){
    	UNITY_BEGIN();
    	RUN_TEST(test_function);
    	return UNITY_END();
}

```



### Special Functions

```tex
void setUp(): It's run before all tests, containing specific settings.

void tearDown(): It's run after the tests.

void test_function(): It's the test itself.
```



#### Special Testing Functions:

If used in the test function:

```tex
TEST_IGNORE() : Skips the next test.

TEST_ASSERT_MESSAGE<Test/Error message>: Shows a message if you fail the test.
```



### Test Base Commands

```tex
UNITY_BEGIN: Starts the unity test library.

RUN_TEST (test_function): Runs the test present in the test_funcion.

UNITY_END: Ends testing.
```



### Types of Tests

```tex
TEST_ASSERT_EQUAL <Expected output/Function value to be read> : Does the return test of the chosen function and passes or fails the test.

TEST_ASSERT_FLOAT_WITHIN <Accuracy range/Expected value/Value returned> : Tests with numbers.

TEST_ASSERT_FALSE<Number or String to compare if it's false> : Take the test and check if it's fake. Ex: 1==2.

TEST_ASSERT<Number or String to compare if it's true> : Take the test and make sure it's true. Ex: 1==1.

TEST_ASSERT_EQUAL_STRING<Expected String/String Obtained> : Passes if both strings were equal.
```



### Compilation

```shell
~$: gcc programTest.c. Directory/Unity/unity.c -o theResult.x
```



Multi testes

Cada chamada RUN_TEST irá chamar um teste especifico





Utilizando MakeFiles
