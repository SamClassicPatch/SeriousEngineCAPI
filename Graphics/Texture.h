#ifndef SECAPI_GRAPHICS_TEXTURE_H
#define SECAPI_GRAPHICS_TEXTURE_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS
#define BYTES_PER_TEXEL 4   // all textures in engine are 4 bytes per pixel

// td_ulFlags bits
// (on disk and in memory)
#define TEX_ALPHACHANNEL (1UL<<0)   // texture has alpha channel (for old version support)
#define TEX_32BIT        (1UL<<1)   // texture needs to be in 32-bit quality uploaded if can
// (only in memory)
#define TEX_STATIC       (1UL<<5)   // remain loaded after being bound (i.e. uploaded - for base textures)
#define TEX_CONSTANT     (1UL<<6)   // cannot be changed (no mip-map disposing, no LOD biasing, no colorizing, nothing!)
#define TEX_TRANSPARENT  (1UL<<7)   // only one bit of alpha channel is enough (internal format GL_RGB5_A1)
#define TEX_EQUALIZED    (1UL<<8)   // texture has 128-gray last mipmap (i.e. can be discarded in shade mode)
#define TEX_GRAY         (1UL<<9)   // grayscale texture
#define TEX_WHITE        (1UL<<10)  // completely white texture (believe me, there are some cases)
#define TEX_KEEPCOLOR    (1UL<<11)  // don't (de)saturate (for heightmaps and such!)
#define TEX_SINGLEMIPMAP (1UL<<18)  // set if last uploading was in single-mipmap
#define TEX_PROBED       (1UL<<19)  // set if last binding was as probe-texture
// (flags that shows if texture mipmaps has been changed)
#define TEX_DISPOSED     (1UL<<20)  // largest mip-map(s) has been left-out
#define TEX_DITHERED     (1UL<<21)  // dithering has been applied on this texture
#define TEX_FILTERED     (1UL<<22)  // flitering has been applied on this texture
#define TEX_SATURATED    (1UL<<23)  // saturation has been adjusted on this texture
#define TEX_COLORIZED    (1UL<<24)  // mipmaps has been colorized on this texture
#define TEX_WASOLD       (1UL<<30)  // loaded from old format (version 3)
#endif

SECAPI CTextureData_* CTextureData_new();
SECAPI void CTextureData_delete(CTextureData_* p);
SECAPI DOUBLE CTextureData_td_ptegEffect_GetRenderingTime(CTextureData_* p);
SECAPI ULONG* CTextureData_td_ulFlags(CTextureData_* p);
SECAPI PIX* CTextureData_td_pixBufferWidth(CTextureData_* p);
SECAPI PIX* CTextureData_td_pixBufferHeight(CTextureData_* p);
SECAPI MEX* CTextureData_td_mexWidth(CTextureData_* p);
SECAPI MEX* CTextureData_td_mexHeight(CTextureData_* p);
SECAPI INDEX* CTextureData_td_ctFrames(CTextureData_* p);
SECAPI ULONG** CTextureData_td_pulFrames(CTextureData_* p);
SECAPI BOOL CTextureData_HasEffectTexture(const CTextureData_* p);
SECAPI INDEX CTextureData_ClampMipLevel(const CTextureData_* p, FLOAT mip);
SECAPI MEX CTextureData_GetWidth(const CTextureData_* p);
SECAPI MEX CTextureData_GetHeight(const CTextureData_* p);
SECAPI PIX CTextureData_GetPixWidth(const CTextureData_* p);
SECAPI PIX CTextureData_GetPixHeight(const CTextureData_* p);
SECAPI ULONG CTextureData_GetFlags(const CTextureData_* p);
SECAPI ULONG CTextureData_GetNoOfMips(const CTextureData_* p);
SECAPI ULONG CTextureData_GetNoOfFineMips(const CTextureData_* p);
SECAPI BOOL CTextureData_IsModified(CTextureData_* p);
SECAPI void CTextureData_Export_t(CTextureData_* p, CImageInfo_* i, INDEX frame);
SECAPI void CTextureData_Create_t(CTextureData_* p, const CImageInfo_* i, MEX wanted, INDEX fineMips, BOOL force32bit);
SECAPI void CTextureData_Clear(CTextureData_* p);
SECAPI void CTextureData_Force(CTextureData_* p, ULONG flags);
SECAPI COLOR CTextureData_GetTexel(CTextureData_* p, MEX u, MEX v);
SECAPI void CTextureData_FetchRow(CTextureData_* p, PIX row, void* dst, INDEX channel, BOOL convertToFloat);
SECAPI ULONG* CTextureData_GetRowPointer(CTextureData_* p, PIX row);

SECAPI CTextureObject_* CTextureObject_new();
SECAPI void CTextureObject_delete(CTextureObject_* p);
SECAPI MEX CTextureObject_GetWidth(const CTextureObject_* p);
SECAPI MEX CTextureObject_GetHeight(const CTextureObject_* p);
SECAPI ULONG CTextureObject_GetFlags(const CTextureObject_* p);
SECAPI void CTextureObject_SetData_t(CTextureObject_* p, const CTFileName_* f);
SECAPI const CTFileName_* CTextureObject_GetName(CTextureObject_* p);

SECAPI void CreateTexture_t_(const CTFileName_* f, MEX mex, INDEX mips, BOOL force32bit);
SECAPI void CreateTexture_t_o(const CTFileName_* f, const CTFileName_* of, MEX mex, INDEX mips, BOOL force32bit);
SECAPI void ProcessScript_t_(const CTFileName_* f);

#ifdef __cplusplus
}
#endif

#endif
