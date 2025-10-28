int __fastcall sub_24F6C(int a1, _DWORD *a2, unsigned int a3)
{
  int v6; // r0
  _BOOL4 v7; // r0
  int v8; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(s, "submit_nonce");
    sub_343C4(7, s, 0);
  }
  v6 = sub_17534(*(_DWORD **)(a1 + 36), a3);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "%s ret1 = %d", "submit_nonce", v6);
    sub_343C4(7, s, 0);
  }
  v7 = sub_1B33C(a2, a3);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "%s ret2 = %d", "submit_nonce", v7);
    sub_343C4(7, s, 0);
  }
  if ( sub_17534(*(_DWORD **)(a1 + 36), a3) && (v8 = sub_1B33C(a2, a3)) != 0 )
  {
    sub_24EFC(a1, a2);
    if ( dword_6DC8C && byte_6F390 )
    {
      v8 = (unsigned __int8)byte_6F390;
      sub_16D28((int)a2, a3);
    }
  }
  else
  {
    v8 = 0;
    sub_1C5E4(a1);
  }
  return v8;
}
