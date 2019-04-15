#ifndef SECURE_H
#define SECURE_H
#include <stdint.h>
#include "mem_layout.h"

#define METADATA_OFFSET APP_META
#define PAGE_SIZE 256

void load_image(uint8_t *page_buf, uint16_t offset);
uint8_t verify_activate_image();

#endif
