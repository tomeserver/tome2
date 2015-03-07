/* File: externs.h */

/* Purpose: extern declarations (variables and functions) */

/*
 * Note that some files have their own header files
 * (z-util.h, z-form.h, term.h, random.h)
 */

/*
 * Options for inc_stack_size_ex
 */
typedef enum { OPTIMIZE, NO_OPTIMIZE } optimize_flag;
typedef enum { DESCRIBE, NO_DESCRIBE } describe_flag;


/*
 * Automatically generated "variable" declarations
 */

extern int max_macrotrigger;
extern char *macro_template;
extern char *macro_modifier_chr;
extern char *macro_modifier_name[MAX_MACRO_MOD];
extern char *macro_trigger_name[MAX_MACRO_TRIG];
extern char *macro_trigger_keycode[2][MAX_MACRO_TRIG];

/* tables.c */
extern s16b ddd[9];
extern s16b ddx[10];
extern s16b ddy[10];
extern s16b ddx_ddd[9];
extern s16b ddy_ddd[9];
extern char hexsym[16];
extern byte adj_val_min[];
extern byte adj_val_max[];
extern byte adj_mag_study[];
extern byte adj_mag_mana[];
extern byte adj_mag_fail[];
extern byte adj_mag_stat[];
extern byte adj_chr_gold[];
extern byte adj_int_dev[];
extern byte adj_wis_sav[];
extern byte adj_dex_dis[];
extern byte adj_int_dis[];
extern byte adj_dex_ta[];
extern byte adj_str_td[];
extern byte adj_dex_th[];
extern byte adj_str_th[];
extern byte adj_str_wgt[];
extern byte adj_str_hold[];
extern byte adj_str_dig[];
extern byte adj_str_blow[];
extern byte adj_dex_blow[];
extern byte adj_dex_safe[];
extern byte adj_con_fix[];
extern byte adj_con_mhp[];
extern byte blows_table[12][12];
extern byte extract_energy[300];
extern s32b player_exp[PY_MAX_LEVEL];
extern player_sex sex_info[MAX_SEXES];
extern cptr color_names[16];
extern cptr stat_names[6];
extern cptr stat_names_reduced[6];
extern cptr window_flag_desc[32];
extern option_type option_info[];
extern martial_arts bear_blows[MAX_BEAR];
extern martial_arts ma_blows[MAX_MA];
extern magic_power mindcraft_powers[MAX_MINDCRAFT_POWERS];
extern magic_power necro_powers[MAX_NECRO_POWERS];
extern magic_power mimic_powers[MAX_MIMIC_POWERS];
extern magic_power symbiotic_powers[MAX_SYMBIOTIC_POWERS];
extern cptr deity_rarity[2];
extern cptr deity_niceness[10];
extern cptr deity_standing[11];
extern move_info_type move_info[9];
extern tactic_info_type tactic_info[9];
extern activation activation_info[MAX_T_ACT];
extern inscription_info_type inscription_info[MAX_INSCRIPTIONS];
extern cptr sense_desc[];
extern flags_group flags_groups[MAX_FLAG_GROUP];
extern power_type powers_type[POWER_MAX];
extern cptr artifact_names_list;
extern monster_power monster_powers[96];
extern tval_desc tval_descs[];
extern between_exit between_exits[MAX_BETWEEN_EXITS];
extern int month_day[9];
extern cptr month_name[9];
extern cli_comm *cli_info;
extern int cli_total;
extern quest_type quest[MAX_Q_IDX];
extern int max_body_part[BODY_MAX];
extern gf_name_type gf_names[];
extern module_type modules[MAX_MODULES];


