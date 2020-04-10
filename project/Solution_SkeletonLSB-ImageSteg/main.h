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

typedef unsigned long uint64;


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

//Open file function
Status open_files(EncodeInfo *encInfo, OperationType result);

/* check capacity */
Status check_capacity(EncodeInfo *encInfo);

/* Get image size */
uint64 get_image_size_for_bmp(FILE *fptr_image);

/* Get file size */
uint get_file_size(FILE *fptr);

/* Copy bmp image header */
Status copy_bmp_header(FILE * fptr_src_image, FILE *fptr_dest_image);

//encode Magic string
Status encode_one_byte(unsigned char ch, EncodeInfo encInfo);

//copy remaining bytes
Status copy_remaining_img_data(FILE *fptr_src_image, FILE *fptr_stego_image);

//Decode
char decode_one_byte(EncodeInfo encInfo);

//encode password
Status pass_encode( EncodeInfo encInfo, char *argv[]);

//Decode password
char pass_decode( EncodeInfo encInfo);

//Encode Extension
Status encode_extension(EncodeInfo encInfo, char *argv[]);

//Decode Extension
char decode_extension(EncodeInfo encInfo);

short decode_size(EncodeInfo encInfo);

//
void encode_secret_file(EncodeInfo encInfo, short int size);

//
Status decode_secret_file(EncodeInfo encInfo, short int size, char *extension);
#endif
