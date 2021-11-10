CC=gcc

INCLUDE_DIRS=/usr/lib/jvm/java-8-openjdk-amd64/include /usr/lib/jvm/java-8-openjdk-amd64/include/linux 

CFLAGS=$(foreach dir, $(INCLUDE_DIRS), -I $(dir)) -shared 
SOURCE=Prompt
SOURCE2=Prompt2
DEPS=Prompt.h

.PHONY: prompt1
prompt1: $(SOURCE).c $(DEPS)
	$(CC) $(CFLAGS) $< -o lib$(SOURCE).so

.PHONY: prompt2
prompt2: $(SOURCE2).c $(DEPS)
	$(CC) $(CFLAGS) $< -o lib$(SOURCE2).so

