void *__fastcall receive_func(unsigned __int8 *a1)
{
  void *v1; // r3
  size_t v2; // r3
  unsigned int v3; // r0
  unsigned int v4; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r4
  unsigned int v8; // r0
  unsigned int v11; // [sp+10h] [bp+8h] BYREF
  unsigned int v12; // [sp+14h] [bp+Ch] BYREF
  void *v13; // [sp+18h] [bp+10h]
  void *v14; // [sp+1Ch] [bp+14h]
  void *ptr; // [sp+20h] [bp+18h]
  size_t v16; // [sp+24h] [bp+1Ch]
  int v17; // [sp+28h] [bp+20h]
  int v18; // [sp+2Ch] [bp+24h]
  unsigned __int8 v19; // [sp+32h] [bp+2Ah]
  unsigned __int8 v20; // [sp+33h] [bp+2Bh]
  unsigned __int8 *v21; // [sp+34h] [bp+2Ch]
  size_t size; // [sp+38h] [bp+30h]
  size_t i; // [sp+3Ch] [bp+34h]
  int v24; // [sp+40h] [bp+38h]
  size_t v25; // [sp+44h] [bp+3Ch]

  v21 = a1;
  v20 = *a1;
  v19 = a1[1];
  v25 = 0;
  v24 = 0;
  v12 = 0;
  v11 = 0;
  v18 = 0;
  i = 0;
  v17 = 0;
  v16 = 0;
  size = 0;
  if ( dword_336850 == 1722 )
  {
    size = 9;
  }
  else if ( dword_336850 == 1725 )
  {
    size = 10;
  }
  ptr = malloc(200 * size);
  if ( ptr )
  {
    v14 = malloc(100 * size);
    if ( v14 )
    {
      v13 = malloc(size);
      if ( v13 )
      {
        v16 = 100 * size;
        printf("%s: which_chain = %d, which_i2c = %d\n", "receive_func", v20, v19);
        uart_flush_rx(v20);
        while ( start_receive[v20] )
        {
          while ( gIsOpeningCore[v20] )
            usleep(0x7D0u);
          usleep(0x12Cu);
          v25 = uart_receive(v20, (int)ptr, size);
          for ( i = 0; i < v25; ++i )
          {
            *((_BYTE *)v14 + v12) = *((_BYTE *)ptr + i);
            add_point(&v12, v16);
          }
          if ( v11 != v12 )
          {
            if ( v12 <= v11 )
              v2 = 100 * size - v11 + v12;
            else
              v2 = v12 - v11;
            v25 = v2;
            while ( v25 >= size )
            {
              if ( *((unsigned __int8 *)v14 + v11) == 170
                && (v3 = use_point_add_1(v11, v16), *((_BYTE *)v14 + v3) == 85) )
              {
                for ( i = 0; i < size; ++i )
                {
                  *((_BYTE *)v13 + i) = *((_BYTE *)v14 + v11);
                  add_point(&v11, v16);
                }
                v25 -= size;
                if ( is_nonce_or_reg_value(*((_BYTE *)v13 + size - 1)) )
                {
                  if ( gStartTest[v20] )
                  {
                    if ( gIsOpenCoreEnd[v20] )
                    {
                      v17 = check_nonce(v20, (unsigned __int8 *)v13 + 2);
                      if ( v17 == -1 )
                        ++v24;
                    }
                  }
                }
                else
                {
                  v17 = check_register_value(v20, (char *)v13 + 2);
                  if ( v17 == -1 )
                    ++v24;
                }
              }
              else
              {
                for ( i = 0; size - 1 > i; ++i )
                {
                  if ( *((unsigned __int8 *)v14 + v11) == 170 )
                  {
                    v4 = use_point_add_1(v11, v16);
                    if ( *((_BYTE *)v14 + v4) == 85 )
                      break;
                  }
                  add_point(&v11, v16);
                  v5 = use_point_sub_1(v11, v16);
                  v6 = *((unsigned __int8 *)v14 + v5);
                  v7 = *((unsigned __int8 *)v14 + v11);
                  v8 = use_point_add_1(v11, v16);
                  printf(
                    "%s: Headers are not corret! Header0 = 0x%02x, Header1 = 0x%02x, Header2 = 0x%02x rp = %d\n",
                    "receive_func",
                    v6,
                    v7,
                    *((unsigned __int8 *)v14 + v8),
                    v11);
                }
                v25 -= i;
              }
            }
          }
        }
        if ( v13 )
          free(v13);
        if ( v14 )
          free(v14);
        v1 = ptr;
        if ( ptr )
          free(ptr);
      }
      else
      {
        printf("%s, malloc buffer error!\n", "receive_func");
        free(v14);
        free(ptr);
      }
    }
    else
    {
      printf("%s, malloc buffer error!\n", "receive_func");
      free(ptr);
    }
  }
  else
  {
    printf("%s, malloc buffer error!\n", "receive_func");
  }
  return v1;
}
