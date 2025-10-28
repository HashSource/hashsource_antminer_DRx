int __fastcall hs_header_verify_pow(_BYTE *a1, const void *a2)
{
  _BYTE v4[32]; // [sp+0h] [bp-20h] BYREF

  hs_header_pow(a1, v4);
  if ( memcmp(v4, a2, 0x20u) <= 0 )
    return 0;
  else
    return 20;
}
