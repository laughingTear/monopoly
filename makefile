FLAGS = $(-std=c++11)
SRCS = $(wildcard *.cc)
OBJS = $(SRCS:.c = .o)

main: *.h

main: $(OBJS)
	g++ $(FLAGS) $^ -o $@

%.o: %.cc
	g++ $(FLAGS) -c %.cc

clean:
	rm -f  main *.o
