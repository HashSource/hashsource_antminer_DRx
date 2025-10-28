void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_19678C = (int)stratum_connect;
  dword_196790 = (int)stratum_disconnect;
  dword_196794 = (int)stratum_recv_line;
  dword_196798 = (int)stratum_send_line;
  dword_19679C = (int)stratum_login_base;
  dword_1967A0 = (int)stratum_handle_method_base;
  dword_1967A4 = (int)pre_stratum_handle_method_base;
  dword_1967A8 = (int)stratum_handle_response_base;
  dword_1967AC = (int)sub_4BB58;
  dword_1967B0 = (int)sub_4B3D8;
  dword_1967B4 = (int)stratum_subscribe_base;
  dword_1967B8 = (int)stratum_authorize_base;
  dword_1967BC = (int)sub_4B410;
  LODWORD(v0) = diff_to_target_ltc;
  HIDWORD(v0) = target_to_double_diff_ltc;
  dword_1967C0 = (int)sub_4B120;
  dword_1967C4 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_1967CC = v0;
  dword_1967C8 = (int)target_to_diff_ltc;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_19678C, 0x54u);
}
