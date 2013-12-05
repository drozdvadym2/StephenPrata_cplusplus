# Created by V. Drozd


PRODUCT_NAME = ch5task1

buildstyle = release

CINCPATHS = -I.
LIBPATHS =

CFLAGS = ${CFLAGS_${buildstyle}}
LFLAGS = ${LFLAGS_${buildstyle}}

CFLAGS_release = ${CINCPATHS} -g0 -O2
LFLAGS_release = ${LIBPATHS}

SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}

all:: build

build: ${PRODUCT_NAME}
clean:
	@rm -f ${OBJS} ${PRODUCT_NAME}
rebuild:
	@make clean
	@make build	

${PRODUCT_NAME}: ${OBJS}
	@g++ $^ ${LFLAGS} -o $@

