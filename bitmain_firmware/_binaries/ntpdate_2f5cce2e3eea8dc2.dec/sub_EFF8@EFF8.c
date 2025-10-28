_DWORD *__fastcall sub_EFF8(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  if ( !a1 )
    off_21DCC("./../lib/isc/nls/msgcat.c", 64, 0, "name != ((void *)0)");
  if ( !a2 || *a2 )
    off_21DCC("./../lib/isc/nls/msgcat.c", 65, 0, "msgcatp != ((void *)0) && *msgcatp == ((void *)0)");
  result = malloc(4u);
  if ( result )
    *result = 1296261492;
  *a2 = result;
  return result;
}
