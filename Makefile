FNS = ListFunctions.c
MAIN = main.c $(FNS)

all:
	gcc $(MAIN) -o TestList

clean:
	rm TestList
