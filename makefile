SRCS = $(wildcard *.cc)
OBJS = $(SRCS:.c = .o)

main: *.h

main: $(OBJS)
	g++ $^ -o $@

%.o: %.cc
	g++ -c %.cc

clean:
	rm -f  main *.o
