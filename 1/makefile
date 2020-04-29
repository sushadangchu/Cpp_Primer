hello: hello.o
	g++ -o hello hello.o
hello.o: hello.cc
	g++ -c hello.cc
run:hello
	@./hello

.PHONY:clean
clean:
	-rm hello hello.o
