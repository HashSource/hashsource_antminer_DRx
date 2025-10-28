int sub_16C3C()
{
  int v0; // r2
  int v1; // r5
  int v2; // r6
  int v3; // r4
  double v4; // d8
  double v5; // d9
  double v6; // d16
  __int64 v7; // r0
  __int64 v8; // r0
  __int64 v9; // r0
  int i; // r10
  int v11; // r6
  int v12; // r3
  const char *v13; // r2
  __int64 v14; // r4
  double v15; // d8
  double v16; // r0
  int v17; // r4
  int v18; // r0
  __int64 v20; // [sp+10h] [bp-914h]
  char v21[256]; // [sp+20h] [bp-904h] BYREF
  char s[2052]; // [sp+120h] [bp-804h] BYREF

  v0 = dword_7AF04 - dword_7AE50;
  if ( dword_7AF08 - dword_7AE54 < 0 )
    --v0;
  v1 = v0 / 3600;
  v2 = v0 % 3600 / 60;
  v3 = v0 % 60;
  v4 = dbl_80550 / dbl_79458 * 60.0;
  v5 = dbl_80230 / dbl_79458 * 60.0;
  if ( (byte_7FE78 || byte_7CC60 || dword_7A52C > 3)
    && ((strcpy(s, "\nSummary of runtime statistics:\n"), sub_3F178(4, s, 0), byte_7FE78) || byte_7CC60)
    || dword_7A52C > 3 )
  {
    snprintf(s, 0x800u, "Started at %s", byte_7AF0C);
    sub_3F178(4, s, 0);
  }
  if ( dword_802C8 != 1 )
  {
LABEL_15:
    if ( byte_7FE78 || byte_7CC60 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(s, 0x800u, "Pool: %s", *(const char **)(*(_DWORD *)dword_80568 + 172));
    sub_3F178(4, s, 0);
    goto LABEL_15;
  }
LABEL_17:
  if ( dword_7A52C <= 3 )
  {
    v6 = dbl_7FDF0 / dbl_79458;
    goto LABEL_20;
  }
LABEL_18:
  snprintf(s, 0x800u, "Runtime: %d hrs : %d mins : %d secs", v1, v2, v3);
  sub_3F178(4, s, 0);
  v6 = dbl_7FDF0 / dbl_79458;
  if ( !byte_7FE78 && !byte_7CC60 )
  {
LABEL_20:
    if ( dword_7A52C <= 3 )
      goto LABEL_23;
  }
  snprintf(s, 0x800u, "Average hashrate: %.1f Mhash/s", v6);
  sub_3F178(4, s, 0);
  if ( byte_7FE78 || byte_7CC60 )
  {
LABEL_24:
    snprintf(s, 0x800u, "Solved blocks: %d", dword_80A60);
    sub_3F178(4, s, 0);
    if ( byte_7FE78 || byte_7CC60 )
      goto LABEL_27;
    goto LABEL_26;
  }
LABEL_23:
  if ( dword_7A52C > 3 )
    goto LABEL_24;
LABEL_26:
  if ( dword_7A52C <= 3 )
    goto LABEL_29;
LABEL_27:
  snprintf(s, 0x800u, "Best share difficulty: %s", (const char *)&dword_79C24);
  sub_3F178(4, s, 0);
  if ( !byte_7FE78 && !byte_7CC60 )
  {
LABEL_29:
    if ( dword_7A52C <= 3 )
      goto LABEL_32;
  }
  v7 = sub_5EDE0(COERCE_UNSIGNED_INT64(dbl_80550 + dbl_808A0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_80550 + dbl_808A0)));
  snprintf(s, 0x800u, "Share submissions: %lld", v7);
  sub_3F178(4, s, 0);
  if ( byte_7FE78 || byte_7CC60 )
  {
LABEL_33:
    v8 = sub_5EDE0(LODWORD(dbl_80550), HIDWORD(dbl_80550));
    snprintf(s, 0x800u, "Accepted shares: %lld", v8);
    sub_3F178(4, s, 0);
    if ( byte_7FE78 || byte_7CC60 )
      goto LABEL_36;
    goto LABEL_35;
  }
LABEL_32:
  if ( dword_7A52C > 3 )
    goto LABEL_33;
LABEL_35:
  if ( dword_7A52C <= 3 )
    goto LABEL_38;
LABEL_36:
  v9 = sub_5EDE0(LODWORD(dbl_808A0), HIDWORD(dbl_808A0));
  snprintf(s, 0x800u, "Rejected shares: %lld", v9);
  sub_3F178(4, s, 0);
  if ( !byte_7FE78 && !byte_7CC60 )
  {
LABEL_38:
    if ( dword_7A52C <= 3 )
      goto LABEL_41;
  }
  snprintf(s, 0x800u, "Accepted difficulty shares: %1.f", dbl_80790);
  sub_3F178(4, s, 0);
  if ( byte_7FE78 || byte_7CC60 )
    goto LABEL_42;
LABEL_41:
  if ( dword_7A52C > 3 )
  {
LABEL_42:
    snprintf(s, 0x800u, "Rejected difficulty shares: %1.f", dbl_80818);
    sub_3F178(4, s, 0);
  }
  if ( dbl_80550 == 0.0 && dbl_808A0 == 0.0 )
  {
LABEL_49:
    if ( byte_7FE78 || byte_7CC60 )
      goto LABEL_52;
    goto LABEL_51;
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(s, 0x800u, "Reject ratio: %.1f%%", dbl_808A0 * 100.0 / (dbl_80550 + dbl_808A0));
    sub_3F178(4, s, 0);
    goto LABEL_49;
  }
LABEL_51:
  if ( dword_7A52C <= 3 )
    goto LABEL_54;
LABEL_52:
  snprintf(s, 0x800u, "Hardware errors: %d", dword_80A4C);
  sub_3F178(4, s, 0);
  if ( !byte_7FE78 && !byte_7CC60 )
  {
LABEL_54:
    if ( dword_7A52C <= 3 )
      goto LABEL_57;
  }
  snprintf(s, 0x800u, "Utility (accepted shares / min): %.2f/min", v4);
  sub_3F178(4, s, 0);
  if ( byte_7FE78 || byte_7CC60 )
  {
LABEL_58:
    snprintf(s, 0x800u, "Work Utility (diff1 shares solved / min): %.2f/min\n", v5);
    sub_3F178(4, s, 0);
    if ( byte_7FE78 || byte_7CC60 )
      goto LABEL_61;
    goto LABEL_60;
  }
LABEL_57:
  if ( dword_7A52C > 3 )
    goto LABEL_58;
LABEL_60:
  if ( dword_7A52C <= 3 )
    goto LABEL_63;
LABEL_61:
  snprintf(s, 0x800u, "Stale submissions discarded due to new blocks: %lld", dbl_80EB0);
  sub_3F178(4, s, 0);
  if ( !byte_7FE78 && !byte_7CC60 )
  {
LABEL_63:
    if ( dword_7A52C <= 3 )
      goto LABEL_66;
  }
  snprintf(s, 0x800u, "Unable to get work from server occasions: %d", dword_8056C);
  sub_3F178(4, s, 0);
  if ( byte_7FE78 || byte_7CC60 )
  {
LABEL_67:
    snprintf(s, 0x800u, "Work items generated locally: %d", dword_80678);
    sub_3F178(4, s, 0);
    if ( byte_7FE78 || byte_7CC60 )
      goto LABEL_70;
    goto LABEL_69;
  }
LABEL_66:
  if ( dword_7A52C > 3 )
    goto LABEL_67;
LABEL_69:
  if ( dword_7A52C <= 3 )
    goto LABEL_72;
LABEL_70:
  snprintf(s, 0x800u, "Submitting work remotely delay occasions: %d", dword_7FF98);
  sub_3F178(4, s, 0);
  if ( !byte_7FE78 && !byte_7CC60 )
  {
LABEL_72:
    if ( dword_7A52C <= 3 )
      goto LABEL_74;
  }
  snprintf(s, 0x800u, "New blocks detected on network: %d\n", dword_80D48);
  sub_3F178(4, s, 0);
LABEL_74:
  if ( dword_802C8 >= 2 )
  {
    for ( i = 0; dword_802C8 > i; ++i )
    {
      v11 = *(_DWORD *)(dword_80568 + 4 * i);
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
      {
        snprintf(s, 0x800u, "Pool: %s", *(_DWORD *)(v11 + 172));
        sub_3F178(4, s, 0);
      }
      v12 = *(_DWORD *)(v11 + 32);
      if ( v12 )
      {
        if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 3 )
        {
LABEL_90:
          if ( dword_7A52C <= 3 )
            goto LABEL_93;
          goto LABEL_91;
        }
        if ( v12 <= 1 )
          v13 = &byte_6DF60;
        else
          v13 = "S";
        snprintf(s, 0x800u, "SOLVED %d BLOCK%s!", v12, v13);
        sub_3F178(4, s, 0);
      }
      if ( !byte_7FE78 && !byte_7CC60 )
        goto LABEL_90;
LABEL_91:
      snprintf(s, 0x800u, " Share submissions: %lld", *(_QWORD *)(v11 + 16) + *(_QWORD *)(v11 + 8));
      sub_3F178(4, s, 0);
      if ( byte_7FE78 || byte_7CC60 )
      {
LABEL_94:
        snprintf(s, 0x800u, " Accepted shares: %lld", *(_QWORD *)(v11 + 8));
        sub_3F178(4, s, 0);
        if ( byte_7FE78 || byte_7CC60 )
          goto LABEL_97;
        goto LABEL_96;
      }
LABEL_93:
      if ( dword_7A52C > 3 )
        goto LABEL_94;
LABEL_96:
      if ( dword_7A52C <= 3 )
        goto LABEL_99;
LABEL_97:
      snprintf(s, 0x800u, " Rejected shares: %lld", *(_QWORD *)(v11 + 16));
      sub_3F178(4, s, 0);
      if ( !byte_7FE78 && !byte_7CC60 )
      {
LABEL_99:
        if ( dword_7A52C <= 3 )
          goto LABEL_102;
      }
      snprintf(s, 0x800u, " Accepted difficulty shares: %1.f", *(double *)(v11 + 72));
      sub_3F178(4, s, 0);
      if ( byte_7FE78 || byte_7CC60 )
      {
LABEL_103:
        snprintf(s, 0x800u, " Rejected difficulty shares: %1.f", *(double *)(v11 + 80));
        sub_3F178(4, s, 0);
        goto LABEL_104;
      }
LABEL_102:
      if ( dword_7A52C > 3 )
        goto LABEL_103;
LABEL_104:
      v14 = *(_QWORD *)(v11 + 8);
      if ( v14 || *(_QWORD *)(v11 + 16) )
      {
        if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 3 )
          goto LABEL_112;
        v20 = *(_QWORD *)(v11 + 16);
        v15 = sub_5ED34(100 * (int)v20, (unsigned __int64)(100 * v20) >> 32);
        v16 = sub_5ED34((int)v14 + (int)v20, (unsigned __int64)(v14 + v20) >> 32);
        snprintf(s, 0x800u, " Reject ratio: %.1f%%", v15 / v16);
        sub_3F178(4, s, 0);
      }
      if ( byte_7FE78 || byte_7CC60 )
      {
LABEL_113:
        snprintf(s, 0x800u, " Items worked on: %d", *(_DWORD *)(v11 + 68));
        sub_3F178(4, s, 0);
        if ( byte_7FE78 || byte_7CC60 )
          goto LABEL_116;
        goto LABEL_115;
      }
LABEL_112:
      if ( dword_7A52C > 3 )
        goto LABEL_113;
LABEL_115:
      if ( dword_7A52C <= 3 )
        goto LABEL_118;
LABEL_116:
      snprintf(s, 0x800u, " Stale submissions discarded due to new blocks: %d", *(_DWORD *)(v11 + 124));
      sub_3F178(4, s, 0);
      if ( !byte_7FE78 && !byte_7CC60 )
      {
LABEL_118:
        if ( dword_7A52C <= 3 )
          goto LABEL_121;
      }
      snprintf(s, 0x800u, " Unable to get work from server occasions: %d", *(_DWORD *)(v11 + 132));
      sub_3F178(4, s, 0);
      if ( byte_7FE78 || byte_7CC60 )
      {
LABEL_122:
        snprintf(s, 0x800u, " Submitting work remotely delay occasions: %d\n", *(_DWORD *)(v11 + 136));
        sub_3F178(4, s, 0);
        continue;
      }
LABEL_121:
      if ( dword_7A52C > 3 )
        goto LABEL_122;
    }
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    strcpy(s, "Summary of per device statistics:\n");
    sub_3F178(4, s, 0);
  }
  if ( dword_808C8 > 0 )
  {
    v17 = 0;
    do
    {
      v18 = sub_13D08(v17);
      *(_DWORD *)(*(_DWORD *)(v18 + 4) + 20) = 49564;
      *(_DWORD *)(*(_DWORD *)(v18 + 4) + 24) = 49568;
      sub_16A64(v21, 0xFFu, v18);
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
      {
        snprintf(s, 0x800u, "%s", v21);
        sub_3F178(4, s, 0);
      }
      ++v17;
    }
    while ( dword_808C8 > v17 );
  }
  if ( dword_7AF34 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
    {
      snprintf(s, 0x800u, "Mined %.0f accepted shares of %d requested\n", dbl_80790, dword_7AF34);
      sub_3F178(4, s, 0);
    }
    if ( (double)dword_7AF34 > dbl_80790 )
    {
      if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 3 )
        goto LABEL_147;
      snprintf(s, 0x800u, "WARNING - Mined only %.0f shares of %d requested.", dbl_80790, dword_7AF34);
      sub_3F178(4, s, 0);
    }
  }
  if ( byte_7FE78 || byte_7CC60 )
    goto LABEL_148;
LABEL_147:
  if ( dword_7A52C > 3 )
  {
LABEL_148:
    strcpy(s, " ");
    sub_3F178(4, s, 0);
  }
  fflush((FILE *)stderr);
  return fflush((FILE *)stdout);
}
