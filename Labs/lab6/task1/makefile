all: exec

exec: mypipeline.c
	gcc -g -m32 -c -o mypipeline.o mypipeline.c
	gcc -g -m32  mypipeline.o -o mypipeline
	rm mypipeline.o

.PHONY: clean
clean:
	rm -rf ./*.o mypipeline mypipeline.o
