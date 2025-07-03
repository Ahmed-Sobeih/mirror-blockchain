#include <stdio.h>
#include <string.h>
#include <time.h>
#include "block.h"

Block create_genesis_block() {
    Block genesis;

    genesis.index = 0;
    genesis.timestamp = time(NULL);
    strcpy(genesis.data, "Genesis Block");
    strcpy(genesis.prev_hash, "0");  // No previous block
    strcpy(genesis.hash, "0");       // Placeholder for now
    genesis.nonce = 0;

    return genesis;
}
