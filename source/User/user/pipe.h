#ifndef _PIPE_H
#define _PIPE_H

#include "Global.h"
#include "Project.h"

typedef struct _Pipe_t {
	BYTE * beginPtr;
	BYTE * headPtr;
	BYTE * tailPtr;
	BYTE * endPtr;
}  Pipe_t;

void pipe_init(Pipe_t *pipe, BYTE *buffer, WORD size);
bit pipe_write(Pipe_t *pipe, BYTE value);
bit pipe_read(Pipe_t *pipe, BYTE *value);

#endif
