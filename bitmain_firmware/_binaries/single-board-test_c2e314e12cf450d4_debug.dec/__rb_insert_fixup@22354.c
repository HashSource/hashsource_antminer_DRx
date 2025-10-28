_DWORD *__fastcall _rb_insert_fixup(_DWORD *result, _DWORD *a2)
{
  _DWORD *v3; // [sp+4h] [bp+4h]
  int v4; // [sp+8h] [bp+8h]
  int v5; // [sp+Ch] [bp+Ch]

  v3 = result;
  while ( (_DWORD *)*v3 != a2 && *(_DWORD *)(a2[2] + 12) == 1 )
  {
    if ( a2[2] == **(_DWORD **)(a2[2] + 8) )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(a2[2] + 8) + 4);
      if ( *(_DWORD *)(v5 + 12) == 1 )
      {
        *(_DWORD *)(a2[2] + 12) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        *(_DWORD *)(*(_DWORD *)(a2[2] + 8) + 12) = 1;
        a2 = *(_DWORD **)(a2[2] + 8);
      }
      else
      {
        if ( *(_DWORD **)(a2[2] + 4) == a2 )
        {
          a2 = (_DWORD *)a2[2];
          _left_rotate(v3, a2);
        }
        *(_DWORD *)(a2[2] + 12) = 0;
        *(_DWORD *)(*(_DWORD *)(a2[2] + 8) + 12) = 1;
        result = _right_rotate(v3, *(_DWORD **)(a2[2] + 8));
      }
    }
    else
    {
      v4 = **(_DWORD **)(a2[2] + 8);
      if ( *(_DWORD *)(v4 + 12) == 1 )
      {
        *(_DWORD *)(a2[2] + 12) = 0;
        *(_DWORD *)(v4 + 12) = 0;
        *(_DWORD *)(*(_DWORD *)(a2[2] + 8) + 12) = 1;
        a2 = *(_DWORD **)(a2[2] + 8);
      }
      else
      {
        if ( *(_DWORD **)a2[2] == a2 )
        {
          a2 = (_DWORD *)a2[2];
          _right_rotate(v3, a2);
        }
        *(_DWORD *)(a2[2] + 12) = 0;
        *(_DWORD *)(*(_DWORD *)(a2[2] + 8) + 12) = 1;
        result = _left_rotate(v3, *(_DWORD **)(a2[2] + 8));
      }
    }
  }
  *(_DWORD *)(*v3 + 12) = 0;
  return result;
}
