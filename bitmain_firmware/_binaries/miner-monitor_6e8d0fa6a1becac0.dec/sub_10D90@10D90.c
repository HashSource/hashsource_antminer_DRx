_DWORD *__fastcall sub_10D90(int a1, int a2)
{
  _DWORD *v2; // r4
  const char *v3; // r5

  v2 = *(_DWORD **)(a2 + 4);
  if ( v2 )
  {
    v3 = (const char *)(a1 + 4104);
    do
    {
      if ( !strcmp((const char *)(*v2 + 4104), v3) )
        break;
      v2 = (_DWORD *)v2[1];
    }
    while ( v2 );
  }
  return v2;
}
