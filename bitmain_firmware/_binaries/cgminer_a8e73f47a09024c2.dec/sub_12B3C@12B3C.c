int __fastcall sub_12B3C(int a1)
{
  double v1; // d0
  double v3; // d8
  double v4; // d8
  double v5; // d8
  double v6; // d8
  double v7; // r0
  char *v8; // r5
  int v9; // r1
  __int64 v10; // r2
  __int64 v11; // r0
  __int64 v12; // r2
  char v14[2048]; // [sp+0h] [bp-824h] BYREF
  __int64 v15; // [sp+800h] [bp-24h] BYREF
  __int64 v16; // [sp+808h] [bp-1Ch]
  __int64 v17; // [sp+810h] [bp-14h]
  __int64 v18; // [sp+818h] [bp-Ch]

  if ( v1 == 0.0 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      strcpy(v14, "Diff zero passed to set_target");
      sub_3F178(3, v14, 0);
      v1 = 1.0;
    }
    else
    {
      v1 = 1.0;
    }
  }
  v3 = 1.7668201e72;
  if ( !byte_80A01 )
    v3 = 2.69595353e67;
  v4 = v3 / v1;
  v18 = sub_5EE18(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58)));
  v5 = v4 - sub_5ED20(v18, HIDWORD(v18)) * 6.27710174e57;
  v17 = sub_5EE18(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39)));
  v6 = v5 - sub_5ED20(v17, HIDWORD(v17)) * 3.40282367e38;
  v16 = sub_5EE18(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20)));
  v7 = sub_5ED20(v16, HIDWORD(v16));
  v15 = sub_5EE18(
          COERCE_UNSIGNED_INT64(v6 - v7 * 1.84467441e19),
          HIDWORD(COERCE_UNSIGNED_INT64(v6 - v7 * 1.84467441e19)));
  if ( byte_7CC61 )
  {
    v8 = (char *)sub_2D0B4(&v15, 32);
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(v14, 0x800u, "Generated target %s", v8);
      sub_3F178(7, v14, 0);
    }
    free(v8);
  }
  v9 = HIDWORD(v15);
  v10 = v16;
  *(_DWORD *)a1 = v15;
  *(_DWORD *)(a1 + 4) = v9;
  *(_QWORD *)(a1 + 8) = v10;
  v11 = v17;
  v12 = v18;
  *(_QWORD *)(a1 + 16) = v17;
  *(_QWORD *)(a1 + 24) = v12;
  return v11;
}
