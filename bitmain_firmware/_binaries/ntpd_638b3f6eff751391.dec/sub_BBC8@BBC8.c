int __fastcall sub_BBC8(int a1, int a2)
{
  int result; // r0
  int v4; // r4
  int v5; // r2

  result = sub_10DB4();
  v4 = result;
  if ( result )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( v5 == 315 )
      {
        sub_26A68(9, a2, 0);
        goto LABEL_7;
      }
      if ( v5 <= 315 )
        break;
      switch ( v5 )
      {
        case 354:
          sub_26A68(8, a2, 0);
          goto LABEL_7;
        case 382:
          sub_26A68(11, a2, 0);
          goto LABEL_7;
        case 341:
          sub_26A68(10, a2, 0);
          result = sub_10D84(v4);
          v4 = result;
          if ( !result )
            return result;
          break;
        default:
LABEL_6:
          sub_4FE78(3, "can not apply enable/disable token %d, unknown", v5);
LABEL_7:
          result = sub_10D84(v4);
          v4 = result;
          if ( !result )
            return result;
          break;
      }
    }
    switch ( v5 )
    {
      case 265:
        sub_26A68(1, a2, 0);
        goto LABEL_7;
      case 272:
        sub_26A68(13, a2, 0);
        goto LABEL_7;
      case 261:
        sub_26A68(3, a2, 0);
        goto LABEL_7;
    }
    goto LABEL_6;
  }
  return result;
}
