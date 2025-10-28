void *frontend_runtime_rvn()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1977F0 = (int)stratum_connect;
  dword_1977F4 = (int)stratum_disconnect;
  dword_1977F8 = (int)stratum_recv_line;
  dword_1977FC = (int)stratum_send_line;
  dword_197800 = (int)stratum_login_base;
  dword_197804 = (int)stratum_handle_method_base;
  dword_197808 = (int)pre_stratum_handle_method_base;
  dword_19780C = (int)stratum_handle_response_rvn;
  dword_197810 = (int)sub_4C904;
  dword_197814 = (int)sub_4C82C;
  dword_197818 = (int)sub_4D338;
  dword_19781C = (int)stratum_authorize_rvn;
  dword_197820 = (int)sub_4C1C0;
  LODWORD(v0) = diff_to_target_rvn;
  HIDWORD(v0) = target_to_double_diff_rvn;
  dword_197824 = (int)sub_4C1A8;
  dword_197828 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_197830 = v0;
  dword_19782C = (int)target_to_diff_rvn;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1977F0, 0x54u);
}
