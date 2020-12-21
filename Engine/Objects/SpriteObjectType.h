#pragma once
#include <cstdint>

enum SPRITE_OBJECT_TYPE : uint16_t {
    SPRITE_NULL = 0,

    SPRITE_SPELL_0 = 10,

    SPRITE_PROJECTILE_500 = 500,  // blue bolt projectile + smoke   e.g. blue dragon attack
    SPRITE_PROJECTILE_500_IMPACT = 501,
    SPRITE_PROJECTILE_505 = 505,  // dark-brown bolt
    SPRITE_PROJECTILE_505_IMPACT = 506,
    SPRITE_PROJECTILE_510 = 510,  // red bolt projectile + smoke   e.g. red dragon attack
    SPRITE_PROJECTILE_510_IMPACT = 511,
    SPRITE_PROJECTILE_515 = 515,  // deep-blue bolt
    SPRITE_PROJECTILE_515_IMPACT = 516,
    SPRITE_PROJECTILE_520 = 520,  // light-green bolt
    SPRITE_PROJECTILE_520_IMPACT = 521,
    SPRITE_PROJECTILE_525 = 525,  // yellow bolt
    SPRITE_PROJECTILE_525_IMPACT = 526,
    SPRITE_PROJECTILE_530 = 530,  // blue bolt projectile + smoke   e.g. blue dragon attack
    SPRITE_PROJECTILE_530_IMPACT = 531,
    SPRITE_PROJECTILE_535 = 535,  // white bolt
    SPRITE_PROJECTILE_535_IMPACT = 536,
    SPRITE_PROJECTILE_540 = 540,  // gray bolt
    SPRITE_PROJECTILE_540_IMPACT = 541,
    SPRITE_ARROW_PROJECTILE = 545,
    SPRITE_PROJECTILE_550 = 550,
    SPRITE_BLASTER_PROJECTILE = 555,
    SPRITE_BLASTER_IMPACT = 556,
    SPRITE_OBJECT_EXPLODE = 600,  // some reddish mobile light applied -  actor explode
    SPRITE_OBJECT_EXPLODE_IMPACT = 601,

    SPRITE_WATER_SPLASH = 800,

    SPRITE_811 = 811,
    SPRITE_812 = 812,
    SPRITE_813 = 813,
    SPRITE_814 = 814,

    SPRITE_SPELL_FIRE_TORCH_LIGHT = 1000,
    SPRITE_SPELL_FIRE_FIRE_BOLT = 1010,
    SPRITE_SPELL_FIRE_FIRE_BOLT_IMPACT = 1011,
    SPRITE_SPELL_FIRE_PROTECTION_FROM_FIRE = 1020,
    SPRITE_SPELL_FIRE_FIRE_AURA = 1030,
    SPRITE_SPELL_FIRE_HASTE = 1040,
    SPRITE_SPELL_FIRE_FIREBALL = 1050,
    SPRITE_SPELL_FIRE_FIREBALL_IMPACT = 1051,
    SPRITE_SPELL_FIRE_FIRE_SPIKE = 1060,
    SPRITE_SPELL_FIRE_FIRE_SPIKE_IMPACT = 1061,
    SPRITE_SPELL_FIRE_IMMOLATION = 1070,
    SPRITE_SPELL_FIRE_METEOR_SHOWER = 1080,
    SPRITE_SPELL_FIRE_METEOR_SHOWER_1 = 1081,
    SPRITE_SPELL_FIRE_INFERNO = 1090,
    SPRITE_SPELL_FIRE_INCINERATE = 1100,
    SPRITE_SPELL_FIRE_INCINERATE_IMPACT = 1101,

    SPRITE_SPELL_AIR_WIZARD_EYE = 2000,
    SPRITE_SPELL_AIR_FEATHER_FALL = 2010,
    SPRITE_SPELL_AIR_PROTECTION_FROM_AIR = 2020,
    SPRITE_SPELL_AIR_SPARKS = 2030,
    SPRITE_SPELL_AIR_JUMP = 2040,
    SPRITE_SPELL_AIR_SHIELD = 2050,
    SPRITE_SPELL_AIR_LIGHNING_BOLT = 2060,
    SPRITE_SPELL_AIR_LIGHNING_BOLT_IMPACT = 2061,
    SPRITE_SPELL_AIR_INVISIBILITY = 2070,
    SPRITE_SPELL_AIR_IMPLOSION = 2080,
    SPRITE_SPELL_AIR_IMPLOSION_IMPACT = 2081,
    SPRITE_SPELL_AIR_FLY = 2090,
    SPRITE_SPELL_AIR_STARBURST = 2100,
    SPRITE_SPELL_AIR_STARBURST_1 = 2101,

