#ifndef __BUFFER_H
#define __BUFFER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void* idris_newBuffer(int bytes);

int idris_getBufferSize(void* buffer);

void idris_setBufferByte(void* buffer, int loc, uint8_t byte);
void idris_setBufferInt(void* buffer, int loc, int byte);
void idris_setBufferString(void* buffer, int loc, char* str);

void idris_copyBuffer(void* from, int start, int len,
                      void* to, int loc);

int idris_readBufferStr(char *from, void* buffer, int loc, int max);

void *_fileOpen(char *file, char *mode);
int idris_readBuffer(FILE* h, void* buffer, int loc, int max);
void idris_writeBuffer(FILE* h, void* buffer, int loc, int len);

uint8_t idris_getBufferByte(void* buffer, int loc);
int idris_getBufferInt(void* buffer, int loc);

#endif
