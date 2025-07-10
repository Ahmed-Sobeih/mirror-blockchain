#include <stdio.h>
#include "block.h"


int main() {
    Block chain[10];  // Fixed-size array for now

    printf("🪞 Mirror Blockchain Node Starting...\n");

    chain[0] = create_genesis_block();

    printf("\n--- Genesis Block ---\n");
    printf("Index: %d\n", chain[0].index);;
    printf("Timestamp: %ld\n", chain[0].timestamp);
    printf("Data: %s\n", chain[0].data);
    printf("Prev Hash: %s\n", chain[0].prev_hash);
    printf("Hash: %s\n", chain[0].hash);
    printf("Nonce: %d\n", chain[0].nonce);

    chain[1] = add_block(chain[0], "Second block data");

    printf("\n--- Second Block ---\n");
    printf("Index: %d\n", chain[1].index);
    printf("Timestamp: %ld\n", chain[1].timestamp);
    printf("Data: %s\n", chain[1].data);
    printf("Prev Hash: %s\n", chain[1].prev_hash);
    printf("Hash: %s\n", chain[1].hash);
    printf("Nonce: %d\n", chain[1].nonce);

    return 0;
}

