int sub_1CE6C()
{
  int v0; // r3
  int v1; // r10
  int v2; // r6
  double v3; // d8
  int v4; // r11
  double v5; // d9
  double v6; // d7
  __int64 v7; // r0
  __int64 v8; // r0
  __int64 v9; // r0
  double v10; // d6
  int v11; // r8
  int v12; // r6
  int v13; // r3
  const char *v14; // r1
  __int64 v15; // r10
  __int64 v16; // r0
  unsigned __int64 v17; // r0
  double v18; // d8
  double v19; // r0
  int v20; // r5
  int v21; // r0
  int v22; // r1
  int v23; // r3
  double v24; // d7
  unsigned int v26; // [sp+10h] [bp-924h]
  unsigned int v27; // [sp+1Ch] [bp-918h]
  char v28[256]; // [sp+30h] [bp-904h] BYREF
  char s[2052]; // [sp+130h] [bp-804h] BYREF

  v0 = dword_6DB8C - dword_6DCA0;
  if ( dword_6DB90 - dword_6DCA4 < 0 )
    --v0;
  v1 = v0 / 3600;
  v2 = v0 % 60;
  v3 = dbl_73790 / dbl_6C2C0 * 60.0;
  v4 = v0 % 3600 / 60;
  v5 = dbl_73D88 / dbl_6C2C0 * 60.0;
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3
    || (strcpy(s, "\nSummary of runtime statistics:\n"), sub_343C4(4, s, 0), !byte_73320)
    && !byte_6FA70
    && dword_6D35C <= 3 )
  {
    if ( dword_72EF0 == 1 )
      goto LABEL_159;
LABEL_8:
    if ( byte_73320 || byte_6FA70 )
      goto LABEL_10;
    goto LABEL_140;
  }
  snprintf(s, 0x800u, "Started at %s", byte_6DD14);
  sub_343C4(4, s, 0);
  if ( dword_72EF0 != 1 )
    goto LABEL_8;
  if ( byte_73320 || byte_6FA70 )
    goto LABEL_160;
LABEL_159:
  if ( dword_6D35C > 3 )
  {
LABEL_160:
    snprintf(s, 0x800u, "Pool: %s", *(const char **)(*(_DWORD *)dword_732EC + 172));
    sub_343C4(4, s, 0);
    goto LABEL_8;
  }
LABEL_140:
  if ( dword_6D35C <= 3 )
  {
    v6 = dbl_739E8 / dbl_6C2C0;
    goto LABEL_142;
  }
LABEL_10:
  snprintf(s, 0x800u, "Runtime: %d hrs : %d mins : %d secs", v1, v4, v2);
  sub_343C4(4, s, 0);
  v6 = dbl_739E8 / dbl_6C2C0;
  if ( byte_73320 || byte_6FA70 )
  {
LABEL_12:
    snprintf(s, 0x800u, "Average hashrate: %.1f Mhash/s", v6);
    sub_343C4(4, s, 0);
    if ( byte_73320 || byte_6FA70 )
      goto LABEL_14;
    goto LABEL_178;
  }
LABEL_142:
  if ( dword_6D35C > 3 )
    goto LABEL_12;
LABEL_178:
  if ( dword_6D35C <= 3 )
    goto LABEL_179;
LABEL_14:
  snprintf(s, 0x800u, "Solved blocks: %d", dword_72F78);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 )
  {
LABEL_179:
    if ( dword_6D35C <= 3 )
      goto LABEL_180;
  }
  snprintf(s, 0x800u, "Best share difficulty: %s", dword_6CA70);
  sub_343C4(4, s, 0);
  if ( byte_73320 || byte_6FA70 )
  {
LABEL_18:
    v7 = sub_4A154(COERCE_UNSIGNED_INT64(dbl_73790 + dbl_73CA8), HIDWORD(COERCE_UNSIGNED_INT64(dbl_73790 + dbl_73CA8)));
    snprintf(s, 0x800u, "Share submissions: %lld", v7);
    sub_343C4(4, s, 0);
    if ( byte_73320 || byte_6FA70 )
      goto LABEL_20;
    goto LABEL_181;
  }
