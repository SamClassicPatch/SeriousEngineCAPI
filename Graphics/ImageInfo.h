#ifndef SECAPI_GRAPHICS_IMAGE_INFO_H
#define SECAPI_GRAPHICS_IMAGE_INFO_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS
#define UNSUPPORTED_FILE 0L
#define PCX_FILE         1L
#define TGA_FILE         2L
#endif

SECAPI CImageInfo_* CImageInfo_new();
SECAPI void CImageInfo_delete(CImageInfo_* p);
SECAPI PIX* CImageInfo_ii_Width(CImageInfo_* p);
SECAPI PIX* CImageInfo_ii_Height(CImageInfo_* p);
SECAPI SLONG* CImageInfo_ii_BitsPerPixel(CImageInfo_* p);
SECAPI UBYTE** CImageInfo_ii_Picture(CImageInfo_* p);
SECAPI void CImageInfo_Read_t(CImageInfo_* p, CTStream_* s);
SECAPI void CImageInfo_Write_t(const CImageInfo_* p, CTStream_* s);
SECAPI void CImageInfo_Attach(CImageInfo_* p, UBYTE* pic, PIX wid, PIX hei, SLONG bpp);
SECAPI void CImageInfo_Detach(CImageInfo_* p);
SECAPI void CImageInfo_Clear(CImageInfo_* p);
SECAPI void CImageInfo_ExpandEdges(CImageInfo_* p, INDEX passes);
SECAPI INDEX CImageInfo_GetGfxFileInfo_t(CImageInfo_* p, const CTFileName_* f);
SECAPI void CImageInfo_LoadAnyGfxFormat_t(CImageInfo_* p, const CTFileName_* f);
SECAPI void CImageInfo_SaveTGA_t(const CImageInfo_* p, const CTFileName_* f);

#ifdef __cplusplus
}
#endif

#endif
