void __fastcall sub_250D8(_DWORD *a1)
{
  _DWORD *v2; // r5
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(v3, "submit_nonce_2");
    sub_343C4(7, v3, 0);
  }
  v2 = sub_1B0EC();
  sub_19F60((int)v2, a1, 0);
  sub_24A24((int)v2);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v3, 0x800u, "%s end", "submit_nonce_2");
    sub_343C4(7, v3, 0);
  }
}
