void sub_3A10C()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *v2; // r0
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = calloc(1u, 0x188u);
  v1 = v0;
  if ( !v0 )
    _assert_fail("cgpu", "driver-btm-L3.c", 0xEEEu, "bitmain_L3_detect");
  v0[37] = 1;
  v0[1] = &unk_60D68;
  v0[8] = 0;
  v2 = calloc(0x328u, 1u);
  v1[5] = v2;
  if ( !v2 )
  {
    strcpy(v3, "Failed to calloc cgpu_info data");
    sub_38438(3, v3, 1);
    sub_16724(1);
  }
  if ( !sub_27C18(v1) )
    _assert_fail("add_cgpu(cgpu)", "driver-btm-L3.c", 0xEF6u, "bitmain_L3_detect");
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v3, 0x800u, "%s detect new device", "bitmain_L3_detect");
    sub_38438(7, v3, 0);
  }
}
