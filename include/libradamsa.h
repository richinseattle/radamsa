#ifndef LIBRADAMSA_H
#define LIBRADAMSA_H
#ifdef __cplusplus
extern "C" {
#endif

#ifndef WIN32
#define RADAMSA_LIB
#else
#ifdef LIB_RADAMSA
#define RADAMSA_LIB __declspec(dllexport)
#else
#define RADAMSA_LIB __declspec(dllimport)
#endif
#endif

int radamsa_file_to_mem(char *input_path, unsigned char **output_buf, size_t *output_size);
int radamsa_file_to_mem_ex(char *input_path, unsigned char **output_buf, size_t *output_size, int argc, char **argv);

int radamsa_mem_to_file(unsigned char *input_buf, const size_t input_size, char *output_path);
int radamsa_mem_to_file_ex(unsigned char *input_buf, const size_t input_size, char *output_path, int argc, char **argv);

int __stdcall RADAMSA_LIB radamsa_mem_to_mem(unsigned char *input_buf, const size_t input_size, unsigned char **output_buf, size_t *output_size);
int __stdcall RADAMSA_LIB radamsa_mem_to_mem_ex(unsigned char *input_buf, const size_t input_size, unsigned char **output_buf, size_t *output_size, int argc, char **argv);

#ifdef __cplusplus
}
#endif
#endif