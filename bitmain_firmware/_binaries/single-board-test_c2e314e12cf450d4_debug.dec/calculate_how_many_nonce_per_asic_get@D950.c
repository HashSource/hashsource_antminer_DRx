int __fastcall calculate_how_many_nonce_per_asic_get(unsigned __int8 a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int i; // [sp+8h] [bp+8h]
  int v5; // [sp+Ch] [bp+Ch]

  v5 = 0;
  for ( i = 0; i < a3; ++i )
    v5 += *((_DWORD *)&gAsic_Core_Nonce_Num + 512 * ((a1 << 8) + a2) + i);
  return v5;
}
