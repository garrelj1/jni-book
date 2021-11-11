CC=gcc

INCLUDE_DIRS=/usr/lib/jvm/java-8-openjdk-amd64/include /usr/lib/jvm/java-8-openjdk-amd64/include/linux 

CFLAGS=$(foreach dir, $(INCLUDE_DIRS), -I $(dir)) -shared 
SOURCE=StaticFieldAccess
DEPS=StaticFieldAccess.h

.PHONY: all
all: $(SOURCE).c $(DEPS)
	$(CC) $(CFLAGS) $< -o lib$(SOURCE).so
