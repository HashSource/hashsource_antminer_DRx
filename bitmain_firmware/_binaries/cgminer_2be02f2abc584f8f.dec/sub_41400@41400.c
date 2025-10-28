void sub_41400()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *v2; // r0
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = calloc(1u, 0x188u);
  v1 = v0;
  if ( !v0 )
    _assert_fail("cgpu", "driver-btm-dcr.c", 0x179Au, "bitmain_dcr_detect");
  v0[1] = &unk_738F0;
  v0[8] = 0;
  v0[37] = 1;
  v2 = calloc(0x10E0u, 1u);
  v1[5] = v2;
  if ( !v2 )
  {
    strcpy(v3, "Failed to calloc cgpu_info data");
    sub_3F1C0(3, v3, 1);
    sub_132C4(1);
  }
  if ( !sub_279F0(v1) )
    _assert_fail("add_cgpu(cgpu)", "driver-btm-dcr.c", 0x17A2u, "bitmain_dcr_detect");
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(v3, 0x800u, "%s detect new device", "bitmain_dcr_detect");
    sub_3F1C0(7, v3, 0);
  }
}
