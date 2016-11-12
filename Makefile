CFLAGS=-Wall -g
all:
	make -f
clean:
	find ./ -maxdepth 1 -executable -name 'ex*' -exec rm "{}" \;
