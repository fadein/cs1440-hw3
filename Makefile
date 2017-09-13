CXXFLAGS = -Wall -Wextra -ggdb -std=c++11

CPP_SRCS := $(wildcard *.cpp)
OBJS     := ${CPP_SRCS:.cpp=.o}

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean test run

clean:
	-rm -f *.o *.d main

run test: main
	./main

%.d: $(CPP_SRCS)
	$(CXX) -MM $*.cpp | sed -e 's@^\(.*\)\.o:@\1.d \1.o:@' > $@

ifeq      "$(MAKECMDGOALS)" "clean"
else ifeq "$(MAKECMDGOALS)" "test"
else
-include ${CPP_SRCS:.cpp=.d}
endif
