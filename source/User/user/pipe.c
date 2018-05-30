#include "pipe.h"

void pipe_init(Pipe_t *pipe, BYTE * buffer, WORD size)
{	
	(*pipe).beginPtr = buffer;
	(*pipe).endPtr = buffer+size;
	(*pipe).headPtr = buffer;
	(*pipe).tailPtr = buffer;
}

bit pipe_read(Pipe_t *pipe, BYTE * value)
{
	if((*pipe).headPtr != (*pipe).tailPtr)
	{
		*value = *((*pipe).tailPtr);
		(*pipe).tailPtr++;
		if((*pipe).tailPtr == (*pipe).endPtr)
			(*pipe).tailPtr = (*pipe).beginPtr;
		return _TRUE;
	}
	else
	{
		*value = 0xFF;
		return _FALSE;
	}
}

bit pipe_write(Pipe_t *pipe, BYTE value)
{
	if((*pipe).headPtr != (*pipe).tailPtr - 1)
	{
		if(((*pipe).headPtr != (*pipe).endPtr -1) || ((*pipe).tailPtr != (*pipe).beginPtr))
		{
			*((*pipe).headPtr) = value;
			(*pipe).headPtr++;
			if((*pipe).headPtr == (*pipe).endPtr)
			{
				(*pipe).headPtr = (*pipe).beginPtr;
			}
			return _TRUE;
			
		}
		else
		{
			return _FALSE;
		}
		
	}
	else
	{
		return _FALSE;
	}
}

