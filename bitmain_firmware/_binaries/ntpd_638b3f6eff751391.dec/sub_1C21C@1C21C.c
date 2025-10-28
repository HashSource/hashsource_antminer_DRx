int sub_1C21C()
{
  unsigned int v0; // r3
  void *v1; // r2
  bool v2; // cc

  LOWORD(v0) = dword_CB470;
  if ( dword_CB470 )
  {
    v1 = (void *)*(unsigned __int8 *)(dword_CB470 + 66);
    if ( *(_BYTE *)(dword_CB470 + 66) )
    {
      LOWORD(v0) = ((_WORD)v1 << 8) & 0x3F00;
    }
    else
    {
      v0 = *(unsigned __int8 *)(dword_CB470 + 64);
      v2 = v0 > 0x2C;
      if ( v0 > 0x2C )
        v0 = *(unsigned __int8 *)(dword_CB470 + 66);
      else
        v1 = &unk_63698;
      if ( !v2 )
        LOWORD(v0) = (*((unsigned __int8 *)v1 + v0) << 8) & 0x3F00;
    }
  }
  return byte_7D3B1 & 0xF
       | (unsigned __int16)((unsigned __int8)(16 * byte_7D3B0) | (unsigned __int16)((unsigned __int8)byte_CB4B0 << 14))
       | (unsigned __int16)v0;
}
