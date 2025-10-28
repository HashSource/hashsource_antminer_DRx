int __fastcall sub_31DA0(int a1, int a2)
{
  char *v4; // r5
  int v5; // r2
  speed_t v6; // r1
  __int16 v7; // r8
  int v8; // r7
  char *v9; // r0
  _BYTE *v10; // r6
  const char *v11; // r0
  int result; // r0
  int v13; // r5
  const char *v14; // r0

  if ( dword_7CF4C )
  {
    v14 = (const char *)sub_50CD0(a2 + 12);
    printf("jjy_start (refclock_jjy.c) : %s  mode=%d  ", v14, *(unsigned __int8 *)(a2 + 59));
    printf("/dev/jjy%d", a1);
    putchar(10);
  }
  v4 = (char *)sub_4F524(20);
  snprintf(v4, 0x14u, "/dev/jjy%d", a1);
  switch ( *(_BYTE *)(a2 + 59) )
  {
    case 0:
    case 1:
    case 3:
      v5 = 1;
      v6 = 13;
      v7 = 1;
      goto LABEL_5;
    case 2:
      v5 = 32;
      v6 = 13;
      v7 = 32;
      goto LABEL_5;
    case 4:
      v5 = 1;
      v6 = 12;
      v7 = 1;
LABEL_5:
      v8 = sub_27D18(v4, v6, v5);
      v9 = v4;
      if ( !v8 )
        goto LABEL_10;
      free(v4);
      v10 = (_BYTE *)sub_4F524(152);
      memset(v10, 0, 0x98u);
      *((_WORD *)v10 + 3) = v7;
      switch ( *(_BYTE *)(a2 + 59) )
      {
        case 0:
        case 1:
          *v10 = 1;
          *((_WORD *)v10 + 2) = 100;
          break;
        case 2:
          *v10 = 2;
          *((_DWORD *)v10 + 12) = 1;
          *((_DWORD *)v10 + 13) = 15;
          break;
        case 3:
          *v10 = 3;
          *((_WORD *)v10 + 1) = 2;
          *((_DWORD *)v10 + 12) = 1;
          *((_DWORD *)v10 + 13) = 17;
          break;
        case 4:
          *v10 = 4;
          *((_DWORD *)v10 + 12) = 1;
          *((_DWORD *)v10 + 13) = 23;
          break;
        default:
          break;
      }
      v13 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(v13 + 28) = v10;
      *(_DWORD *)(v13 + 12) = a2;
      *(_DWORD *)(v13 + 20) = v8;
      *(_DWORD *)(v13 + 4) = sub_32228;
      *(_DWORD *)(v13 + 16) = 0;
      if ( sub_15FC4((int *)v13) )
      {
        *(_DWORD *)(a2 + 116) = 1;
        *(_BYTE *)(a2 + 71) = -3;
        *(_WORD *)(v13 + 748) = 19018;
        *(_DWORD *)(v13 + 36) = "JJY Receiver";
        *(_BYTE *)(v13 + 750) = 89;
        result = 1;
      }
      else
      {
        close(v8);
        *(_DWORD *)(v13 + 20) = -1;
        free(v10);
        *(_DWORD *)(v13 + 28) = 0;
        result = 0;
      }
      break;
    default:
      v11 = (const char *)sub_50CD0(a2 + 12);
      sub_4FE78(3, "JJY receiver [ %s mode %d ] : Unsupported mode", v11, *(unsigned __int8 *)(a2 + 59));
      v9 = v4;
LABEL_10:
      free(v9);
      result = 0;
      break;
  }
  return result;
}
