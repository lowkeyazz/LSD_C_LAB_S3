SRC = msb.c nthbit.c main.c
OOOS = msb.o nthbit.o main.o
LIB_NAME = bitwise.a


all:$(LIB_NAME)

$(LIB_NAME):
	gcc -c $(SRC) 
	ar rcs $(LIB_NAME) $(OOOS)

clean:
	rm $(OOOS)
fclean:clean
	rm $(LIB_NAME)
re:fclean $(LIB_NAME)
