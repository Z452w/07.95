#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

static const LevelScript script_func_local_1[] = {
    RETURN(),
};

const LevelScript level_ttc_entry[] = {
    INIT_LEVEL(),
    FREE_LEVEL_POOL(),
    EXIT(),
};
