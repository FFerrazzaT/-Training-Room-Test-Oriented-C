all:	test_example.x

all: test_example.x
	@./test_example.x

test_example.x:	test_example.c
	@gcc test_example.c ../../Unity/unity.c -o test_example.x

clean:
	@rm *.x

help:
	@echo "To run, use 'make'"