/* variable.c */
extern byte version_major;
extern byte version_minor;
extern byte version_patch;
extern byte sf_major;
extern byte sf_minor;
extern byte sf_patch;
extern u32b sf_when;
extern u16b sf_lives;
extern u16b sf_saves;
extern bool_ arg_wizard;
extern bool_ arg_force_original;
extern bool_ arg_force_roguelike;
extern bool_ character_generated;
extern bool_ character_dungeon;
extern bool_ character_loaded;
extern bool_ character_icky;
extern bool_ character_xtra;
extern u32b seed_flavor;
extern s16b command_cmd;
extern s16b command_arg;
extern s16b command_rep;
extern s16b command_dir;
extern s16b command_wrk;
extern s16b command_new;
extern s32b energy_use;
extern bool_ create_up_stair;
extern bool_ create_down_stair;
extern bool_ create_up_shaft;
extern bool_ create_down_shaft;
extern bool_ msg_flag;
extern bool_ alive;
extern bool_ death;
extern s16b running;
extern s16b resting;
extern s16b cur_hgt;
extern s16b cur_wid;
extern s16b dun_level;
extern s16b old_dun_level;
extern s16b num_repro;
extern s16b object_level;
extern s16b monster_level;
extern s32b turn;
extern s32b old_turn;
extern bool_ wizard;
extern u16b total_winner;
extern u16b has_won;
extern u16b noscore;
extern bool_ inkey_base;
extern bool_ inkey_flag;
extern s16b coin_type;
extern bool_ opening_chest;
extern bool_ shimmer_monsters;
extern bool_ shimmer_objects;
extern bool_ repair_monsters;
extern s16b inven_cnt;
extern s16b equip_cnt;
extern s16b o_max;
extern s16b o_cnt;
extern s16b m_max;
extern s16b m_cnt;
extern s16b hack_m_idx;
extern s16b hack_m_idx_ii;
extern int total_friends;
extern s32b total_friend_levels;
extern int leaving_quest;
extern char summon_kin_type;
extern bool_ hack_mind;
extern bool_ is_autosave;
extern int artifact_bias;
extern FILE *text_out_file;
extern void (*text_out_hook)(byte a, cptr str);
extern int text_out_indent;
extern bool_ rogue_like_commands;
extern bool_ quick_messages;
extern bool_ carry_query_flag;
extern bool_ always_pickup;
extern bool_ prompt_pickup_heavy;
extern bool_ always_repeat;
extern bool_ use_old_target;
extern bool_ hilite_player;
extern bool_ ring_bell;
extern bool_ find_ignore_stairs;
extern bool_ find_ignore_doors;
extern bool_ find_cut;
extern bool_ find_examine;
extern bool_ disturb_near;
extern bool_ disturb_move;
extern bool_ disturb_panel;
extern bool_ disturb_detect;
extern bool_ disturb_state;
extern bool_ disturb_minor;
extern bool_ disturb_other;
extern bool_ avoid_abort;
extern bool_ avoid_shimmer;
extern bool_ avoid_other;
extern bool_ flush_disturb;
extern bool_ flush_failure;
extern bool_ flush_command;
extern bool_ fresh_before;
extern bool_ fresh_after;
extern bool_ fresh_message;
extern bool_ alert_hitpoint;
extern bool_ alert_failure;
extern bool_ view_yellow_lite;
extern bool_ view_bright_lite;
extern bool_ view_granite_lite;
extern bool_ view_special_lite;
extern bool_ wear_confirm;
extern bool_ confirm_stairs;
extern bool_ disturb_pets;
extern bool_ view_perma_grids;
extern bool_ view_torch_grids;
extern bool_ flow_by_sound;
extern bool_ view_reduce_lite;
extern bool_ auto_scum;
extern bool_ expand_look;
extern bool_ expand_list;
extern bool_ dungeon_align;
extern bool_ dungeon_stair;
extern bool_ smart_learn;
extern bool_ testing_stack;
extern bool_ testing_carry;
extern bool_ cheat_peek;
extern bool_ cheat_hear;
extern bool_ cheat_room;
extern bool_ cheat_xtra;
extern bool_ cheat_know;
extern bool_ cheat_live;
extern bool_ last_words;              /* Zangband options */
extern bool_ small_levels;
extern bool_ empty_levels;
extern bool_ always_small_level;
extern byte hitpoint_warn;
extern byte delay_factor;
extern s16b autosave_freq;
extern bool_ autosave_t;
extern bool_ autosave_l;
extern s16b feeling;
extern s16b rating;
extern bool_ good_item_flag;
extern s16b max_panel_rows, max_panel_cols;
extern s16b panel_row_min, panel_row_max;
extern s16b panel_col_min, panel_col_max;
extern s16b panel_col_prt, panel_row_prt;
extern byte feat_wall_outer;
extern byte feat_wall_inner;
extern s16b floor_type[100];
extern s16b fill_type[100];
extern s16b target_who;
extern s16b target_col;
extern s16b target_row;
extern s16b health_who;
extern s16b monster_race_idx;
extern s16b monster_ego_idx;
extern object_type *tracked_object;
extern char player_name[32];
extern char player_base[32];
extern char died_from[80];
extern char history[4][60];
extern char savefile[1024];
extern s16b lite_n;
extern s16b lite_y[LITE_MAX];
extern s16b lite_x[LITE_MAX];
extern s16b view_n;
extern byte view_y[VIEW_MAX];
extern byte view_x[VIEW_MAX];
extern s16b temp_n;
extern byte temp_y[TEMP_MAX];
extern byte temp_x[TEMP_MAX];
extern s16b macro__num;
extern char **macro__pat;
extern char **macro__act;
extern bool_ *macro__cmd;
extern char *macro__buf;
extern u32b option_flag[8];
extern u32b option_mask[8];
extern u32b window_flag[ANGBAND_TERM_MAX];
extern u32b window_mask[ANGBAND_TERM_MAX];
extern term *angband_term[ANGBAND_TERM_MAX];
extern char angband_term_name[ANGBAND_TERM_MAX][80];
extern byte angband_color_table[256][4];
extern cave_type **cave;
extern object_type *o_list;
extern monster_type *m_list;
extern monster_type *km_list;
extern u16b max_real_towns;
extern u16b max_towns;
extern town_type *town_info;
extern s16b alloc_kind_size;
extern alloc_entry *alloc_kind_table;
extern bool_ alloc_kind_table_valid;
extern s16b alloc_race_size;
extern alloc_entry *alloc_race_table;
extern byte misc_to_attr[256];
extern char misc_to_char[256];
extern byte tval_to_attr[128];
extern char tval_to_char[128];
extern char *keymap_act[KEYMAP_MODES][256];
extern player_type *p_ptr;
extern player_sex *sp_ptr;
extern player_race *rp_ptr;
extern player_race_mod *rmp_ptr;
extern player_class *cp_ptr;
extern player_spec *spp_ptr;
extern u32b alchemist_known_egos[32];
extern alchemist_recipe *alchemist_recipes;
extern u32b alchemist_known_artifacts[6];
extern u32b alchemist_gained;
extern s16b player_hp[PY_MAX_LEVEL];

