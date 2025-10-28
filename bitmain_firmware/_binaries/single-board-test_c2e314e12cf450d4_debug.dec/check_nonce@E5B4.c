int __fastcall check_nonce(unsigned __int8 a1, unsigned __int8 *a2)
{
  int v6; // [sp+18h] [bp+8h]
  int v7; // [sp+20h] [bp+10h]
  int i; // [sp+28h] [bp+18h]
  int v9; // [sp+2Ch] [bp+1Ch]
  int v10; // [sp+30h] [bp+20h]
  unsigned int v11; // [sp+34h] [bp+24h]
  unsigned int v12; // [sp+38h] [bp+28h]
  unsigned int v13; // [sp+3Ch] [bp+2Ch]

  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  if ( dword_336850 == 1722 )
  {
    v10 = (a2[3] << 24) | *a2 | (a2[1] << 8) | (a2[2] << 16);
    v13 = a2[3] / (unsigned int)gChain_Asic_Interval;
    v12 = *a2 & 0x7F;
    v11 = a2[5] & 0x7F;
  }
  else if ( dword_336850 == 1725 )
  {
    v10 = (a2[3] << 24) | *a2 | (a2[1] << 8) | (a2[2] << 16);
    v13 = a2[4] / (unsigned int)gChain_Asic_Interval;
    v12 = a2[3] | ((a2[2] & 1) << 8);
    v11 = a2[6] & 0x7F;
  }
  if ( dword_336848 > v13 )
  {
    if ( dword_33684C > v12 )
    {
      if ( dword_33681C > v11 )
      {
        v6 = *((_DWORD *)&cgpu + v13 + 131112) + 204 * (v12 * dword_33681C + v11);
        v7 = *(_DWORD *)(v6 + 4);
        ++gReceive_Nonce_Num[a1];
        if ( v10 == v7 )
        {
          if ( *(_DWORD *)(v6 + 4 * (a1 + 46) + 4) )
          {
            ++gRepeated_Nonce_Id[a1];
            ++*(_DWORD *)(v6 + 4 * (a1 + 46) + 4);
          }
          else
          {
            ++*(_DWORD *)(v6 + 4 * (a1 + 46) + 4);
            ++gValid_Nonce_Num[a1];
            ++*((_DWORD *)&gAsic_Core_Nonce_Num + 512 * ((a1 << 8) + v13) + v12);
          }
        }
        else
        {
          pthread_mutex_lock(&HW_check_mutex[a1]);
          for ( i = 0; (unsigned __int8)gWork_Num_For_Hw_Check[a1] > i; ++i )
          {
            v9 = check_hw((int)&gWorks_For_Hw_Check + 2040 * a1 + 204 * i, v10, a2[4], 0);
            if ( !v9 )
              break;
          }
          pthread_mutex_unlock(&HW_check_mutex[a1]);
          if ( v9 == 1 )
          {
            ++gHw_Nonce_Num[a1];
            printf("%s: Find a HW. Chain%d ASIC%d Core%d : nonce = 0x%08x.\n", "check_nonce", a1, v13, v12, v10);
          }
        }
        return 0;
      }
      else
      {
        printf("%s: received work_id = %02d nonce. error!!!\t", "check_nonce", v11);
        printf(",received data is : 0x%02x%02x%02x%02x%02x%02x\n", *a2, a2[1], a2[2], a2[3], a2[4], a2[5]);
        return -1;
      }
    }
    else
    {
      printf("%s: received core%02d nonce. error!!!\t", "check_nonce", v12);
      printf(",received data is : 0x%02x%02x%02x%02x%02x%02x\n", *a2, a2[1], a2[2], a2[3], a2[4], a2[5]);
      return -1;
    }
  }
  else
  {
    printf("%s: received ASIC%02d nonce. error!!!\t", "check_nonce", v13);
    printf(",received data is : 0x%02x%02x%02x%02x%02x\n", *a2, a2[1], a2[2], a2[3], a2[4]);
    return -1;
  }
}
