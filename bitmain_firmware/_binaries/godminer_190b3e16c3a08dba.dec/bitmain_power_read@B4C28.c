int __fastcall bitmain_power_read(__int16 a1, int a2, int a3)
{
  int v6; // r5
  unsigned __int8 *v7; // r0
  int v8; // r3
  int v9; // r4
  char v10; // t1
  int v12; // r2
  int v13; // [sp+14h] [bp-183Ch] BYREF
  char v14; // [sp+18h] [bp-1838h]
  char v15; // [sp+19h] [bp-1837h]
  __int16 v16; // [sp+1Ah] [bp-1836h]
  unsigned __int8 v17[52]; // [sp+1Ch] [bp-1834h] BYREF
  char s[2048]; // [sp+50h] [bp-1800h] BYREF
  char v19[4096]; // [sp+850h] [bp-1000h] BYREF

  memset(v17, 0, 0x32u);
  v14 = a1;
  v15 = a3;
  v13 = 101100117;
  v16 = a3 + 12 + a1;
  if ( dword_18C5EC )
  {
    v6 = 0;
  }
  else
  {
    v6 = sub_B38E8();
    if ( v6 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_read");
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, s);
      V_UNLOCK();
      v12 = 850;
LABEL_10:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "bitmain_power_read",
        18,
        v12,
        100,
        v19);
      return v6;
    }
  }
  if ( sub_B3030((void *)dword_18C5E8, (unsigned __int8 *)&v13, 8u, v17, a3 + 7) )
  {
    v6 = -2147482880;
    strcpy(s, "set DA conversion N failed");
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 860;
    goto LABEL_10;
  }
  if ( a3 )
  {
    v7 = &v17[4];
    v8 = a2 - 1;
    v9 = a2 + (unsigned __int8)(a3 - 1);
    do
    {
      v10 = *++v7;
      *(_BYTE *)++v8 = v10;
    }
    while ( v8 != v9 );
  }
  return v6;
}
