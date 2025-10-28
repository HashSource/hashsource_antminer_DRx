void sub_366E4()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *v2; // r0
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = calloc(1u, 0x188u);
  if ( !v0 )
    _assert_fail("cgpu", "driver-btm-dcr.c", 0x1A12u, "bitmain_dcr_detect");
  v1 = v0;
  v0[1] = &unk_6D768;
  v0[8] = 0;
  v0[37] = 1;
  v2 = calloc(0x1340u, 1u);
  v1[5] = v2;
  if ( !v2 )
  {
    strcpy(v3, "Failed to calloc cgpu_info data");
    sub_343C4(3, v3, 1);
    sub_26B0C(1);
  }
  if ( !sub_26EF4(v1) )
    _assert_fail("add_cgpu(cgpu)", "driver-btm-dcr.c", 0x1A1Au, "bitmain_dcr_detect");
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v3, 0x800u, "%s detect new device", "bitmain_dcr_detect");
    sub_343C4(7, v3, 0);
  }
}
