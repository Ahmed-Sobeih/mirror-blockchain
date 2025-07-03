#ifndef BLOCK_H
#define BLOCK_H

#include <time.h>

#define HASH_SIZE 65    // 64 chars + null terminator
#define DATA_SIZE 256

typedef struct Block {
    int index;
    time_t timestamp;
    char data[DATA_SIZE];
    char prev_hash[HASH_SIZE];
    char hash[HASH_SIZE];
    int nonce;
} Block;
Block create_genesis_block();

#endif // BLOCK_H
