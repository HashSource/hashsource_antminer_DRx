int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  char *all_created_runtime; // r5
  double v3; // d9
  double v4; // d8
  int v5; // r6
  char *v6; // r5
  int v7; // t1
  _BYTE *v8; // r5
  _DWORD *v9; // r9
  int *v10; // r8
  _BYTE *v11; // r6
  int i; // r4
  int v13; // r3
  int v14; // r0
  const char *v15; // r2
  int v16; // r3
  _DWORD *v17; // r8
  _DWORD *v18; // r6
  int j; // r4
  int v20; // r3
  const char *v21; // r2
  int v22; // r3
  int v23; // r0
  unsigned int v24; // r4
  int result; // r0
  int *v26; // r1
  _DWORD *v27; // r3
  int v28; // r0
  int *v29; // r1
  _DWORD *v30; // r3
  int v31; // r0
  int v32; // [sp+0h] [bp-218h] BYREF
  unsigned int v33; // [sp+4h] [bp-214h]
  double v34[2]; // [sp+8h] [bp-210h] BYREF
  char v35[12]; // [sp+1Ch] [bp-1FCh] BYREF
  _BYTE v36[496]; // [sp+28h] [bp-1F0h] BYREF

  v1 = 0;
  v32 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v32);
  v33 = 1;
  get_miner_elapsed_time();
  v3 = v0;
  get_miner_6060info_status(v36);
  v4 = 0.0;
  v34[0] = 0.0;
  if ( v32 > 0 )
  {
    v6 = all_created_runtime - 4;
    v5 = 0;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v1;
      v5 |= (*(int (**)(void))(v7 + 140))();
      v4 = v4 + v34[1];
    }
    while ( v32 > v1 );
  }
  else
  {
    v5 = 0;
  }
  if ( (unsigned int)(opt_algo - 6) <= 1 )
    v3 = v0 - 2700.0;
  if ( v3 < 1.0 )
  {
    result = 0;
    freq_scan_status = 0;
    return result;
  }
  if ( v5 )
  {
    LOWORD(v29) = -26952;
    LOWORD(v30) = 25344;
    HIWORD(v29) = (unsigned int)"ice %d wc %llu nc %llu detail: " >> 16;
    HIWORD(v30) = (unsigned int)&unk_1B51E8 >> 16;
    v31 = *v29;
    freq_scan_status = 2;
    *v30 = v31;
    if ( !v36[0] )
      goto LABEL_10;
    goto LABEL_42;
  }
  if ( v36[0] )
  {
LABEL_42:
    LOWORD(v26) = -26948;
    LOWORD(v27) = 25344;
    HIWORD(v26) = (unsigned int)"%d wc %llu nc %llu detail: " >> 16;
    v28 = *v26;
    HIWORD(v27) = (unsigned int)&unk_1B51E8 >> 16;
    freq_scan_status = 2;
    *v27 = v28;
  }
LABEL_10:
  v8 = v36;
  LOWORD(v9) = 25344;
  LOWORD(v10) = -26952;
  v11 = v36;
  for ( i = 0; i != 8; ++i )
  {
    while ( 1 )
    {
      v13 = (unsigned __int8)v11[24];
      v11 += 8;
      if ( v13 )
        break;
      if ( ++i == 8 )
        goto LABEL_14;
    }
    HIWORD(v10) = (unsigned int)"ice %d wc %llu nc %llu detail: " >> 16;
    v14 = *v10;
    LOWORD(v15) = -26944;
    v16 = i;
    freq_scan_status = 2;
    HIWORD(v15) = (unsigned int)"c %llu nc %llu detail: " >> 16;
    HIWORD(v9) = (unsigned int)&unk_1B51E8 >> 16;
    *v9 = v14;
    snprintf((char *)&search_failed_info, 0x100u, v15, v16);
  }
LABEL_14:
  LOWORD(v17) = 25344;
  LOWORD(v18) = -26952;
  for ( j = 0; j != 16; ++j )
  {
    while ( 1 )
    {
      v20 = (unsigned __int8)v8[216];
      v8 += 8;
      if ( v20 )
        break;
      if ( ++j == 16 )
        goto LABEL_18;
    }
    LOWORD(v21) = -26936;
    v22 = j;
    HIWORD(v21) = (unsigned int)"c %llu detail: " >> 16;
    HIWORD(v18) = (unsigned int)"ice %d wc %llu nc %llu detail: " >> 16;
    HIWORD(v17) = (unsigned int)&unk_1B51E8 >> 16;
    *v17 = *v18;
    freq_scan_status = 2;
    snprintf((char *)&search_failed_info, 0x100u, v21, v22);
  }
LABEL_18:
  v23 = frontend_runtime_instance();
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v23 + 72) + 16), v34, v35);
  v24 = v33;
  result = sub_146690((int)v34[0], v33) * v24;
  switch ( opt_algo )
  {
    case 6:
      result -= 50;
      if ( result > 3729 )
        return 3780;
LABEL_29:
      if ( (unsigned int)(result - 3630) <= 0x63 )
        return 3680;
      if ( (unsigned int)(result - 3530) <= 0x63 )
        return 3580;
      if ( (unsigned int)(result - 3430) <= 0x63 )
        return 3480;
      if ( (unsigned int)(result - 3330) <= 0x63 )
        return 3380;
      if ( (unsigned int)(result - 3230) <= 0x63 )
        return 3280;
      if ( (unsigned int)(result - 3130) <= 0x63 )
        return 3180;
      return sub_146690(result, v24) * v24;
    case 7:
      result = sub_146690(result, v24) * v24 - 50;
      if ( result > 3729 )
        return 3780;
      goto LABEL_29;
    case 9:
      if ( result < 860 )
      {
        if ( (unsigned int)(result - 840) > 0x13 )
        {
          if ( (unsigned int)(result - 820) > 0x13 )
          {
            if ( (unsigned int)(result - 800) > 0x13 )
            {
              if ( (unsigned int)(result - 780) > 0x13 )
              {
                if ( (unsigned int)(result - 350) > 0x1AD )
                  return 0;
                else
                  return 350;
              }
              else
              {
                return 780;
              }
            }
            else
            {
              return 800;
            }
          }
          else
          {
            return 820;
          }
        }
        else
        {
          return 840;
        }
      }
      else
      {
        return 860;
      }
    case 1:
      if ( result > 65999 )
        return (int)&elf_hash_bucket[5];
      if ( (unsigned int)(result - 63500) <= 0x9C3 )
        return 63500;
      if ( (unsigned int)(result - 60500) <= 0xBB7 )
        return 60500;
      if ( (unsigned int)(result - 58000) <= 0x9C3 )
        return 58000;
      return sub_146690(result, v24) * v24;
    case 2:
      if ( result > 172999 )
        return (int)sub_2A3C8;
      if ( (unsigned int)(result - 166000) <= 0x1B57 )
        return (int)&loc_28870;
      return sub_146690(result, v24) * v24;
    case 5:
      if ( result <= 1859 )
      {
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        return sub_146690(result, v24) * v24;
      }
      return 1860;
  }
  return result;
}
