#ifndef BLOCK_H
#define BLOCK_H

#include <time.h>

#define HASH_SIZE 65    // 64 chars + null terminator
#define DATA_SIZE 256

typedef struct Block {
    int index;
    time_t timestamp;
    char data[256];
    char prev_hash[65];
    char hash[65];
    int nonce;
} Block;
Block create_genesis_block();

#endif // BLOCK_H
