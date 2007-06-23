#include <stdio.h>

#include "constants.h"
#include "print_config.h"

#include "../conf/zsconfig.h"
#include "zsconfig.defaults.h"

#include "errors.h"
/* Hardcore preprocessor hackery, thanks to runehol/#scene.no. */
#define expand(x) x
#define stringize(x) expand(#x)
#define stringify(x) stringize(x)
void print_config(void)
{
    printf("#define BAD_CRC                                 %s\n", stringify(BAD_CRC));
    printf("#define BAD_ZIP                                 %s\n", stringify(BAD_ZIP));
    printf("#define BANNED_BITRATE                          %s\n", stringify(BANNED_BITRATE));
    printf("#define BANNED_FILE                             %s\n", stringify(BANNED_FILE));
    printf("#define BANNED_GENRE                            %s\n", stringify(BANNED_GENRE));
    printf("#define BANNED_YEAR                             %s\n", stringify(BANNED_YEAR));
    printf("#define DOUBLE_SFV                              %s\n", stringify(DOUBLE_SFV));
    printf("#define DUPE_NFO                                %s\n", stringify(DUPE_NFO));
    printf("#define EMPTY_FILE                              %s\n", stringify(EMPTY_FILE));
    printf("#define EMPTY_SFV                               %s\n", stringify(EMPTY_SFV));
    printf("#define GROUPFILE                               %s\n", stringify(GROUPFILE));
    printf("#define NOT_IN_SFV                              %s\n", stringify(NOT_IN_SFV));
    printf("#define PASSWDFILE                              %s\n", stringify(PASSWDFILE));
    printf("#define SFV_FIRST                               %s\n", stringify(SFV_FIRST));
    printf("#define SPEEDTEST                               %s\n", stringify(SPEEDTEST));
    printf("#define UNKNOWN_FILE                            %s\n", stringify(UNKNOWN_FILE));
    printf("#define ZIP_NFO                                 %s\n", stringify(ZIP_NFO));
    printf("#define accept_script                           %s\n", stringify(accept_script));
    printf("#define affil_script                            %s\n", stringify(affil_script));
    printf("#define allow_dir_chown_in_ng_chown             %s\n", (allow_dir_chown_in_ng_chown == FALSE ? "FALSE" : "TRUE"));
    printf("#define allow_error2_in_unzip                   %s\n", (allow_error2_in_unzip == FALSE ? "FALSE" : "TRUE"));
    printf("#define allow_file_resume                       %s\n", (allow_file_resume == FALSE ? "FALSE" : "TRUE"));
    printf("#define allow_files_chown_in_ng_chown           %s\n", (allow_files_chown_in_ng_chown == FALSE ? "FALSE" : "TRUE"));
    printf("#define allow_files_not_in_sfv                  %s\n", (allow_files_not_in_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define allow_gid_change_in_ng_chown            %s\n", (allow_gid_change_in_ng_chown == FALSE ? "FALSE" : "TRUE"));
    printf("#define allow_slash_in_sfv                      %s\n", (allow_slash_in_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define allow_uid_change_in_ng_chown            %s\n", (allow_uid_change_in_ng_chown == FALSE ? "FALSE" : "TRUE"));
    printf("#define allowed_constant_bitrates               %s\n", stringify(allowed_constant_bitrates));
    printf("#define allowed_genres                          %s\n", stringify(allowed_genres));
    printf("#define allowed_types                           %s\n", stringify(allowed_types));
    printf("#define allowed_types_exemption_dirs            %s\n", stringify(allowed_types_exemption_dirs));
    printf("#define allowed_years                           %s\n", stringify(allowed_years));
    printf("#define always_scan_audio_syms                  %s\n", (always_scan_audio_syms == FALSE ? "FALSE" : "TRUE"));
    printf("#define announce_norace                         %s\n", (announce_norace == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_allowed_genre_check               %s\n", (audio_allowed_genre_check == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_artist_nosub                      %s\n", (audio_artist_nosub == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_artist_path                       %s\n", stringify(audio_artist_path));
    printf("#define audio_artist_sort                       %s\n", (audio_artist_sort == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_banned_genre_check                %s\n", (audio_banned_genre_check == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_cbr_check                         %s\n", (audio_cbr_check == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_cbr_warn                          %s\n", (audio_cbr_warn == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_completebar                       %s\n", stringify(audio_completebar));
    printf("#define audio_genre_path                        %s\n", stringify(audio_genre_path));
    printf("#define audio_genre_sort                        %s\n", (audio_genre_sort == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_genre_warn                        %s\n", (audio_genre_warn == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_group_path                        %s\n", stringify(audio_group_path));
    printf("#define audio_group_sort                        %s\n", (audio_group_sort == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_ignored_languages                 %s\n", stringify(audio_ignored_languages));
    printf("#define audio_language_path                     %s\n", stringify(audio_language_path));
    printf("#define audio_language_sort                     %s\n", (audio_language_sort == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_nocheck_dirs                      %s\n", stringify(audio_nocheck_dirs));
    printf("#define audio_nosort_dirs                       %s\n", stringify(audio_nosort_dirs));
    printf("#define audio_year_check                        %s\n", (audio_year_check == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_year_path                         %s\n", stringify(audio_year_path));
    printf("#define audio_year_sort                         %s\n", (audio_year_sort == FALSE ? "FALSE" : "TRUE"));
    printf("#define audio_year_warn                         %s\n", (audio_year_warn == FALSE ? "FALSE" : "TRUE"));
    printf("#define banned_filelist                         %s\n", stringify(banned_filelist));
    printf("#define banned_genres                           %s\n", stringify(banned_genres));
    printf("#define benchmark_mode                          %s\n", (benchmark_mode == FALSE ? "FALSE" : "TRUE"));
    printf("#define change_spaces_to_underscore_in_ng_chown %s\n", (change_spaces_to_underscore_in_ng_chown == FALSE ? "FALSE" : "TRUE"));
    printf("#define charbar_filled                          %s\n", stringify(charbar_filled));
    printf("#define charbar_missing                         %s\n", stringify(charbar_missing));
    printf("#define check_for_banned_files                  %s\n", (check_for_banned_files == FALSE ? "FALSE" : "TRUE"));
    printf("#define check_for_missing_nfo_dirs              %s\n", stringify(check_for_missing_nfo_dirs));
    printf("#define chmod_completebar                       %s\n", (chmod_completebar == FALSE ? "FALSE" : "TRUE"));
    printf("#define cleanupdirs                             %s\n", stringify(cleanupdirs));
    printf("#define cleanupdirs_dated                       %s\n", stringify(cleanupdirs_dated));
    printf("#define combine_path                            %s\n", (combine_path == FALSE ? "FALSE" : "TRUE"));
    printf("#define complete_script                         %s\n", stringify(complete_script));
    printf("#define create_incomplete_links_in_group_dirs   %s\n", (create_incomplete_links_in_group_dirs == FALSE ? "FALSE" : "TRUE"));
    printf("#define create_m3u                              %s\n", (create_m3u == FALSE ? "FALSE" : "TRUE"));
    printf("#define create_missing_files                    %s\n", (create_missing_files == FALSE ? "FALSE" : "TRUE"));
    printf("#define create_missing_sfv                      %s\n", (create_missing_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define create_missing_sfv_link                 %s\n", (create_missing_sfv_link == FALSE ? "FALSE" : "TRUE"));
    printf("#define custom_group_dirs_complete_message      %s\n", stringify(custom_group_dirs_complete_message));
    printf("#define days_back_cleanup                       %s\n", stringify(days_back_cleanup));
    printf("#define debug_altlog                            %s\n", (debug_altlog == FALSE ? "FALSE" : "TRUE"));
    printf("#define debug_announce                          %s\n", (debug_announce == FALSE ? "FALSE" : "TRUE"));
    printf("#define debug_mode                              %s\n", (debug_mode == FALSE ? "FALSE" : "TRUE"));
    printf("#define del_banned_release                      %s\n", (del_banned_release == FALSE ? "FALSE" : "TRUE"));
    printf("#define del_completebar                         %s\n", stringify(del_completebar));
    printf("#define del_progressmeter                       %s\n", stringify(del_progressmeter));
    printf("#define del_progressmeter_mp3                   %s\n", stringify(del_progressmeter_mp3));
    printf("#define delete_old_link                         %s\n", (delete_old_link == FALSE ? "FALSE" : "TRUE"));
    printf("#define deny_double_nfo                         %s\n", (deny_double_nfo == FALSE ? "FALSE" : "TRUE"));
    printf("#define deny_double_sfv                         %s\n", (deny_double_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define deny_nfo_upload_in_zip                  %s\n", (deny_nfo_upload_in_zip == FALSE ? "FALSE" : "TRUE"));
    printf("#define deny_resume_sfv                         %s\n", (deny_resume_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_audio_complete                  %s\n", (disable_audio_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_audio_halfway                   %s\n", (disable_audio_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_audio_newleader                 %s\n", (disable_audio_newleader == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_audio_norace_complete           %s\n", (disable_audio_norace_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_audio_norace_halfway            %s\n", (disable_audio_norace_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_audio_race                      %s\n", (disable_audio_race == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_audio_sfv                       %s\n", (disable_audio_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_audio_update                    %s\n", (disable_audio_update == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_other_complete                  %s\n", (disable_other_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_other_halfway                   %s\n", (disable_other_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_other_newleader                 %s\n", (disable_other_newleader == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_other_norace_complete           %s\n", (disable_other_norace_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_other_norace_halfway            %s\n", (disable_other_norace_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_other_race                      %s\n", (disable_other_race == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_other_sfv                       %s\n", (disable_other_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_other_update                    %s\n", (disable_other_update == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_rar_complete                    %s\n", (disable_rar_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_rar_halfway                     %s\n", (disable_rar_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_rar_newleader                   %s\n", (disable_rar_newleader == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_rar_norace_complete             %s\n", (disable_rar_norace_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_rar_norace_halfway              %s\n", (disable_rar_norace_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_rar_race                        %s\n", (disable_rar_race == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_rar_sfv                         %s\n", (disable_rar_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_rar_update                      %s\n", (disable_rar_update == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_video_complete                  %s\n", (disable_video_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_video_halfway                   %s\n", (disable_video_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_video_newleader                 %s\n", (disable_video_newleader == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_video_norace_complete           %s\n", (disable_video_norace_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_video_norace_halfway            %s\n", (disable_video_norace_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_video_race                      %s\n", (disable_video_race == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_video_sfv                       %s\n", (disable_video_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_video_update                    %s\n", (disable_video_update == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_zip_complete                    %s\n", (disable_zip_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_zip_halfway                     %s\n", (disable_zip_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_zip_newleader                   %s\n", (disable_zip_newleader == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_zip_norace_complete             %s\n", (disable_zip_norace_complete == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_zip_norace_halfway              %s\n", (disable_zip_norace_halfway == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_zip_race                        %s\n", (disable_zip_race == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_zip_sfv                         %s\n", (disable_zip_sfv == FALSE ? "FALSE" : "TRUE"));
    printf("#define disable_zip_update                      %s\n", (disable_zip_update == FALSE ? "FALSE" : "TRUE"));
    printf("#define dupepath                                %s\n", stringify(dupepath));
    printf("#define enable_accept_script                    %s\n", (enable_accept_script == FALSE ? "FALSE" : "TRUE"));
    printf("#define enable_affil_script                     %s\n", (enable_affil_script == FALSE ? "FALSE" : "TRUE"));
    printf("#define enable_complete_script                  %s\n", (enable_complete_script == FALSE ? "FALSE" : "TRUE"));
    printf("#define enable_files_ahead                      %s\n", (enable_files_ahead == FALSE ? "FALSE" : "TRUE"));
    printf("#define enable_mp3_script                       %s\n", (enable_mp3_script == FALSE ? "FALSE" : "TRUE"));
    printf("#define enable_nfo_script                       %s\n", (enable_nfo_script == FALSE ? "FALSE" : "TRUE"));
    printf("#define enable_sample_script                    %s\n", (enable_sample_script == FALSE ? "FALSE" : "TRUE"));
    printf("#define enable_unduper_script                   %s\n", (enable_unduper_script == FALSE ? "FALSE" : "TRUE"));
    printf("#define exclude_non_sfv_dirs                    %s\n", (exclude_non_sfv_dirs == FALSE ? "FALSE" : "TRUE"));
    printf("#define extract_nfo                             %s\n", (extract_nfo == FALSE ? "FALSE" : "TRUE"));
    printf("#define force_sfv_first                         %s\n", (force_sfv_first == FALSE ? "FALSE" : "TRUE"));
    printf("#define get_competitor_list                     %s\n", (get_competitor_list == FALSE ? "FALSE" : "TRUE"));
    printf("#define get_user_stats                          %s\n", (get_user_stats == FALSE ? "FALSE" : "TRUE"));
    printf("#define gl_sections                             %s\n", stringify(gl_sections));
    printf("#define gl_userfiles                            %s\n", stringify(gl_userfiles));
    printf("#define group_dirs                              %s\n", stringify(group_dirs));
    printf("#define hide_affil_gname                        %s\n", stringify(hide_affil_gname));
    printf("#define hide_affil_groups                       %s\n", stringify(hide_affil_groups));
    printf("#define hide_affil_uname                        %s\n", stringify(hide_affil_uname));
    printf("#define hide_affil_users                        %s\n", stringify(hide_affil_users));
    printf("#define hide_gname                              %s\n", stringify(hide_gname));
    printf("#define hide_group_uploaders                    %s\n", (hide_group_uploaders == FALSE ? "FALSE" : "TRUE"));
    printf("#define hide_uname                              %s\n", stringify(hide_uname));
    printf("#define ignore_lock_timeout                     %s\n", (ignore_lock_timeout == FALSE ? "FALSE" : "TRUE"));
    printf("#define ignore_zero_size                        %s\n", (ignore_zero_size == FALSE ? "FALSE" : "TRUE"));
    printf("#define ignore_zero_sized_on_rescan             %s\n", (ignore_zero_sized_on_rescan == FALSE ? "FALSE" : "TRUE"));
    printf("#define ignored_types                           %s\n", stringify(ignored_types));
    printf("#define incomplete_base_nfo_indicator           %s\n", stringify(incomplete_base_nfo_indicator));
    printf("#define incomplete_base_sfv_indicator           %s\n", stringify(incomplete_base_sfv_indicator));
    printf("#define incomplete_cd_indicator                 %s\n", stringify(incomplete_cd_indicator));
    printf("#define incomplete_indicator                    %s\n", stringify(incomplete_indicator));
    printf("#define incomplete_nfo_indicator                %s\n", stringify(incomplete_nfo_indicator));
    printf("#define incomplete_sfv_indicator                %s\n", stringify(incomplete_sfv_indicator));
    printf("#define incompleteislink                        %s\n", stringify(incompleteislink));
    printf("#define lock_optimize                           %s\n", stringify(lock_optimize));
    printf("#define log                                     %s\n", stringify(log));
    printf("#define mark_empty_dirs_as_incomplete_on_rescan %s\n", (mark_empty_dirs_as_incomplete_on_rescan == FALSE ? "FALSE" : "TRUE"));
    printf("#define mark_file_as_bad                        %s\n", (mark_file_as_bad == FALSE ? "FALSE" : "TRUE"));
    printf("#define max_groups_in_top                       %s\n", stringify(max_groups_in_top));
    printf("#define max_seconds_wait_for_lock               %s\n", stringify(max_seconds_wait_for_lock));
    printf("#define max_users_in_top                        %s\n", stringify(max_users_in_top));
    printf("#define message_file_name                       %s\n", stringify(message_file_name));
    printf("#define message_footer                          %s\n", stringify(message_footer));
    printf("#define message_group_body                      %s\n", stringify(message_group_body));
    printf("#define message_group_footer                    %s\n", stringify(message_group_footer));
    printf("#define message_group_header                    %s\n", stringify(message_group_header));
    printf("#define message_header                          %s\n", stringify(message_header));
    printf("#define message_mp3                             %s\n", stringify(message_mp3));
    printf("#define message_user_body                       %s\n", stringify(message_user_body));
    printf("#define message_user_footer                     %s\n", stringify(message_user_footer));
    printf("#define message_user_header                     %s\n", stringify(message_user_header));
    printf("#define min_halfway_files                       %s\n", stringify(min_halfway_files));
    printf("#define min_halfway_size                        %s\n", stringify(min_halfway_size));
    printf("#define min_newleader_files                     %s\n", stringify(min_newleader_files));
    printf("#define min_newleader_size                      %s\n", stringify(min_newleader_size));
    printf("#define min_update_files                        %s\n", stringify(min_update_files));
    printf("#define min_update_size                         %s\n", stringify(min_update_size));
    printf("#define mp3_script                              %s\n", stringify(mp3_script));
    printf("#define mp3_script_cookies                      %s\n", stringify(mp3_script_cookies));
    printf("#define newleader_files_ahead                   %s\n", stringify(newleader_files_ahead));
    printf("#define nfo_script                              %s\n", stringify(nfo_script));
    printf("#define nocheck_dirs                            %s\n", stringify(nocheck_dirs));
    printf("#define noforce_sfv_first_dirs                  %s\n", stringify(noforce_sfv_first_dirs));
    printf("#define other_completebar                       %s\n", stringify(other_completebar));
    printf("#define program_gid                             %s\n", stringify(program_gid));
    printf("#define program_uid                             %s\n", stringify(program_uid));
    printf("#define progressmeter                           %s\n", stringify(progressmeter));
    printf("#define progressmeter_mp3                       %s\n", stringify(progressmeter_mp3));
    printf("#define racersmsg                               %s\n", stringify(racersmsg));
    printf("#define racersplit                              %s\n", stringify(racersplit));
    printf("#define racersplit_prior                        %s\n", stringify(racersplit_prior));
    printf("#define rar_completebar                         %s\n", stringify(rar_completebar));
    printf("#define realtime_group_body                     %s\n", stringify(realtime_group_body));
    printf("#define realtime_group_footer                   %s\n", stringify(realtime_group_footer));
    printf("#define realtime_group_header                   %s\n", stringify(realtime_group_header));
    printf("#define realtime_mp3_info                       %s\n", stringify(realtime_mp3_info));
    printf("#define realtime_user_body                      %s\n", stringify(realtime_user_body));
    printf("#define realtime_user_footer                    %s\n", stringify(realtime_user_footer));
    printf("#define realtime_user_header                    %s\n", stringify(realtime_user_header));
    printf("#define remove_dot_debug_on_delete              %s\n", (remove_dot_debug_on_delete == FALSE ? "FALSE" : "TRUE"));
    printf("#define remove_dot_files_on_delete              %s\n", (remove_dot_files_on_delete == FALSE ? "FALSE" : "TRUE"));
    printf("#define rescan_chdir_flags                      %s\n", stringify(rescan_chdir_flags));
    printf("#define rescan_default_to_quick                 %s\n", (rescan_default_to_quick == FALSE ? "FALSE" : "TRUE"));
    printf("#define rescan_nocheck_dirs_allowed             %s\n", (rescan_nocheck_dirs_allowed == FALSE ? "FALSE" : "TRUE"));
    printf("#define sample_list                             %s\n", stringify(sample_list));
    printf("#define sample_script                           %s\n", stringify(sample_script));
    printf("#define sfv_calc_single_fname                   %s\n", (sfv_calc_single_fname == FALSE ? "FALSE" : "TRUE"));
    printf("#define sfv_cleanup                             %s\n", (sfv_cleanup == FALSE ? "FALSE" : "TRUE"));
    printf("#define sfv_cleanup_crlf                        %s\n", (sfv_cleanup_crlf == FALSE ? "FALSE" : "TRUE"));
    printf("#define sfv_cleanup_lowercase                   %s\n", (sfv_cleanup_lowercase == FALSE ? "FALSE" : "TRUE"));
    printf("#define sfv_dirs                                %s\n", stringify(sfv_dirs));
    printf("#define sfv_dupecheck                           %s\n", (sfv_dupecheck == FALSE ? "FALSE" : "TRUE"));
    printf("#define sfv_lenient                             %s\n", (sfv_lenient == FALSE ? "FALSE" : "TRUE"));
    printf("#define short_sitename                          %s\n", stringify(short_sitename));
    printf("#define show_group_info                         %s\n", (show_group_info == FALSE ? "FALSE" : "TRUE"));
    printf("#define show_stats_from_pos2_only               %s\n", (show_stats_from_pos2_only == FALSE ? "FALSE" : "TRUE"));
    printf("#define show_user_info                          %s\n", (show_user_info == FALSE ? "FALSE" : "TRUE"));
    printf("#define sitepath_dir                            %s\n", stringify(sitepath_dir));
    printf("#define sleep_on_bad                            %s\n", stringify(sleep_on_bad));
    printf("#define spaces_to_dots                          %s\n", (spaces_to_dots == FALSE ? "FALSE" : "TRUE"));
    printf("#define speedtest_delfile                       %s\n", (speedtest_delfile == FALSE ? "FALSE" : "TRUE"));
    printf("#define speedtest_dirs                          %s\n", stringify(speedtest_dirs));
    printf("#define status_bar_type                         %s\n", stringify(status_bar_type));
    printf("#define storage                                 %s\n", stringify(storage));
    printf("#define strict_path_match                       %s\n", (strict_path_match == FALSE ? "FALSE" : "TRUE"));
    printf("#define strict_sfv_check                        %s\n", (strict_sfv_check == FALSE ? "FALSE" : "TRUE"));
    printf("#define subdir_list                             %s\n", stringify(subdir_list));
    printf("#define test_for_password                       %s\n", (test_for_password == FALSE ? "FALSE" : "TRUE"));
    printf("#define unduper_script                          %s\n", stringify(unduper_script));
    printf("#define unzip_bin                               %s\n", stringify(unzip_bin));
    printf("#define use_group_dirs_as_affil_list            %s\n", (use_group_dirs_as_affil_list == FALSE ? "FALSE" : "TRUE"));
    printf("#define use_partial_on_noforce                  %s\n", (use_partial_on_noforce == FALSE ? "FALSE" : "TRUE"));
    printf("#define userellink                              %s\n", stringify(userellink));
    printf("#define video_completebar                       %s\n", stringify(video_completebar));
    printf("#define video_types                             %s\n", stringify(video_types));
    printf("#define write_complete_message                  %s\n", (write_complete_message == FALSE ? "FALSE" : "TRUE"));
    printf("#define write_complete_message_in_group_dirs    %s\n", (write_complete_message_in_group_dirs == FALSE ? "FALSE" : "TRUE"));
    printf("#define wzdftpd_compatible                      %s\n", (wzdftpd_compatible == FALSE ? "FALSE" : "TRUE"));
    printf("#define zip_bin                                 %s\n", stringify(zip_bin));
    printf("#define zip_clean                               %s\n", (zip_clean == FALSE ? "FALSE" : "TRUE"));
    printf("#define zip_completebar                         %s\n", stringify(zip_completebar));
    printf("#define zip_dirs                                %s\n", stringify(zip_dirs));
    printf("#define zipscript_SFV_ok                        %s\n", stringify(zipscript_SFV_ok));
    printf("#define zipscript_SFV_skip                      %s\n", stringify(zipscript_SFV_skip));
    printf("#define zipscript_any_ok                        %s\n", stringify(zipscript_any_ok));
    printf("#define zipscript_footer_error                  %s\n", stringify(zipscript_footer_error));
    printf("#define zipscript_footer_ok                     %s\n", stringify(zipscript_footer_ok));
    printf("#define zipscript_footer_skip                   %s\n", stringify(zipscript_footer_skip));
    printf("#define zipscript_footer_unknown                %s\n", stringify(zipscript_footer_unknown));
    printf("#define zipscript_header                        %s\n", stringify(zipscript_header));
    printf("#define zipscript_sfv_ok                        %s\n", stringify(zipscript_sfv_ok));
    printf("#define zipscript_zip_ok                        %s\n", stringify(zipscript_zip_ok));
    printf("#define zsinternal_checks_completed             %s\n", stringify(zsinternal_checks_completed));
}