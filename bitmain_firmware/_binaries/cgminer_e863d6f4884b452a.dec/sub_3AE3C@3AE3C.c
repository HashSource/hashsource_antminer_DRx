int __fastcall sub_3AE3C(_WORD *a1)
{
  unsigned __int8 *v2; // r5
  int v3; // r4
  unsigned int v4; // r7
  int v5; // t1
  _DWORD v7[2]; // [sp+0h] [bp-80Ch] BYREF
  char v8[2052]; // [sp+8h] [bp-804h] BYREF

  v7[0] = 0;
  v7[1] = 0;
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v8, "every_chain_get_PIC16F1704_freq_new");
    sub_343C4(5, v8, 0);
  }
  v2 = (unsigned __int8 *)&unk_73EF0;
  v3 = 0;
  v4 = 650;
  do
  {
    v5 = *v2++;
    if ( v5 == 1 )
    {
      pthread_mutex_lock(&stru_6FCAC);
      sub_3A9EC((unsigned __int8)v3, (_WORD *)v7 + v3);
      if ( v4 >= *((unsigned __int16 *)v7 + v3) )
        v4 = *((unsigned __int16 *)v7 + v3);
      pthread_mutex_unlock(&stru_6FCAC);
    }
    ++v3;
    sub_2A7F4();
  }
  while ( v3 != 4 );
  *a1 = v4;
  return sub_2A7F4();
}
