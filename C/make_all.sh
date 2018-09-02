#!/usr/bin/env tcsh

foreach C_SRC (1 2)
setenv SRC ${C_SRC}.c

foreach CLANG_VER ( 3.8 3.9 4.0 5.0 6.0 7 )
setenv CC clang-${CLANG_VER}

setenv BIN ${C_SRC}.clang-${CLANG_VER}.bin
make ${BIN}

setenv PPO ${C_SRC}.clang-${CLANG_VER}.pp
make ${PPO}

setenv LL ${C_SRC}.clang-${CLANG_VER}.ll
make ${LL}
end

foreach GCC_VER ( 4.8 5 6 7 8 )
setenv BIN ${C_SRC}.gcc-${GCC_VER}.bin
setenv CC gcc-${GCC_VER}

make ${BIN}
end

end
