_DWORD *__fastcall sub_1B2B8(_DWORD *result, int a2)
{
  int v2; // r5
  int v3; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = (int)result;
  if ( dword_6CA78 )
  {
    if ( dword_6CA78 != 1 )
    {
      strcpy(v4, "Fatal Error Coin Type");
      sub_343C4(3, v4, 1);
      sub_1B070(1, 1);
    }
    result[35] = a2;
    v3 = dword_6CA78;
    if ( dword_6CA78 )
    {
LABEL_5:
      if ( v3 != 1 )
        return result;
      return (_DWORD *)sub_19C00(v2 + 244, v2);
    }
  }
  else
  {
    result[8] = a2;
    v3 = dword_6CA78;
    if ( dword_6CA78 )
      goto LABEL_5;
  }
  result = (_DWORD *)sub_19BB8(result);
  if ( dword_6CA78 == 1 )
    return (_DWORD *)sub_19C00(v2 + 244, v2);
  return result;
}
