void sub_424B4()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *v2; // r0
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = calloc(1u, 0x188u);
  v1 = v0;
  if ( !v0 )
    _assert_fail("cgpu", "driver-btm-dcr.c", 0x1A06u, "bitmain_dcr_detect");
  v0[1] = &unk_7A938;
  v0[8] = 0;
  v0[37] = 1;
  v2 = calloc(0x1340u, 1u);
  v1[5] = v2;
  if ( !v2 )
  {
    strcpy(v3, "Failed to calloc cgpu_info data");
    sub_3F178(3, v3, 1);
    sub_134A4(1);
  }
  if ( !sub_27C00(v1) )
    _assert_fail("add_cgpu(cgpu)", "driver-btm-dcr.c", 0x1A0Eu, "bitmain_dcr_detect");
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(v3, 0x800u, "%s detect new device", "bitmain_dcr_detect");
    sub_3F178(7, v3, 0);
  }
}
