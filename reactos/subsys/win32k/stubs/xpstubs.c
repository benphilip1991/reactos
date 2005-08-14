/*
 * Stubs for unimplemented WIN32K.SYS exports that are only available
 * in Windows XP and beyond ( i.e. a low priority for us right now )
 */

#include <w32k.h>

#define STUB(x) void x(void) { DbgPrint("WIN32K: Stub for %s\n", #x); }
#define UNIMPLEMENTED DbgPrint("(%s:%i) WIN32K: %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__ )

BOOL
STDCALL
EngAlphaBlend(
  IN SURFOBJ  *psoDest,
  IN SURFOBJ  *psoSrc,
  IN CLIPOBJ  *pco,
  IN XLATEOBJ  *pxlo,
  IN RECTL  *prclDest,
  IN RECTL  *prclSrc,
  IN BLENDOBJ  *pBlendObj)
{
  UNIMPLEMENTED;
  return FALSE;
}

BOOL
STDCALL
EngControlSprites(
  IN WNDOBJ  *pwo,
  IN FLONG  fl)
{
  UNIMPLEMENTED;
  return FALSE;
}

