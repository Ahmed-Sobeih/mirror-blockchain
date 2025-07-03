#include <stdio.h>
#include "block.h"

int main() {
    printf("🪞 Mirror Blockchain Node Starting...\n");

    Block genesis = create_genesis_block();

    printf("\n--- Genesis Block ---\n");
    printf("Index: %d\n", genesis.index);
    printf("Timestamp: %ld\n", genesis.timestamp);
    printf("Data: %s\n", genesis.data);
    printf("Prev Hash: %s\n", genesis.prev_hash);
    printf("Hash: %s\n", genesis.hash);
    printf("Nonce: %d\n", genesis.nonce);
    return 0;
}

