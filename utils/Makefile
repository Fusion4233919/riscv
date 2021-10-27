C_SRC       = $(sort $(wildcard *.c))
OBJ		    = $(patsubst %.c,%.o,$(C_SRC))

all:$(OBJ)

%.o:%.c
	cc ${INCLUDE} -c $< -o ${OBJ_DIR}/$@
