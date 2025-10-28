void *frontend_runtime_rvn()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_17AD68 = (int)stratum_connect;
  dword_17AD6C = (int)stratum_disconnect;
  dword_17AD70 = (int)stratum_recv_line;
  dword_17AD74 = (int)stratum_send_line;
  dword_17AD78 = (int)stratum_login_base;
  dword_17AD7C = (int)stratum_handle_method_base;
  dword_17AD80 = (int)pre_stratum_handle_method_base;
  dword_17AD84 = (int)stratum_handle_response_rvn;
  dword_17AD88 = (int)sub_46D0C;
  dword_17AD8C = (int)sub_46C34;
  dword_17AD90 = (int)sub_47740;
  dword_17AD94 = (int)stratum_authorize_rvn;
  dword_17AD98 = (int)sub_465C8;
  LODWORD(v0) = diff_to_target_rvn;
  HIDWORD(v0) = target_to_double_diff_rvn;
  dword_17AD9C = (int)sub_465B0;
  dword_17ADA0 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_17ADA8 = v0;
  dword_17ADA4 = (int)target_to_diff_rvn;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_17AD68, 0x54u);
}
