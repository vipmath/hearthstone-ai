#pragma once

#include "game-engine/card-database.h"
#include "game-engine/common.h"
#include "game-engine/board.h"
#include "game-engine/card-id-map.h"
#include "game-engine/stages/helper.h"
#include "game-engine/stages/helper-targets.h"
#include "game-engine/board-objects/minion.h"
#include "game-engine/enchantments/enchantment.h"
#include "game-engine/enchantments/buff-minion.h"
#include "game-engine/enchantments/buff-minion-c.h"
#include "game-engine/enchantments/buff-player.h"
#include "game-engine/enchantments/buff-player-c.h"
#include "game-engine/hook/listener.h"
#include "game-engine/hook/minion-aura-to-all-minions.h"
#include "game-engine/hook/minion-aura-enrage.h"

#define DEFINE_CARD_CLASS_START(CARD_ID) \
namespace GameEngine { \
namespace Cards { \
\
class Card_ ## CARD_ID { \
public: \
	static constexpr int card_id = CARD_ID_ ## CARD_ID; \
\
	class Aura; \


#define DEFINE_CARD_CLASS_END() \
}; \
} \
}

//#include "card_example_minion.h"
//#include "card_example_weapon.h"
//#include "card_example_spell.h"

#include "card_GAME_005.h"
#include "card_CS2_005.h"
#include "card_CS2_007.h"
#include "card_CS2_009.h"
#include "card_CS2_013.h"
#include "card_CS2_017.h"
#include "card_CS2_022.h"
#include "card_CS2_023.h"
#include "card_CS2_025.h"
#include "card_CS2_029.h"
#include "card_CS2_034.h"
#include "card_CS2_037.h"
#include "card_CS2_039.h"
#include "card_CS2_041.h"
#include "card_CS2_045.h"
#include "card_CS2_049.h"
#include "card_CS2_056.h"
#include "card_CS2_057.h"
#include "card_CS2_061.h"
#include "card_CS2_062.h"
#include "card_CS2_122.h"
#include "card_CS2_188.h"
#include "card_CS2_189.h"
#include "card_CS2_222.h"
#include "card_CS2_226.h"
#include "card_DS1_055.h"
#include "card_EX1_011.h"
#include "card_EX1_015.h"
#include "card_EX1_029.h"
#include "card_EX1_169.h"
#include "card_EX1_246.h"
#include "card_EX1_277.h"
#include "card_EX1_306.h"
#include "card_EX1_390.h"
#include "card_EX1_412.h"
#include "card_EX1_584.h"
#include "card_EX1_593.h"
#include "card_FP1_002.h"
#include "card_FP1_007.h"
#include "card_FP1_021.h"
#include "card_GVG_043.h"
#include "card_GVG_051.h"
#include "card_GVG_059.h"
#include "card_GVG_112.h"
#include "card_BRM_019.h"
#include "card_NEW1_009.h"
#include "card_NEW1_018.h"
#include "card_LOE_051.h"
#include "card_AT_117.h"

#undef DEFINE_CARD_CLASS_START
#undef DEFINE_CARD_CLASS_END