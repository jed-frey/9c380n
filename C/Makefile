CC?=clang
C_FLAGS+=-Wall
BIN?=1

.PHONY: all
all:
	./make_all.sh

${BIN}: 1.c
	${CC} ${C_FLAGS} -o ${@} ${^}

