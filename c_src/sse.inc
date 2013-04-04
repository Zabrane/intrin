// _mm_setzero_ps (void)
DEF_void_XMMd_XMMs(_,mm_add_ss)
DEF_void_XMMd_XMMs(_,mm_sub_ss)
DEF_void_XMMd_XMMs(_,mm_mul_ss)
DEF_void_XMMd_XMMs(_,mm_div_ss)
DEF_void_XMMd_XMMs1(_,mm_sqrt_ss)
DEF_void_XMMd_XMMs1(_,mm_rcp_ss)
DEF_void_XMMd_XMMs1(_,mm_rsqrt_ss)
DEF_void_XMMd_XMMs(_,mm_min_ss)
DEF_void_XMMd_XMMs(_,mm_max_ss)
DEF_void_XMMd_XMMs(_,mm_add_ps)
DEF_void_XMMd_XMMs(_,mm_sub_ps)
DEF_void_XMMd_XMMs(_,mm_mul_ps)
DEF_void_XMMd_XMMs(_,mm_div_ps)
DEF_void_XMMd_XMMs1(_,mm_sqrt_ps)
DEF_void_XMMd_XMMs1(_,mm_rcp_ps)
DEF_void_XMMd_XMMs1(_,mm_rsqrt_ps)
DEF_void_XMMd_XMMs(_,mm_min_ps)
DEF_void_XMMd_XMMs(_,mm_max_ps)
DEF_void_XMMd_XMMs(_,mm_and_ps)
DEF_void_XMMd_XMMs(_,mm_andnot_ps)
DEF_void_XMMd_XMMs(_,mm_or_ps)
DEF_void_XMMd_XMMs(_,mm_xor_ps)
DEF_void_XMMd_XMMs(_,mm_cmpeq_ss)
DEF_void_XMMd_XMMs(_,mm_cmplt_ss)
DEF_void_XMMd_XMMs(_,mm_cmple_ss)
DEF_void_XMMd_XMMs(_,mm_cmpgt_ss)
DEF_void_XMMd_XMMs(_,mm_cmpge_ss)
DEF_void_XMMd_XMMs(_,mm_cmpneq_ss)
DEF_void_XMMd_XMMs(_,mm_cmpnlt_ss)
DEF_void_XMMd_XMMs(_,mm_cmpnle_ss)
DEF_void_XMMd_XMMs(_,mm_cmpngt_ss)
DEF_void_XMMd_XMMs(_,mm_cmpnge_ss)
DEF_void_XMMd_XMMs(_,mm_cmpord_ss)
DEF_void_XMMd_XMMs(_,mm_cmpunord_ss)
DEF_void_XMMd_XMMs(_,mm_cmpeq_ps)
DEF_void_XMMd_XMMs(_,mm_cmplt_ps)
DEF_void_XMMd_XMMs(_,mm_cmple_ps)
DEF_void_XMMd_XMMs(_,mm_cmpgt_ps)
DEF_void_XMMd_XMMs(_,mm_cmpge_ps)
DEF_void_XMMd_XMMs(_,mm_cmpneq_ps)
DEF_void_XMMd_XMMs(_,mm_cmpnlt_ps)
DEF_void_XMMd_XMMs(_,mm_cmpnle_ps)
DEF_void_XMMd_XMMs(_,mm_cmpngt_ps)
DEF_void_XMMd_XMMs(_,mm_cmpnge_ps)
DEF_void_XMMd_XMMs(_,mm_cmpord_ps)
DEF_void_XMMd_XMMs(_,mm_cmpunord_ps)
DEF_bool_XMMd_XMMs(_,mm_comieq_ss)
DEF_bool_XMMd_XMMs(_,mm_comilt_ss)
DEF_bool_XMMd_XMMs(_,mm_comile_ss)
DEF_bool_XMMd_XMMs(_,mm_comigt_ss)
DEF_bool_XMMd_XMMs(_,mm_comige_ss)
DEF_bool_XMMd_XMMs(_,mm_comineq_ss)
DEF_bool_XMMd_XMMs(_,mm_ucomieq_ss)
DEF_bool_XMMd_XMMs(_,mm_ucomilt_ss)
DEF_bool_XMMd_XMMs(_,mm_ucomile_ss)
DEF_bool_XMMd_XMMs(_,mm_ucomigt_ss)
DEF_bool_XMMd_XMMs(_,mm_ucomige_ss)
DEF_bool_XMMd_XMMs(_,mm_ucomineq_ss)
// _mm_cvtss_si32 (__m128 __A)
// _mm_cvt_ss2si (__m128 __A)
// _mm_cvtss_si64 (__m128 __A)
// _mm_cvtss_si64x (__m128 __A)
// _mm_cvtps_pi32 (__m128 __A)
// _mm_cvt_ps2pi (__m128 __A)
// _mm_cvttss_si32 (__m128 __A)
// _mm_cvtt_ss2si (__m128 __A)
// _mm_cvttss_si64 (__m128 __A)
// _mm_cvttss_si64x (__m128 __A)
// _mm_cvttps_pi32 (__m128 __A)
// _mm_cvtt_ps2pi (__m128 __A)
// _mm_cvtsi32_ss (__m128 __A, int __B)
// _mm_cvt_si2ss (__m128 __A, int __B)
// _mm_cvtsi64_ss (__m128 __A, long long __B)
// _mm_cvtsi64x_ss (__m128 __A, long long __B)
// _mm_cvtpi32_ps (__m128 __A, __m64 __B)
// _mm_cvt_pi2ps (__m128 __A, __m64 __B)
// _mm_cvtpi16_ps (__m64 __A)
// _mm_cvtpu16_ps (__m64 __A)
// _mm_cvtpi8_ps (__m64 __A)
// _mm_cvtpu8_ps(__m64 __A)
// _mm_cvtpi32x2_ps(__m64 __A, __m64 __B)
// _mm_cvtps_pi16(__m128 __A)
// _mm_cvtps_pi8(__m128 __A)
// _mm_shuffle_ps (__m128 __A, __m128 __B, int __mask)
DEF_void_XMMd_XMMs(_,mm_unpackhi_ps)
DEF_void_XMMd_XMMs(_,mm_unpacklo_ps)
// _mm_loadh_pi (__m128 __A, __m64 const *__P)
// _mm_storeh_pi (__m64 *__P, __m128 __A)
// _mm_movehl_ps (__m128 __A, __m128 __B)
// _mm_movelh_ps (__m128 __A, __m128 __B)
// _mm_loadl_pi (__m128 __A, __m64 const *__P)
// _mm_storel_pi (__m64 *__P, __m128 __A)
// _mm_movemask_ps (__m128 __A)
// _mm_getcsr (void)
// _mm_setcsr (unsigned int __I)
// _mm_set_ss (float __F)
// _mm_set1_ps (float __F)
// _mm_set_ps1 (float __F)
// _mm_load_ss (float const *__P)
// _mm_load1_ps (float const *__P)
// _mm_load_ps1 (float const *__P)
// _mm_load_ps (float const *__P)
// _mm_loadu_ps (float const *__P)
// _mm_loadr_ps (float const *__P)
// _mm_set_ps (const float __Z, const float __Y, const float __X, const float __W)
// _mm_setr_ps (float __Z, float __Y, float __X, float __W)
// _mm_store_ss (float *__P, __m128 __A)
// _mm_cvtss_f32 (__m128 __A)
// _mm_store_ps (float *__P, __m128 __A)
// _mm_storeu_ps (float *__P, __m128 __A)
// _mm_store1_ps (float *__P, __m128 __A)
// _mm_store_ps1 (float *__P, __m128 __A)
// _mm_storer_ps (float *__P, __m128 __A)
// _mm_move_ss (__m128 __A, __m128 __B)
// _mm_extract_pi16 (__m64 const __A, int const __N)
// _mm_extract_pi16(A, N)
// _m_pextrw(A, N)
// _mm_insert_pi16 (__m64 const __A, int const __D, int const __N)
// _mm_insert_pi16(A, D, N)
// _m_pinsrw(A, D, N)
// _mm_max_pi16 (__m64 __A, __m64 __B)
// _mm_max_pu8 (__m64 __A, __m64 __B)
// _mm_min_pi16 (__m64 __A, __m64 __B)
// _mm_min_pu8 (__m64 __A, __m64 __B)
// _mm_movemask_pi8 (__m64 __A)
// _mm_mulhi_pu16 (__m64 __A, __m64 __B)
// _mm_shuffle_pi16 (__m64 __A, int __N)
// _mm_shuffle_pi16(A, N)
// _m_pshufw(A, N)
// _mm_maskmove_si64 (__m64 __A, __m64 __N, char *__P)
// _mm_avg_pu8 (__m64 __A, __m64 __B)
// _mm_avg_pu16 (__m64 __A, __m64 __B)
// _mm_sad_pu8 (__m64 __A, __m64 __B)
// _mm_prefetch (void *__P, enum _mm_hint __I)
// _mm_stream_pi (__m64 *__P, __m64 __A)
// _mm_stream_ps (float *__P, __m128 __A)
// _mm_sfence (void)
// _mm_pause (void)