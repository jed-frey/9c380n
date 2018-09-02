CC?=clang
C_FLAGS+=-Wall
BIN?=1.bin
PPO?=1.pp # Pre processor out.

.PHONY: all
all:
	./make_all.sh

${BIN}: 1.c
	${CC} ${C_FLAGS} -o ${@} ${^}

${PPO}: 1.c
	${CC} -E -o ${@} ${^}

