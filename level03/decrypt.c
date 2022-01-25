#include <stdio.h>
#include <string.h>

int main(void) {
	for (int i = 0; i < 21; i++) {
		char buffer[20] = "Q}|u`sfg~sf{}|a3";
		for (int j = 0; j < strlen(buffer); j++) {
			
			buffer[j] = buffer[j] ^ i;
		}
		printf("%d %s\n", 322424845 - i, buffer);
	}
}
