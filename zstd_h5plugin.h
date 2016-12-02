#include "hdf5.h"

#define DLL_EXPORT __declspec(dllexport) 

#ifdef __cplusplus
extern "C" {
#endif

DLL_EXPORT size_t zstd_filter(unsigned int flags, size_t cd_nelmts,
                              const unsigned int cd_values[], size_t nbytes,
                              size_t *buf_size, void **buf);

DLL_EXPORT H5PL_type_t H5PLget_plugin_type(void);
DLL_EXPORT const void* H5PLget_plugin_info(void);

#ifdef __cplusplus
}
#endif
