int sub_1AECC()
{
  int v0; // r3
  double v1; // d9
  int v2; // r7
  int v3; // r5
  int v4; // r9
  double v5; // d10
  double v6; // d9
  __int64 v7; // r6
  __int64 v8; // r10
  double v9; // d8
  double v10; // r0
  int v11; // r11
  int v12; // r1
  int v13; // r2
  __int64 v14; // r4
  __int64 v15; // kr08_8
  double v16; // d8
  double v17; // r0
  int v18; // r4
  int v19; // r0
  int v20; // r0
  int v21; // r2
  double v22; // d16
  int v23; // r3
  const char *v25; // r2
  int v26; // [sp+18h] [bp-914h]
  char v27[256]; // [sp+28h] [bp-904h] BYREF
  char s[2052]; // [sp+128h] [bp-804h] BYREF

  v0 = dword_613E4 - dword_61370;
  if ( dword_613E8 - dword_61374 < 0 )
    --v0;
  v1 = dbl_5F898;
  v2 = v0 / 3600;
  v3 = v0 % 60;
  v4 = v0 % 3600 / 60;
  v5 = sub_493DC(qword_639C8, HIDWORD(qword_639C8)) / v1 * 60.0;
  v6 = sub_493DC(dword_636A8, dword_636AC) / v1 * 60.0;
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    strcpy(s, "\nSummary of runtime statistics:\n");
    sub_38438(4, s, 0);
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      snprintf(s, 0x800u, "Started at %s", byte_613EC);
      sub_38438(4, s, 0);
    }
  }
  if ( dword_63740 == 1 )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
      goto LABEL_28;
    snprintf(s, 0x800u, "Pool: %s", *(const char **)(*(_DWORD *)dword_639E0 + 164));
    sub_38438(4, s, 0);
  }
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(s, 0x800u, "Runtime: %d hrs : %d mins : %d secs", v2, v4, v3);
    sub_38438(4, s, 0);
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      snprintf(s, 0x800u, "Average hashrate: %.1f Mhash/s", dbl_63268 / dbl_5F898);
      sub_38438(4, s, 0);
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(s, 0x800u, "Solved blocks: %d", dword_63E58);
        sub_38438(4, s, 0);
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          snprintf(s, 0x800u, "Best share difficulty: %s", (const char *)&dword_60064);
          sub_38438(4, s, 0);
          if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
          {
            snprintf(s, 0x800u, "Share submissions: %lld", qword_63C98 + qword_639C8);
            sub_38438(4, s, 0);
            if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
            {
              snprintf(s, 0x800u, "Accepted shares: %lld", qword_639C8);
              sub_38438(4, s, 0);
              if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
              {
                snprintf(s, 0x800u, "Rejected shares: %lld", qword_63C98);
                sub_38438(4, s, 0);
                if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
                {
                  snprintf(s, 0x800u, "Accepted difficulty shares: %1.f", dbl_63B88);
                  sub_38438(4, s, 0);
                  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
                  {
                    snprintf(s, 0x800u, "Rejected difficulty shares: %1.f", dbl_63C10);
                    sub_38438(4, s, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  v7 = qword_639C8;
  if ( qword_639C8 || qword_63C98 )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
      goto LABEL_50;
    v8 = qword_63C98;
    v9 = sub_493DC(100 * (int)qword_63C98, (unsigned __int64)(100 * qword_63C98) >> 32);
    v10 = sub_493DC((int)v7 + (int)v8, (unsigned __int64)(v7 + v8) >> 32);
    snprintf(s, 0x800u, "Reject ratio: %.1f%%", v9 / v10);
    sub_38438(4, s, 0);
  }
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(s, 0x800u, "Hardware errors: %d", dword_63E44);
    sub_38438(4, s, 0);
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      snprintf(s, 0x800u, "Utility (accepted shares / min): %.2f/min", v5);
      sub_38438(4, s, 0);
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(s, 0x800u, "Work Utility (diff1 shares solved / min): %.2f/min\n", v6);
        sub_38438(4, s, 0);
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          snprintf(s, 0x800u, "Stale submissions discarded due to new blocks: %lld", *(_QWORD *)&dword_64220);
          sub_38438(4, s, 0);
          if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
          {
            snprintf(s, 0x800u, "Unable to get work from server occasions: %d", dword_639E4);
            sub_38438(4, s, 0);
            if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
            {
              snprintf(s, 0x800u, "Work items generated locally: %d", dword_63A70);
              sub_38438(4, s, 0);
              if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
              {
                snprintf(s, 0x800u, "Submitting work remotely delay occasions: %d", dword_63410);
                sub_38438(4, s, 0);
                if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
                {
                  snprintf(s, 0x800u, "New blocks detected on network: %d\n", dword_640BC);
                  sub_38438(4, s, 0);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_50:
  if ( dword_63740 > 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      v11 = *(_DWORD *)(dword_639E0 + 4 * v26);
      if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
        break;
      snprintf(s, 0x800u, "Pool: %s", *(const char **)(v11 + 164));
      sub_38438(4, s, 0);
      v12 = *(_DWORD *)(v11 + 32);
      v13 = (unsigned __int8)byte_632F0;
      if ( !v12 )
        goto LABEL_103;
      if ( !byte_632F0 )
        goto LABEL_59;
LABEL_100:
      v25 = "S";
      if ( v12 <= 1 )
        v25 = "";
      snprintf(s, 0x800u, "SOLVED %d BLOCK%s!", v12, v25);
      sub_38438(4, s, 0);
      v13 = (unsigned __int8)byte_632F0;
LABEL_103:
      if ( !v13 )
      {
LABEL_104:
        if ( !byte_630C0 && dword_60964 <= 3 )
          goto LABEL_61;
      }
      snprintf(s, 0x800u, " Share submissions: %lld", *(_QWORD *)(v11 + 16) + *(_QWORD *)(v11 + 8));
      sub_38438(4, s, 0);
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(s, 0x800u, " Accepted shares: %lld", *(_QWORD *)(v11 + 8));
        sub_38438(4, s, 0);
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          snprintf(s, 0x800u, " Rejected shares: %lld", *(_QWORD *)(v11 + 16));
          sub_38438(4, s, 0);
          if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
          {
            snprintf(s, 0x800u, " Accepted difficulty shares: %1.f", *(double *)(v11 + 72));
            sub_38438(4, s, 0);
            if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
            {
              snprintf(s, 0x800u, " Rejected difficulty shares: %1.f", *(double *)(v11 + 80));
              sub_38438(4, s, 0);
            }
          }
        }
      }
LABEL_61:
      if ( !*(_QWORD *)(v11 + 8) && !*(_QWORD *)(v11 + 16) )
        goto LABEL_67;
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        v14 = *(_QWORD *)(v11 + 16);
        v15 = *(_QWORD *)(v11 + 8);
        v16 = sub_493DC(100 * (int)v14, (unsigned __int64)(100 * v14) >> 32);
        v17 = sub_493DC((int)v15 + (int)v14, (unsigned __int64)(v15 + v14) >> 32);
        snprintf(s, 0x800u, " Reject ratio: %.1f%%", v16 / v17);
        sub_38438(4, s, 0);
LABEL_67:
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          snprintf(s, 0x800u, " Items worked on: %d", *(_DWORD *)(v11 + 68));
          sub_38438(4, s, 0);
          if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
          {
            snprintf(s, 0x800u, " Stale submissions discarded due to new blocks: %d", *(_DWORD *)(v11 + 120));
            sub_38438(4, s, 0);
            if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
            {
              snprintf(s, 0x800u, " Unable to get work from server occasions: %d", *(_DWORD *)(v11 + 128));
              sub_38438(4, s, 0);
              if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
              {
                snprintf(s, 0x800u, " Submitting work remotely delay occasions: %d\n", *(_DWORD *)(v11 + 132));
                sub_38438(4, s, 0);
              }
            }
          }
        }
      }
      if ( dword_63740 <= ++v26 )
        goto LABEL_77;
    }
    v12 = *(_DWORD *)(v11 + 32);
    if ( !v12 )
      goto LABEL_104;
LABEL_59:
    if ( !byte_630C0 && dword_60964 <= 3 )
      goto LABEL_61;
    goto LABEL_100;
  }
LABEL_77:
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    strcpy(s, "Summary of per device statistics:\n");
    sub_38438(4, s, 0);
  }
  if ( dword_63CC0 > 0 )
  {
    v18 = 0;
    do
    {
      v19 = v18++;
      v20 = sub_1AB68(v19);
      *(_DWORD *)(*(_DWORD *)(v20 + 4) + 20) = nullsub_1;
      *(_DWORD *)(*(_DWORD *)(v20 + 4) + 24) = nullsub_3;
      sub_1715C(v27, 0xFFu, v20);
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(s, 0x800u, "%s", v27);
        sub_38438(4, s, 0);
      }
    }
    while ( dword_63CC0 > v18 );
  }
  v21 = dword_61414;
  if ( !dword_61414 )
    goto LABEL_95;
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(s, 0x800u, "Mined %.0f accepted shares of %d requested\n", dbl_63B88, dword_61414);
    sub_38438(4, s, 0);
    v21 = dword_61414;
    v22 = dbl_63B88;
    v23 = (unsigned __int8)byte_632F0;
    if ( (double)dword_61414 <= dbl_63B88 )
      goto LABEL_96;
    if ( byte_632F0 )
      goto LABEL_94;
  }
  else
  {
    v22 = dbl_63B88;
    if ( (double)dword_61414 <= dbl_63B88 )
    {
LABEL_97:
      if ( !byte_630C0 && dword_60964 <= 3 )
        goto LABEL_99;
LABEL_98:
      strcpy(s, " ");
      sub_38438(4, s, 0);
      goto LABEL_99;
    }
  }
  if ( byte_630C0 || dword_60964 > 3 )
  {
LABEL_94:
    snprintf(s, 0x800u, "WARNING - Mined only %.0f shares of %d requested.", v22, v21);
    sub_38438(4, s, 0);
LABEL_95:
    v23 = (unsigned __int8)byte_632F0;
LABEL_96:
    if ( v23 )
      goto LABEL_98;
    goto LABEL_97;
  }
LABEL_99:
  fflush((FILE *)stderr);
  return fflush((FILE *)stdout);
}