LABEL_180:
  if ( dword_6D35C > 3 )
    goto LABEL_18;
LABEL_181:
  if ( dword_6D35C <= 3 )
    goto LABEL_182;
LABEL_20:
  v8 = sub_4A154(LODWORD(dbl_73790), HIDWORD(dbl_73790));
  snprintf(s, 0x800u, "Accepted shares: %lld", v8);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 )
  {
LABEL_182:
    if ( dword_6D35C <= 3 )
      goto LABEL_54;
  }
  v9 = sub_4A154(LODWORD(dbl_73CA8), HIDWORD(dbl_73CA8));
  snprintf(s, 0x800u, "Rejected shares: %lld", v9);
  sub_343C4(4, s, 0);
  if ( byte_73320 || byte_6FA70 )
  {
LABEL_24:
    snprintf(s, 0x800u, "Accepted difficulty shares: %1.f", dbl_72D90);
    sub_343C4(4, s, 0);
    if ( byte_73320 || byte_6FA70 )
      goto LABEL_26;
    goto LABEL_55;
  }
LABEL_54:
  if ( dword_6D35C > 3 )
    goto LABEL_24;
LABEL_55:
  if ( dword_6D35C <= 3 )
  {
    v10 = dbl_73790;
    if ( dbl_73790 != 0.0 )
      goto LABEL_172;
    goto LABEL_57;
  }
LABEL_26:
  snprintf(s, 0x800u, "Rejected difficulty shares: %1.f", dbl_72E30);
  sub_343C4(4, s, 0);
  v10 = dbl_73790;
  if ( dbl_73790 != 0.0 )
  {
    if ( !byte_73320 )
      goto LABEL_28;
LABEL_29:
    snprintf(s, 0x800u, "Reject ratio: %.1f%%", dbl_73CA8 * 100.0 / (dbl_73CA8 + v10));
    sub_343C4(4, s, 0);
LABEL_30:
    if ( byte_73320 || byte_6FA70 )
      goto LABEL_32;
    goto LABEL_148;
  }
LABEL_57:
  if ( dbl_73CA8 == 0.0 )
    goto LABEL_30;
  if ( byte_73320 )
    goto LABEL_29;
LABEL_28:
  if ( byte_6FA70 )
    goto LABEL_29;
LABEL_172:
  if ( dword_6D35C > 3 )
    goto LABEL_29;
LABEL_148:
  if ( dword_6D35C <= 3 )
    goto LABEL_149;
LABEL_32:
  snprintf(s, 0x800u, "Hardware errors: %d", dword_72D08);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
  {
LABEL_149:
    if ( dword_6D35C <= 3 )
      goto LABEL_150;
    goto LABEL_36;
  }
  snprintf(s, 0x800u, "Utility (accepted shares / min): %.2f/min", v3);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
  {
LABEL_150:
    if ( dword_6D35C <= 3 )
      goto LABEL_151;
    goto LABEL_38;
  }
LABEL_36:
  snprintf(s, 0x800u, "Work Utility (diff1 shares solved / min): %.2f/min\n", v5);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
  {
LABEL_151:
    if ( dword_6D35C <= 3 )
      goto LABEL_152;
    goto LABEL_40;
  }
LABEL_38:
  snprintf(s, 0x800u, "Stale submissions discarded due to new blocks: %lld", *(_QWORD *)&dword_72C38);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
  {
LABEL_152:
    if ( dword_6D35C <= 3 )
      goto LABEL_153;
    goto LABEL_42;
  }
LABEL_40:
  snprintf(s, 0x800u, "Unable to get work from server occasions: %d", dword_7367C);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
  {
LABEL_153:
    if ( dword_6D35C <= 3 )
      goto LABEL_154;
    goto LABEL_44;
  }
LABEL_42:
  snprintf(s, 0x800u, "Work items generated locally: %d", dword_73CA0);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
  {
LABEL_154:
    if ( dword_6D35C <= 3 )
      goto LABEL_155;
    goto LABEL_46;
  }
