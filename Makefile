
CC ?= gcc
CFLAGS += -std=c99 -Wall -Wextra -Ideps
DEPS := $(wildcard deps/*/*.c)
OBJS := stopping_tolgrad.o $(DEPS:.c=.o)

.DEFAULT_GOAL := validate

test: test.o $(OBJS)

stopping_tolgrad.o: stopping_tolgrad.c stopping_tolgrad.h

deps: package.json
	clib install --dev
	@touch $@

validate: test
	./$<

clean:
	rm -f $(OBJS) stopping_tolgrad.o test.o test

.PHONY: validate clean
