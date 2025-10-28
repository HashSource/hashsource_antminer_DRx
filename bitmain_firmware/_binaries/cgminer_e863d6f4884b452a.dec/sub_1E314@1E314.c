int __fastcall sub_1E314(_DWORD *a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v3, 0x800u, "Stratum connection to pool %d resumed", *a1);
    sub_343C4(7, v3, 0);
  }
  return sub_1E240((int)a1);
}
