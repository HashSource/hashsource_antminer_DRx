int sub_22C60()
{
  _DWORD *v0; // r4
  int v1; // r6
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r2
  _DWORD *v5; // r12
  int v6; // r0
  int v7; // r3
  bool v8; // zf
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // r3
  _DWORD *v13; // r0
  int v14; // r3
  int v15; // r3
  int result; // r0
  char v17[2048]; // [sp+0h] [bp-800h] BYREF

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_612C8) )
    sub_B4E4("discard_stale", 5192);
  v0 = (_DWORD *)dword_612CC;
  if ( dword_612CC )
  {
    v2 = *(_DWORD **)(dword_612CC + 352);
    v1 = 0;
    while ( 1 )
    {
      if ( sub_2282C((int)v0, 0) )
      {
        v3 = v0[87];
        if ( v3 || v0[88] )
        {
          v4 = dword_612CC;
          v5 = v0 + 86;
          v6 = *(_DWORD *)(dword_612CC + 344);
          v7 = *(_DWORD *)(v6 + 20);
          if ( (_DWORD *)(*(_DWORD *)(v6 + 16) - v7) == v0 )
          {
            *(_DWORD *)(v6 + 16) = v3 + v7;
            v3 = v0[87];
          }
          v8 = v3 == 0;
          if ( v3 )
            v6 = *(_DWORD *)(v4 + 344);
          v9 = v0[88];
          if ( v3 )
          {
            v3 += *(_DWORD *)(v6 + 20);
          }
          else
          {
            v4 = v0[88];
            dword_612CC = v4;
          }
          if ( !v8 )
          {
            *(_DWORD *)(v3 + 8) = v9;
            v9 = v0[88];
          }
          if ( v9 )
            *(_DWORD *)(v9 + *(_DWORD *)(*(_DWORD *)(v4 + 344) + 20) + 4) = v0[87];
          v10 = *(_DWORD **)(v4 + 344);
          v11 = 3 * ((v10[1] - 1) & v0[93]);
          --*(_DWORD *)(*v10 + 4 * v11 + 4);
          v12 = **(_DWORD **)(v4 + 344);
          v13 = *(_DWORD **)(v12 + 4 * v11);
          if ( v13 == v5 )
          {
            v4 = v0[90];
            *(_DWORD *)(v12 + 4 * v11) = v4;
          }
          v14 = v0[89];
          if ( v13 == v5 )
            v4 = dword_612CC;
          if ( v14 )
            *(_DWORD *)(v14 + 16) = v0[90];
          v15 = v0[90];
          if ( v15 )
            *(_DWORD *)(v15 + 12) = v0[89];
          --*(_DWORD *)(*(_DWORD *)(v4 + 344) + 12);
        }
        else
        {
          free(**(void ***)(dword_612CC + 344));
          free(*(void **)(dword_612CC + 344));
          dword_612CC = 0;
        }
        ++v1;
        sub_154EC((int)v0);
      }
      if ( !v2 )
        break;
      v0 = v2;
      v2 = (_DWORD *)v2[88];
    }
  }
  else
  {
    v1 = 0;
  }
  pthread_cond_signal(&stru_63748);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_612C8) )
    sub_B694("discard_stale", 5203);
  result = off_60178();
  if ( v1 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v17, 0x800u, "Discarded %d stales that didn't match current hash", v1);
    return sub_38438(7, v17, 0);
  }
  return result;
}