    SPRITE_SPELL_WATER_AWAKEN = 3000,
    SPRITE_SPELL_WATER_POISON_SPRAY = 3010,
    SPRITE_SPELL_WATER_POISON_SPRAY_IMPACT = 3011,
    SPRITE_SPELL_WATER_PROTECTION_FROM_WATER = 3020,
    SPRITE_SPELL_WATER_ICE_BOLT = 3030,
    SPRITE_SPELL_WATER_ICE_BOLT_IMPACT = 3031,
    SPRITE_SPELL_WATER_WATER_WALK = 3040,
    SPRITE_SPELL_WATER_RECHARGE_ITEM = 3050,
    SPRITE_SPELL_WATER_ACID_BURST = 3060,
    SPRITE_SPELL_WATER_ACID_BURST_IMPACT = 3061,
    SPRITE_SPELL_WATER_ENCHANT_ITEM = 3070,
    SPRITE_SPELL_WATER_TOWN_PORTAL = 3080,
    SPRITE_SPELL_WATER_ICE_BLAST = 3090,
    SPRITE_SPELL_WATER_ICE_BLAST_IMPACT = 3091,
    SPRITE_SPELL_WATER_ICE_BLAST_FALLOUT = 3092,
    SPRITE_SPELL_WATER_LLOYDS_BEACON = 3100,

    SPRITE_SPELL_EARTH_STUN = 4000,
    SPRITE_SPELL_EARTH_SLOW = 4010,
    SPRITE_SPELL_EARTH_PROTECTION_FROM_EARTH = 4020,
    SPRITE_SPELL_EARTH_DEADLY_SWARM = 4030,
    SPRITE_SPELL_EARTH_DEADLY_SWARM_IMPACT = 4031,
    SPRITE_SPELL_EARTH_STONESKIN = 4040,
    SPRITE_SPELL_EARTH_BLADES = 4050,
    SPRITE_SPELL_EARTH_BLADES_IMPACT = 4051,
    SPRITE_SPELL_EARTH_STONE_TO_FLESH = 4060,
    SPRITE_SPELL_EARTH_ROCK_BLAST = 4070,
    SPRITE_SPELL_EARTH_ROCK_BLAST_IMPACT = 4071,
    SPRITE_SPELL_EARTH_TELEKINESIS = 4080,
    SPRITE_SPELL_EARTH_DEATH_BLOSSOM = 4090,
    SPRITE_SPELL_EARTH_DEATH_BLOSSOM_IMPACT = 4091,
    SPRITE_SPELL_EARTH_DEATH_BLOSSOM_FALLOUT = 4092,
    SPRITE_SPELL_EARTH_MASS_DISTORTION = 4100,

    SPRITE_SPELL_SPIRIT_DETECT_LIFE = 5000,
    SPRITE_SPELL_SPIRIT_BLESS = 5010,
    SPRITE_SPELL_SPIRIT_FATE = 5020,
    SPRITE_SPELL_SPIRIT_TURN_UNDEAD = 5030,
    SPRITE_SPELL_SPIRIT_TURN_UNDEAD_1 = 5031,
    SPRITE_SPELL_SPIRIT_REMOVE_CURSE = 5040,
    SPRITE_SPELL_SPIRIT_PRESERVATION = 5050,
    SPRITE_SPELL_SPIRIT_HEROISM = 5060,
    SPRITE_SPELL_SPIRIT_SPIRIT_LASH = 5070,
    SPRITE_SPELL_SPIRIT_RAISE_DEAD = 5080,
    SPRITE_SPELL_SPIRIT_SHARED_LIFE = 5090,
    SPRITE_SPELL_SPIRIT_RESSURECTION = 5100,

