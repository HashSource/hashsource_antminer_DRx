char *__fastcall sub_57084(char *a1, _DWORD *a2)
{
  char *v2; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int v8; // [sp+4h] [bp-8h] BYREF

  v2 = a1;
  v4 = (unsigned __int8)*a1;
  if ( *a1 )
  {
    v5 = sub_56EEC((unsigned __int8)*a1);
    v6 = v5;
    if ( v5 <= 0 )
    {
      return 0;
    }
    else
    {
      if ( v5 == 1 )
      {
        v8 = v4;
      }
      else if ( !sub_56F70(v2, v5, &v8) )
      {
        return 0;
      }
      if ( a2 )
        *a2 = v8;
      v2 += v6;
    }
  }
  return v2;
}