LABEL_44:
  snprintf(s, 0x800u, "Submitting work remotely delay occasions: %d", dword_732B8);
  sub_343C4(4, s, 0);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
  {
LABEL_155:
    if ( dword_72EF0 <= 1 )
      goto LABEL_144;
    goto LABEL_47;
  }
LABEL_46:
  snprintf(s, 0x800u, "New blocks detected on network: %d\n", dword_73A18);
  sub_343C4(4, s, 0);
  if ( dword_72EF0 > 1 )
  {
LABEL_47:
    v11 = 0;
    while ( 1 )
    {
      v12 = *(_DWORD *)(dword_732EC + 4 * v11);
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
        break;
      v13 = *(_DWORD *)(v12 + 32);
      if ( v13 )
        goto LABEL_52;
LABEL_66:
      if ( !byte_6FA70 )
      {
LABEL_113:
        if ( dword_6D35C <= 3 )
          goto LABEL_114;
      }
LABEL_67:
      snprintf(s, 0x800u, " Share submissions: %lld", *(_QWORD *)(v12 + 8) + *(_QWORD *)(v12 + 16));
      sub_343C4(4, s, 0);
      if ( byte_73320 || byte_6FA70 )
      {
LABEL_69:
        snprintf(s, 0x800u, " Accepted shares: %lld", *(_QWORD *)(v12 + 8));
        sub_343C4(4, s, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_71;
        goto LABEL_115;
      }
LABEL_114:
      if ( dword_6D35C > 3 )
        goto LABEL_69;
LABEL_115:
      if ( dword_6D35C <= 3 )
        goto LABEL_116;
LABEL_71:
      snprintf(s, 0x800u, " Rejected shares: %lld", *(_QWORD *)(v12 + 16));
      sub_343C4(4, s, 0);
      if ( !byte_73320 && !byte_6FA70 )
      {
LABEL_116:
        if ( dword_6D35C <= 3 )
          goto LABEL_117;
      }
      snprintf(s, 0x800u, " Accepted difficulty shares: %1.f", *(double *)(v12 + 72));
      sub_343C4(4, s, 0);
      if ( byte_73320 || byte_6FA70 )
      {
LABEL_75:
        snprintf(s, 0x800u, " Rejected difficulty shares: %1.f", *(double *)(v12 + 80));
        sub_343C4(4, s, 0);
        v15 = *(_QWORD *)(v12 + 8);
        if ( v15 )
          goto LABEL_78;
        goto LABEL_76;
      }
LABEL_117:
      if ( dword_6D35C > 3 )
        goto LABEL_75;
      v15 = *(_QWORD *)(v12 + 8);
      if ( v15 )
      {
        if ( dword_6D35C <= 3 )
          goto LABEL_120;
        goto LABEL_80;
      }
LABEL_76:
      if ( *(_QWORD *)(v12 + 16) )
      {
        v15 = 0;
LABEL_78:
        if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
        {
LABEL_120:
          if ( dword_6D35C <= 3 )
            goto LABEL_121;
          goto LABEL_83;
        }
LABEL_80:
        v27 = *(_DWORD *)(v12 + 16);
        HIDWORD(v16) = (unsigned __int64)(3LL * *(_QWORD *)(v12 + 16)) >> 32;
        LODWORD(v16) = 96 * v27;
        v26 = *(_DWORD *)(v12 + 20);
        v17 = __PAIR64__((unsigned __int64)(96LL * *(_QWORD *)(v12 + 16)) >> 32, 3 * v27) + v16 + __PAIR64__(v26, v27);
        v18 = sub_4A0BC(v17, HIDWORD(v17));
        v19 = sub_4A0BC(v27 + (unsigned int)v15, (__PAIR64__(v26, v27) + v15) >> 32);
        snprintf(s, 0x800u, " Reject ratio: %.1f%%", v18 / v19);
        sub_343C4(4, s, 0);
      }
      if ( !byte_73320 && !byte_6FA70 )
        goto LABEL_120;
LABEL_83:
      snprintf(s, 0x800u, " Items worked on: %d", *(_DWORD *)(v12 + 68));
      sub_343C4(4, s, 0);
      if ( byte_73320 || byte_6FA70 )
      {
LABEL_85:
        snprintf(s, 0x800u, " Stale submissions discarded due to new blocks: %d", *(_DWORD *)(v12 + 124));
        sub_343C4(4, s, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_87;
        goto LABEL_122;
      }
LABEL_121:
      if ( dword_6D35C > 3 )
        goto LABEL_85;
LABEL_122:
      if ( dword_6D35C <= 3 )
        goto LABEL_123;
LABEL_87:
      snprintf(s, 0x800u, " Unable to get work from server occasions: %d", *(_DWORD *)(v12 + 132));
      sub_343C4(4, s, 0);
      if ( !byte_73320 && !byte_6FA70 )
      {
LABEL_123:
        if ( dword_6D35C <= 3 )
          goto LABEL_90;
      }
      snprintf(s, 0x800u, " Submitting work remotely delay occasions: %d\n", *(_DWORD *)(v12 + 136));
      sub_343C4(4, s, 0);
LABEL_90:
      if ( dword_72EF0 <= ++v11 )
        goto LABEL_91;
    }
    snprintf(s, 0x800u, "Pool: %s", *(const char **)(v12 + 172));
    sub_343C4(4, s, 0);
    v13 = *(_DWORD *)(v12 + 32);
    if ( v13 )
    {
      if ( !byte_73320 && !byte_6FA70 )
      {
LABEL_52:
        if ( dword_6D35C <= 3 )
          goto LABEL_113;
      }
      v14 = "S";
      if ( v13 <= 1 )
        v14 = &byte_57FF0;
      snprintf(s, 0x800u, "SOLVED %d BLOCK%s!", v13, v14);
      sub_343C4(4, s, 0);
    }
    if ( byte_73320 )
      goto LABEL_67;
    goto LABEL_66;
  }
LABEL_91:
  if ( byte_73320 || byte_6FA70 )
    goto LABEL_93;
LABEL_144:
  if ( dword_6D35C > 3 )
  {
LABEL_93:
    strcpy(s, "Summary of per device statistics:\n");
    sub_343C4(4, s, 0);
  }
  if ( dword_735E8 > 0 )
  {
    v20 = 0;
    do
    {
      v21 = sub_1CBB4(v20++);
      *(_DWORD *)(*(_DWORD *)(v21 + 4) + 20) = nullsub_1;
      *(_DWORD *)(*(_DWORD *)(v21 + 4) + 24) = nullsub_2;
      sub_1B5A8(v28, 0xFFu, v21);
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
      {
        snprintf(s, 0x800u, "%s", v28);
        sub_343C4(4, s, 0);
      }
    }
    while ( dword_735E8 > v20 );
  }
  v22 = dword_6DD3C;
  v23 = (unsigned __int8)byte_73320;
  if ( dword_6DD3C )
  {
    v24 = dbl_72D90;
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
    {
      if ( (double)dword_6DD3C <= dbl_72D90 )
        goto LABEL_146;
      goto LABEL_106;
    }
    snprintf(s, 0x800u, "Mined %.0f accepted shares of %d requested\n", dbl_72D90, dword_6DD3C);
    sub_343C4(4, s, 0);
    v24 = dbl_72D90;
    v22 = dword_6DD3C;
    v23 = (unsigned __int8)byte_73320;
    if ( (double)dword_6DD3C > dbl_72D90 )
    {
      if ( byte_73320 )
      {
LABEL_108:
        snprintf(s, 0x800u, "WARNING - Mined only %.0f shares of %d requested.", v24, v22);
        sub_343C4(4, s, 0);
        v23 = (unsigned __int8)byte_73320;
        goto LABEL_109;
      }
LABEL_106:
      if ( !byte_6FA70 && dword_6D35C <= 3 )
      {
LABEL_146:
        if ( dword_6D35C <= 3 )
          goto LABEL_112;
        goto LABEL_111;
      }
      goto LABEL_108;
    }
  }
LABEL_109:
  if ( !v23 && !byte_6FA70 )
    goto LABEL_146;
LABEL_111:
  strcpy(s, " ");
  sub_343C4(4, s, 0);
LABEL_112:
  fflush((FILE *)stderr);
  return fflush((FILE *)stdout);
}
