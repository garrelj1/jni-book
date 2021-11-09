CC=gcc

INCLUDE_DIRS=/usr/lib/jvm/java-8-openjdk-amd64/include /usr/lib/jvm/java-8-openjdk-amd64/include/linux 

CFLAGS=$(foreach dir, $(INCLUDE_DIRS), -I $(dir)) -shared 
DEPS=Prompt.h

.PHONY: prompt1
prompt1: Prompt.c $(DEPS)
	$(CC) $(CFLAGS) $< -o libPrompt.so

.PHONY: prompt2
prompt2: Prompt2.c $(DEPS)
	$(CC) $(CFLAGS) $< -o libPrompt.so

