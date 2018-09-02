CC?=clang
C_FLAGS+=-Wall
SRC?=1.c
BIN?=${SRC}.bin
PPO?=${SRC}.pp # Pre processor out.

.PHONY: all
all:
	./make_all.sh

${BIN}: ${SRC}
	${CC} ${C_FLAGS} -o ${@} ${^}

${PPO}: ${SRC}
	${CC} -E -o ${@} ${^}

${LL}: ${SRC}
	${CC} -S -emit-llvm -o ${@} ${^}


.PHONY: clean
clean:
	rm -rf *.bin *.pp *.ll