extern artifact_select_flag *a_select_flags;

extern ability_type *ab_info;

extern skill_type *s_info;

extern vault_type *v_info;
extern feature_type *f_info;
extern object_kind *k_info;
extern artifact_type *a_info;
extern ego_item_type *e_info;
extern randart_part_type *ra_info;
extern randart_gen_type ra_gen[30];
extern monster_race *r_info;
extern monster_ego *re_info;
extern dungeon_info_type *d_info;
extern player_class *class_info;
extern meta_class_type *meta_class_info;
extern player_race *race_info;
extern player_race_mod *race_mod_info;
extern trap_type *t_info;
extern wilderness_type_info *wf_info;
extern int wildc2i[256];
extern store_info_type *st_info;
extern store_action_type *ba_info;
extern owner_type *ow_info;
extern set_type *set_info;

extern cptr DEFAULT_FEAT_TEXT;
extern cptr DEFAULT_FEAT_TUNNEL;
extern cptr DEFAULT_FEAT_BLOCK;

extern cptr ANGBAND_SYS;
extern cptr ANGBAND_KEYBOARD;
extern cptr ANGBAND_GRAF;
extern char *ANGBAND_DIR;
extern char *ANGBAND_DIR_MODULES;
extern char *ANGBAND_DIR_SAVE;
extern char *ANGBAND_DIR_CORE;
extern char *ANGBAND_DIR_DNGN;
extern char *ANGBAND_DIR_DATA;
extern char *ANGBAND_DIR_EDIT;
extern char *ANGBAND_DIR_FILE;
extern char *ANGBAND_DIR_HELP;
extern char *ANGBAND_DIR_INFO;
extern char *ANGBAND_DIR_NOTE;
extern char *ANGBAND_DIR_PREF;
extern char *ANGBAND_DIR_USER;
extern char *ANGBAND_DIR_XTRA;
extern bool_ item_tester_full;
extern byte item_tester_tval;
extern bool_ (*item_tester_hook)(object_type *o_ptr);
extern bool_ (*get_mon_num_hook)(int r_idx);
extern bool_ (*get_mon_num2_hook)(int r_idx);
extern bool_ (*get_obj_num_hook)(int k_idx);
extern u16b max_wild_x;
extern u16b max_wild_y;
extern wilderness_map **wild_map;
extern u16b old_max_s_idx;
extern u16b max_ab_idx;
extern u16b max_s_idx;
extern u16b max_al_idx;
extern u16b max_r_idx;
extern u16b max_re_idx;
extern u16b max_k_idx;
extern u16b max_v_idx;
extern u16b max_f_idx;
extern u16b max_a_idx;
extern u16b max_e_idx;
extern u16b max_ra_idx;
extern u16b max_d_idx;
extern u16b max_o_idx;
extern u16b max_m_idx;
extern u16b max_t_idx;
extern u16b max_rp_idx;
extern u16b max_c_idx;
extern u16b max_mc_idx;
extern u16b max_rmp_idx;
extern u16b max_st_idx;
extern u16b max_ba_idx;
extern u16b max_ow_idx;
extern u16b max_wf_idx;
extern s16b max_set_idx;
extern int init_flags;
extern bool_ ambush_flag;
extern bool_ fate_flag;
extern s16b no_breeds;
extern bool_ carried_monster_hit;
extern random_artifact random_artifacts[MAX_RANDARTS];
extern s32b RANDART_WEAPON;
extern s32b RANDART_ARMOR;
extern s32b RANDART_JEWEL;
extern random_spell random_spells[MAX_SPELLS];
extern s16b spell_num;
extern rune_spell rune_spells[MAX_RUNES];
extern s16b rune_num;
extern fate fates[MAX_FATES];
extern byte dungeon_type;
extern s16b *max_dlv;
extern s16b doppleganger;
extern bool_ generate_encounter;
extern bool_ autoroll;
extern bool_ point_based;
extern bool_ preserve, special_lvls, ironman_rooms;
extern bool_ inventory_no_move;
extern bool_ *m_allow_special;
extern bool_ *k_allow_special;
extern bool_ *a_allow_special;
extern bool_ rand_birth;
extern bool_ joke_monsters;
extern bool_ center_player;
extern s16b plots[MAX_PLOTS];
extern random_quest random_quests[MAX_RANDOM_QUEST];
extern bool_ fate_option;
extern bool_ *special_lvl[MAX_DUNGEON_DEPTH];
extern bool_ generate_special_feeling;
extern bool_ auto_more;
extern u32b dungeon_flags1;
extern u32b dungeon_flags2;
extern birther previous_char;
extern hist_type *bg;
extern int max_bg_idx;
extern s32b extra_savefile_parts;
extern bool_ player_char_health;
extern s16b schools_count;
extern school_type schools[SCHOOLS_MAX];
extern int project_time;
extern s32b project_time_effect;
extern effect_type effects[MAX_EFFECTS];
extern char gen_skill_basem[MAX_SKILLS];
extern u32b gen_skill_base[MAX_SKILLS];
extern char gen_skill_modm[MAX_SKILLS];
extern s16b gen_skill_mod[MAX_SKILLS];
extern bool_ linear_stats;
extern int max_bact;
extern bool_ option_ingame_help;
extern bool_ automatizer_enabled;
extern s16b last_teleportation_y;
extern s16b last_teleportation_x;
extern cptr game_module;
extern s32b game_module_idx;
extern s32b VERSION_MAJOR;
extern s32b VERSION_MINOR;
extern s32b VERSION_PATCH;
extern s32b max_plev;
extern s32b DUNGEON_BASE;
extern s32b DUNGEON_DEATH;
extern s32b DUNGEON_ASTRAL;
extern s32b DUNGEON_ASTRAL_WILD_X;
extern s32b DUNGEON_ASTRAL_WILD_Y;
extern deity_type deity_info[MAX_GODS];
extern timer_type *gl_timers;
extern const char *get_version_string();

