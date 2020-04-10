#include "main.h"

OperationType read_and_validate_cmdline_args(char *argv[], EncodeInfo *encInfo)
{

	if ( strcmp(argv[1], "-e") || strcmp(argv[1], "-d"))
	{
		return e_unsupported;
	}

	if (strcmp(argv[1], "-e") == 0)
	{
		//If number of argument is less than six
		if(argv[5] == NULL)
		{
			return e_unsupported;
		}
		else
		{
			encInfo->secret_fname = argv[2];
			encInfo->src_image_fname = argv[3];
			encInfo->stego_image_fname = argv[4];

			return e_encode;
		}
	}

	if (strcmp(argv[1], "-d") == 0)
	{
		if( argv[5] != NULL)
		{
			return e_unsupported;
		}
		else
		{
			encInfo->stego_image_fname = argv[2];
			encInfo->secret_fname = argv[3];
			return e_decode;
		}
	}
}
