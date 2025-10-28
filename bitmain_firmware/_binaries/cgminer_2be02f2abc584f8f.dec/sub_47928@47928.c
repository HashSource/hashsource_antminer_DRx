int __fastcall sub_47928(_WORD *a1)
{
  int v2; // r5
  int v3; // t1
  unsigned int v4; // r10
  int v5; // r4
  _WORD v7[1024]; // [sp+0h] [bp-808h] BYREF
  _DWORD v8[2]; // [sp+800h] [bp-8h] BYREF

  v8[0] = 0;
  v8[1] = 0;
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy((char *)v7, "every_chain_get_PIC16F1704_freq_new");
    sub_3F1C0(5, (const char *)v7, 0);
  }
  v2 = 603403;
  v5 = 0;
  v4 = 650;
  do
  {
    v3 = *(unsigned __int8 *)++v2;
    if ( v3 == 1 )
    {
      pthread_mutex_lock(&stru_75D80);
      sub_472D4((unsigned __int8)v5, (_WORD *)v8 + v5);
      if ( (unsigned __int16)v7[v5 + 1024] < v4 )
        v4 = (unsigned __int16)v7[v5 + 1024];
      pthread_mutex_unlock(&stru_75D80);
    }
    sub_2FF20();
    ++v5;
  }
  while ( v5 != 4 );
  *a1 = v4;
  return sub_2FF20();
}
