CC=gcc

INCLUDE_DIRS=/usr/lib/jvm/java-8-openjdk-amd64/include /usr/lib/jvm/java-8-openjdk-amd64/include/linux 

CFLAGS=$(foreach dir, $(INCLUDE_DIRS), -I $(dir)) -shared 
DEPS=IntArray.h

.PHONY: intArray1
intArray1: IntArray.c $(DEPS)
	$(CC) $(CFLAGS) $< -o libIntArray.so

.PHONY: intArray2
intArray2: IntArray2.c $(DEPS)
	$(CC) $(CFLAGS) $< -o libIntArray.so

