_DWORD *__fastcall sub_FE58(void **a1)
{
  int v2; // r0
  const char *v3; // r6
  int v4; // r4
  _DWORD *v5; // r5
  const unsigned __int16 **v6; // r0
  const char *v7; // r1
  int v8; // t1

  v2 = sub_10D64(8);
  v3 = (const char *)*a1;
  v4 = *(unsigned __int8 *)*a1;
  v5 = (_DWORD *)v2;
  if ( *(_BYTE *)*a1 )
  {
    v6 = _ctype_b_loc();
    v7 = v3;
    while ( ((*v6)[v4] & 0x800) != 0 )
    {
      v8 = *(unsigned __int8 *)++v7;
      v4 = v8;
      if ( !v8 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( sscanf(v3, "%u", v5) == 1 && *v5 < 0x10000u )
    {
      sub_FC04(a1);
      v5[1] = 0;
      return v5;
    }
  }
  v5[1] = a1;
  *v5 = 0;
  return v5;
}
