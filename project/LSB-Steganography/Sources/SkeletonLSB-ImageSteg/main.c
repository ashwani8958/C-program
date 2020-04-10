#include "main.h"
int main(int argc, char *argv[])
{

	//
	if(argc != 6 || argc != 5)
	{
		printf("Usage for encode: ");
		printf("./stegno -e secret.file src_image_fname stego_image_fname password\n");
		printf("Usage for decode: ");
		printf("./stegno -d stego_image_fname secret_fname password\n");
		return -1;
	}

	else
	{
		//Declare struture variable
		EncodeInfo encInfo;

		//Read and validate args from argv 
		read_and_validate_cmdline_args(argv, &encInfo);
	}

	return 0;

}
