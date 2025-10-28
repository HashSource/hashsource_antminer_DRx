int __fastcall sub_15D7C(int a1)
{
  double v1; // d0
  double v3; // d8
  double v4; // d8
  double v5; // d8
  double v6; // d8
  double v7; // r0
  int v8; // r1
  __int64 v9; // r2
  __int64 v10; // r0
  __int64 v11; // r2
  const char *v12; // r0
  char *v13; // r6
  __int64 v15; // [sp+0h] [bp-820h] BYREF
  __int64 v16; // [sp+8h] [bp-818h]
  __int64 v17; // [sp+10h] [bp-810h]
  __int64 v18; // [sp+18h] [bp-808h]
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( v1 == 0.0 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
    {
      strcpy(s, "Diff zero passed to set_target");
      sub_38438(3, s, 0);
      v1 = 1.0;
    }
    else
    {
      v1 = 1.0;
    }
  }
  v3 = 1.7668201e72;
  if ( !byte_63DF9 )
    v3 = 2.69595353e67;
  v4 = v3 / v1;
  v18 = sub_494C0(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58)));
  v5 = v4 - sub_493C8(v18) * 6.27710174e57;
  v17 = sub_494C0(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39)));
  v6 = v5 - sub_493C8(v17) * 3.40282367e38;
  v16 = sub_494C0(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20)));
  v7 = sub_493C8(v16);
  v15 = sub_494C0(
          COERCE_UNSIGNED_INT64(v6 - v7 * 1.84467441e19),
          HIDWORD(COERCE_UNSIGNED_INT64(v6 - v7 * 1.84467441e19)));
  if ( byte_630C1 )
  {
    v12 = (const char *)sub_294B8(&v15, 32);
    v13 = (char *)v12;
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "Generated target %s", v12);
      sub_38438(7, s, 0);
    }
    free(v13);
  }
  v8 = HIDWORD(v15);
  v9 = v16;
  *(_DWORD *)a1 = v15;
  *(_DWORD *)(a1 + 4) = v8;
  *(_QWORD *)(a1 + 8) = v9;
  v10 = v17;
  v11 = v18;
  *(_QWORD *)(a1 + 16) = v17;
  *(_QWORD *)(a1 + 24) = v11;
  return v10;
}
