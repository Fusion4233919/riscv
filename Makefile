INCLUDE 	= -I ${shell pwd}/include
OBJ_DIR		= ${shell pwd}/obj
OBJ			= test.o imm_ext.o
export INCLUDE OBJ_DIR


.PHONY:all run clean
all: 
	$(shell test -d obj || mkdir obj)
	${MAKE} -C utils all

run: all test.o
	cc -o test $(addprefix $(OBJ_DIR)/, $(OBJ))

%.o:%.c
	cc ${INCLUDE} -c $< -o ${OBJ_DIR}/$@

clean:
	$(shell test -d obj && rm -rf obj)
	$(shell rm test)