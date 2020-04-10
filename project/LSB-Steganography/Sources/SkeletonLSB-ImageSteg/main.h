#include <stdio.h>
#include <string.h>
#ifndef MAIN_H
#define MAIN_H

//Macros
#define MAX_SECRET_BUF_SIZE 1
#define MAX_IMAGE_BUF_SIZE (MAX_SECRET_BUF_SIZE * 8)
#define MAX_FILE_SUFFIX 4
#define LP64
#define MAGIC_STRING "#*"
 
//Type def
/* User defined types */
typedef unsigned int uint;

#ifdef LP64
typedef unsigned long uint64;

#else
typedef unsigned long long uint64;
#endif

//enums
/* Status will be used in fn. return type */
typedef enum
{
	e_success,
	e_failure
} Status;

typedef enum
{
	e_encode,
	e_decode,
	e_unsupported
} OperationType;

//structure
typedef struct _EncodeInfo
{
   /* Source Image info */
	char *src_image_fname;
	FILE *fptr_src_image;
	uint image_capacity;
	uint bits_per_pixel;
	char image_data[MAX_IMAGE_BUF_SIZE];

  /* Secret File Info */
	char *secret_fname;
	FILE *fptr_secret;
	char extn_secret_file[MAX_FILE_SUFFIX];
	char secret_data[MAX_SECRET_BUF_SIZE];
	long size_secret_file;

  /* Stego Image Info */
	char *stego_image_fname;
	FILE *fptr_stego_image;

} EncodeInfo;

//Function prototypes
/* Read and validate args from argv */
	OperationType read_and_validate_cmdline_args(char *argv[], EncodeInfo *encInfo);

#endif