    SPRITE_SPELL_MIND_REMOVE_FEAR = 6000,
    SPRITE_SPELL_MIND_MIND_BLAST = 6010,
    SPRITE_SPELL_MIND_MIND_BLAST_IMPACT = 6011,
    SPRITE_SPELL_MIND_PROTECTION_FROM_MIND = 6020,
    SPRITE_SPELL_MIND_TELEPATHY = 6030,
    SPRITE_SPELL_MIND_CHARM = 6040,
    SPRITE_SPELL_MIND_CURE_PARALYSIS = 6050,
    SPRITE_SPELL_MIND_BERSERK = 6060,
    SPRITE_SPELL_MIND_MASS_FEAR = 6070,
    SPRITE_SPELL_MIND_MASS_FEAR_1 = 6071,
    SPRITE_SPELL_MIND_CURE_INSANITY = 6080,
    SPRITE_SPELL_MIND_PSYCHIC_SHOCK = 6090,
    SPRITE_SPELL_MIND_ENSLAVE = 6100,

    SPRITE_SPELL_BODY_CURE_WEAKNESS = 7000,
    SPRITE_SPELL_BODY_FIRST_AID = 7010,
    SPRITE_SPELL_BODY_PROTECTION_FROM_BODY = 7020,
    SPRITE_SPELL_BODY_HARM = 7030,
    SPRITE_SPELL_BODY_HARM_IMPACT = 7031,
    SPRITE_SPELL_BODY_REGENERATION = 7040,
    SPRITE_SPELL_BODY_CURE_POISON = 7050,
    SPRITE_SPELL_BODY_HAMMERHANDS = 7060,
    SPRITE_SPELL_BODY_CURE_DISEASE = 7070,
    SPRITE_SPELL_BODY_PROTECTION_FROM_MAGIC = 7080,
    SPRITE_SPELL_BODY_FLYING_FIST = 7090,
    SPRITE_SPELL_BODY_FLYING_FIST_IMPACT = 7091,
    SPRITE_SPELL_BODY_POWER_CURE = 7100,

    SPRITE_SPELL_LIGHT_LIGHT_BOLT = 8000,
    SPRITE_SPELL_LIGHT_LIGHT_BOLT_IMPACT = 8001,
    SPRITE_SPELL_LIGHT_DESTROY_UNDEAD = 8010,
    SPRITE_SPELL_LIGHT_DESTROY_UNDEAD_1 = 8011,
    SPRITE_SPELL_LIGHT_DISPEL_MAGIC = 8020,
    SPRITE_SPELL_LIGHT_DISPEL_MAGIC_1 = 8021,
    SPRITE_SPELL_LIGHT_PARALYZE = 8030,
    SPRITE_SPELL_LIGHT_SUMMON_ELEMENTAL = 8040,
    SPRITE_SPELL_LIGHT_DAY_OF_THE_GODS = 8050,
    SPRITE_SPELL_LIGHT_PRISMATIC_LIGHT = 8060,
    SPRITE_SPELL_LIGHT_PRISMATIC_LIGHT_1 = 8061,
    SPRITE_SPELL_LIGHT_DAY_OF_PROTECTION = 8070,
    SPRITE_SPELL_LIGHT_HOUR_OF_POWER = 8080,
    SPRITE_SPELL_LIGHT_SUNRAY = 8090,
    SPRITE_SPELL_LIGHT_SUNRAY_IMPACT = 8091,
    SPRITE_SPELL_LIGHT_DIVINE_INTERVENTION = 8100,

    SPRITE_SPELL_DARK_REANIMATE = 9000,
    SPRITE_SPELL_DARK_REANIMATE_1 = 9001,
    SPRITE_SPELL_DARK_TOXIC_CLOUD = 9010,
    SPRITE_SPELL_DARK_VAMPIRIC_WEAPON = 9020,
    SPRITE_SPELL_DARK_SHRINKING_RAY = 9030,
    SPRITE_SPELL_DARK_SHARPMETAL = 9040,
    SPRITE_SPELL_DARK_SHARPMETAL_IMPACT = 9041,
    SPRITE_SPELL_DARK_CONTROL_UNDEAD = 9050,
    SPRITE_SPELL_DARK_PAIN_REFLECTION = 9060,
    SPRITE_SPELL_DARK_SACRIFICE = 9070,
    SPRITE_SPELL_DARK_DRAGON_BREATH = 9080,
    SPRITE_SPELL_DARK_DRAGON_BREATH_1 = 9081,
    SPRITE_SPELL_DARK_ARMAGEDDON = 9090,
    SPRITE_SPELL_DARK_SOULDRINKER = 9100,
};

enum { OBJECT_40 = 0x40, OBJECT_ATTACHED_TO_ACTOR = 0x80 };
