void __fastcall sub_252E4(int a1, int a2, int a3)
{
  int v3; // r3
  _DWORD *v5; // r5
  int v6; // r6
  double v7; // d16
  double v8; // d16
  double v9; // d17
  double v10; // d16
  int v11; // r2
  double v12; // d18
  double v13; // d16
  double v14; // d17
  double v15; // d16
  pthread_t v16; // [sp+Ch] [bp-808h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v3 = *(_DWORD *)(a1 + 76);
  if ( !v3 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      strcpy(s, "Get A Error Data To Push!DROP!\r\n");
      sub_38438(4, s, 0);
    }
    return;
  }
  v5 = *(_DWORD **)(a1 + 260);
  sub_2B13C(a1 + 432, a2, a3, v3);
  if ( byte_615C9 )
  {
    v6 = *(_DWORD *)(sub_1C36C(*(_DWORD *)(a1 + 256)) + 36);
    if ( pthread_mutex_lock(&mutex) )
      sub_B4E4("submit_work_async", 8238);
    ++*(_DWORD *)(v6 + 36);
    ++*((_QWORD *)v5 + 1);
    v7 = *(double *)(v6 + 200) + *(double *)(a1 + 376);
    ++qword_639C8;
    *(double *)(v6 + 200) = v7;
    v8 = *(double *)(a1 + 376);
    v9 = *((double *)v5 + 9) + v8;
    v10 = v8 + dbl_63B88;
    *((double *)v5 + 9) = v9;
    dbl_63B88 = v10;
    if ( pthread_mutex_unlock(&mutex) )
      sub_B694("submit_work_async", 8245);
    off_60178();
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(
        s,
        0x800u,
        "Accepted %s %d benchmark share nonce %08x",
        *(const char **)(*(_DWORD *)(v6 + 4) + 8),
        *(_DWORD *)(v6 + 8),
        *(_DWORD *)(a1 + 76));
      sub_38438(7, s, 0);
    }
    return;
  }
  if ( !sub_2282C(a1, 1) )
  {
    v11 = (unsigned __int8)byte_630C1;
    goto LABEL_17;
  }
  if ( byte_600AD )
  {
    v11 = (unsigned __int8)byte_630C1;
    if ( !byte_630C1 )
      goto LABEL_37;
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      goto LABEL_36;
    snprintf(s, 0x800u, "Pool %d stale share detected, submitting as user requested", *v5);
    goto LABEL_48;
  }
  if ( *((_BYTE *)v5 + 104) )
  {
    v11 = (unsigned __int8)byte_630C1;
    if ( !byte_630C1 )
    {
LABEL_37:
      *(_BYTE *)(a1 + 281) = 1;
LABEL_17:
      if ( *(_BYTE *)(a1 + 284) )
      {
        if ( v11 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf(s, 0x800u, "Pushing pool %d work to stratum queue", *v5);
          sub_38438(7, s, 0);
        }
        if ( !sub_2AB68(v5[174], a1) )
        {
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            strcpy(s, "Discarding work from removed pool");
            sub_38438(7, s, 0);
          }
          sub_152B8((void **)a1);
        }
      }
      else
      {
        if ( v11 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          strcpy(s, "Pushing submit work to work thread");
          sub_38438(7, s, 0);
        }
        if ( pthread_create(&v16, 0, sub_F7C0, (void *)a1) )
        {
          strcpy(s, "Failed to create submit_work_thread");
          sub_38438(3, s, 1);
          sub_16724(1);
        }
      }
      return;
    }
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
    {
LABEL_36:
      v11 = 1;
      goto LABEL_37;
    }
    snprintf(s, 0x800u, "Pool %d stale share detected, submitting as pool requested", *v5);
LABEL_48:
    sub_38438(7, s, 0);
    v11 = (unsigned __int8)byte_630C1;
    goto LABEL_37;
  }
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "Pool %d stale share detected, discarding", *v5);
    sub_38438(7, s, 0);
  }
  sub_1D408("discard", (_DWORD *)a1);
  if ( pthread_mutex_lock(&mutex) )
    sub_B4E4("submit_work_async", 8263);
  v12 = *((double *)v5 + 11);
  ++v5[30];
  v13 = *(double *)(a1 + 376);
  v14 = v12 + v13;
  ++*(_QWORD *)&dword_64220;
  v15 = v13 + dbl_639D0;
  *((double *)v5 + 11) = v14;
  dbl_639D0 = v15;
  if ( pthread_mutex_unlock(&mutex) )
    sub_B694("submit_work_async", 8268);
  off_60178();
  sub_152B8((void **)a1);
}
