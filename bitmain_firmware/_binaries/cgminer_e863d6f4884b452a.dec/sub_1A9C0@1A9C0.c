int __fastcall sub_1A9C0(int a1)
{
  double v1; // d0
  double v3; // d7
  double v4; // d8
  double v5; // d8
  double v6; // r0
  int v7; // r1
  __int64 v8; // r2
  __int64 v9; // r0
  __int64 v10; // r2
  char *v11; // r6
  __int64 v13; // [sp+0h] [bp-820h] BYREF
  __int64 v14; // [sp+8h] [bp-818h]
  __int64 v15; // [sp+10h] [bp-810h]
  __int64 v16; // [sp+18h] [bp-808h]
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( v1 == 0.0 )
  {
    if ( byte_73320 || byte_6FA70 || (v1 = 1.0, dword_6D35C > 2) )
    {
      strcpy(s, "Diff zero passed to set_target");
      sub_343C4(3, s, 0);
      v1 = 1.0;
    }
  }
  v3 = 2.69595353e67;
  if ( byte_73D04 )
    v3 = 1.7668201e72;
  v16 = sub_4A178(
          COERCE_UNSIGNED_INT64(v3 / v1 * 1.59309191e-58),
          HIDWORD(COERCE_UNSIGNED_INT64(v3 / v1 * 1.59309191e-58)));
  v4 = v3 / v1 - sub_4A0AC(v16, HIDWORD(v16)) * 6.27710174e57;
  v15 = sub_4A178(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39)));
  v5 = v4 - sub_4A0AC(v15, HIDWORD(v15)) * 3.40282367e38;
  v14 = sub_4A178(COERCE_UNSIGNED_INT64(v5 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v5 * 5.42101086e-20)));
  v6 = sub_4A0AC(v14, HIDWORD(v14));
  v13 = sub_4A178(
          COERCE_UNSIGNED_INT64(v5 - v6 * 1.84467441e19),
          HIDWORD(COERCE_UNSIGNED_INT64(v5 - v6 * 1.84467441e19)));
  if ( byte_6FA71 )
  {
    v11 = (char *)sub_2826C(&v13, 32);
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "Generated target %s", v11);
      sub_343C4(7, s, 0);
    }
    free(v11);
  }
  v7 = HIDWORD(v13);
  v8 = v14;
  *(_DWORD *)a1 = v13;
  *(_DWORD *)(a1 + 4) = v7;
  *(_QWORD *)(a1 + 8) = v8;
  v9 = v15;
  v10 = v16;
  *(_QWORD *)(a1 + 16) = v15;
  *(_QWORD *)(a1 + 24) = v10;
  return v9;
}
