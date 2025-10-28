int __fastcall sub_FC80(int a1, int a2, void *a3)
{
  int v6; // r0
  int v7; // r9
  int v8; // r7
  int v9; // r0
  const char *v10; // r0
  int *v11; // r0
  int *v12; // r6
  int v13; // r0
  int v14; // r0
  int v16; // r2
  int v17; // r2

  v6 = sub_10D64(40);
  v7 = 0;
  *(_DWORD *)(v6 + 24) = 4;
  v8 = v6;
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  v9 = sub_10ED0(v6);
  *(_DWORD *)v8 = a1;
  *(_DWORD *)(v8 + 4) = a2;
  if ( a3 )
    a2 = 338;
  *(_DWORD *)(v8 + 8) = v9;
  if ( a3 )
  {
    while ( 1 )
    {
      v11 = (int *)sub_10E58(a3);
      v12 = v11;
      if ( !v11 )
      {
        sub_10D2C(a3);
        if ( v7 )
        {
          v14 = v8;
          v8 = 0;
          sub_10D7C(v14);
        }
        return v8;
      }
      v13 = *v11;
      if ( *v12 == a2 )
      {
        v16 = v12[2];
        if ( v16 <= 2 )
        {
          sub_4FE78(6, "minpoll: provided value (%d) is below minimum (%d)", v16, 3);
          *(_DWORD *)(v8 + 12) = 3;
        }
        else
        {
          *(_DWORD *)(v8 + 12) = v16;
        }
        goto LABEL_9;
      }
      if ( *v12 <= a2 )
        break;
      if ( v13 == 398 )
      {
        if ( *(int *)(v8 + 20) <= 7 )
          goto LABEL_16;
        sub_4FE78(3, "ttl: invalid argument");
        v7 = 1;
LABEL_9:
        sub_10D7C(v12);
      }
      else
      {
        if ( v13 <= 398 )
        {
          if ( v13 != 340 )
            goto LABEL_8;
LABEL_16:
          *(_DWORD *)(v8 + 20) = v12[2];
          goto LABEL_9;
        }
        if ( v13 == 402 )
        {
          *(_DWORD *)(v8 + 24) = v12[2];
          goto LABEL_9;
        }
        if ( v13 != 408 )
        {
LABEL_8:
          v10 = (const char *)sub_1821C(v13);
          v7 = 1;
          sub_4FE78(3, "Unknown peer/server option token %s", v10);
          goto LABEL_9;
        }
        sub_10DCC(*(_DWORD *)(v8 + 8), v12);
      }
    }
    switch ( v13 )
    {
      case 316:
        *(_DWORD *)(v8 + 28) = v12[2];
        break;
      case 334:
        v17 = v12[2];
        if ( v17 > 17 )
        {
          sub_4FE78(6, "maxpoll: provided value (%d) is above maximum (%d)", v17, 17);
          *(_DWORD *)(v8 + 16) = 17;
        }
        else
        {
          *(_DWORD *)(v8 + 16) = v17;
        }
        break;
      case 267:
        *(_QWORD *)(v8 + 32) = *((_QWORD *)v12 + 1);
        break;
      default:
        goto LABEL_8;
    }
    goto LABEL_9;
  }
  return v8;
}