/* birth.c */
extern bool_ no_begin_screen;

/* melee1.c */
/* melee2.c */
extern int monst_spell_monst_spell;
extern bool_ mon_take_hit_mon(int s_idx, int m_idx, int dam, bool_ *fear, cptr note);
extern void mon_handle_fear(monster_type *m_ptr, int dam, bool_ *fear);
extern int check_hit2(int power, int level, int ac);
extern int get_attack_power(int effect);
extern bool_ carried_make_attack_normal(int r_idx);
extern bool_ make_attack_normal(int m_idx, byte divis);
extern void process_monsters(void);
extern void curse_equipment(int chance, int heavy_chance);
extern void curse_equipment_dg(int chance, int heavy_chance);

/* main.c */
extern bool_ private_check_user_directory(cptr dirpath);

/* wizard1.c */
extern void do_cmd_spoilers();

/* wizard2.c */
extern void do_cmd_wiz_cure_all(void);
extern void do_cmd_wiz_named_friendly(int r_idx, bool_ slp);
extern void do_cmd_debug();
extern tval_desc2 tvals[];

/*
 * Hack -- conditional (or "bizarre") externs
 */

#ifdef SET_UID
/* util.c */
extern void user_name(char *buf, int id);
#endif

/* script.c */
extern void init_lua_init(void);

/* modules.cc */
extern cptr force_module;

/* lua_bind.c */

extern s32b lua_get_level(struct spell_type *spell, s32b lvl, s32b max, s32b min, s32b bonus);
extern int get_mana(s32b s);
extern s32b get_power(s32b s);
extern s32b get_level(s32b s, s32b max, s32b min);
extern void get_level_school(struct spell_type *spell, s32b max, s32b min, s32b *level, bool_ *na);

extern s32b get_level_max_stick;
extern s32b get_level_use_stick;

extern void set_target(int y, int x);
extern void get_target(int dir, int *y, int *x);

extern void get_map_size(const char *name, int *ysize, int *xsize);
extern void load_map(const char *name, int *y, int *x);

extern char *lua_input_box(cptr title, int max);
extern char lua_msg_box(cptr title);

extern void increase_mana(int delta);

extern timer_type *TIMER_AGGRAVATE_EVIL;

void timer_aggravate_evil_enable();
void timer_aggravate_evil_callback();
