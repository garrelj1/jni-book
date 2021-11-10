CC=gcc

INCLUDE_DIRS=/usr/lib/jvm/java-8-openjdk-amd64/include /usr/lib/jvm/java-8-openjdk-amd64/include/linux 

CFLAGS=$(foreach dir, $(INCLUDE_DIRS), -I $(dir)) -shared 
SOURCE=ObjectArray
SOURCE2=ObjectArray2
DEPS=ObjectArray.h

.PHONY: objectArray1
prompt1: $(SOURCE).c $(DEPS)
	$(CC) $(CFLAGS) $< -o lib$(SOURCE).so

.PHONY: objectArray2
prompt2: $(SOURCE2).c $(DEPS)
	$(CC) $(CFLAGS) $< -o lib$(SOURCE2).so

