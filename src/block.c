#include <stdio.h>
#include <string.h>
#include <time.h>
#include "block.h"
#include <openssl/sha.h>

void calculate_hash(Block* block) {
    char input[1024];
    snprintf(input, sizeof(input), "%d%ld%s%s%d",
             block->index,
             block->timestamp,
             block->data,
             block->prev_hash,
             block->nonce);

    unsigned char hash_raw[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)input, strlen(input), hash_raw);

    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        sprintf(block->hash + (i * 2), "%02x", hash_raw[i]);
    }
    block->hash[64] = '\0';
}

void mine_block(Block* block) {
    while (1) {
        calculate_hash(block);
        if (strncmp(block->hash, "00", 2) == 0) {
            printf("✅ Block mined! Nonce: %d\n", block->nonce);
            break;
        }
        block->nonce++;
    }
}





Block create_genesis_block() {
    Block block;

    block.index = 0;
    block.timestamp = time(NULL);
    strncpy(block.data, "Genesis Block", sizeof(block.data));
    strncpy(block.prev_hash, "0", sizeof(block.prev_hash));  // No previous block
    block.nonce = 0;

    calculate_hash(&block);
    mine_block(&block);

    return block;
}





