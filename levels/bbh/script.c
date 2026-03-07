#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bbh/header.h"


static const LevelScript script_func_local_1[] = {
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ 1705, 0, -1650, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ -524, 0, -805, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ -610, 0, -571, 0, -125, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ -710, 0, -366, 0, -90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ -288, 0, -191, 0, -50, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ 0, 0, 440, 0, -50, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_STAR,  /*pos*/   -1600, 144, 744, /*angle*/ 0, 0, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvStar),
    OBJECT(/*model*/ MODEL_STAR,  /*pos*/   1815, 200, 1595, /*angle*/ 0, 0, 0, /*bhvParam*/ 0x01000000, /*bhv*/ bhvStar),
    RETURN(),
};

const LevelScript level_bbh_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0        (/*seg*/ 0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _spooky_mio0SegmentRomStart, _spooky_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0C, _group9_geoSegmentRomStart,  _group9_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_10),
    JUMP_LINK(script_func_global_18),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR,               RCP_HmsMainDoor),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,           RCP_HmsDokan),

    AREA(/*index*/ 1, Bbh_area_1),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_3),
        JUMP_LINK(script_func_local_4),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -700, 720, -1650, /*angle*/ 0, 90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvSpinAirborneWarp),
        WARP_NODE(/*id*/ WARP_NODE_0A,    /*destLevel*/ LEVEL_BBH,              /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        OBJECT(/*model*/ MODEL_BITDW_WARP_PIPE,   /*pos*/ -700, 880, -1650, /*angle*/ 180, 180, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvStaticObject),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ 1727, 0, -939, 0, -180, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ -935, 0, -517, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ -583, 0, 939, 0, -180, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ 939, 0, 517, 0, -90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ 939, 0, 1573, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ 931, 0, -1683, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ -1287, 0, 59, 0, 0, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        TERRAIN(/*terrainData*/ ghost_house_collision),
        MACRO_OBJECTS(/*objList*/ bbh_seg7_macro_objs),
        ROOMS(/*surfaceRooms*/ bbh_seg7_rooms),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SPOOKY),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -700, 0, -1650),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
