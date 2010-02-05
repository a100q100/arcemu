/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2005-2007 Ascent Team <http://www.ascentemu.com/>
 * Copyright (C) 2008-2010 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _SPELLFAILURE_H
#define _SPELLFAILURE_H

enum SpellCastResult
{
    SPELL_FAILED_SUCCESS                        = 0x00,
    SPELL_FAILED_AFFECTING_COMBAT               = 0x01,
    SPELL_FAILED_ALREADY_AT_FULL_HEALTH         = 0x02,
    SPELL_FAILED_ALREADY_AT_FULL_MANA           = 0x03,
    SPELL_FAILED_ALREADY_AT_FULL_POWER          = 0x04,
    SPELL_FAILED_ALREADY_BEING_TAMED            = 0x05,
    SPELL_FAILED_ALREADY_HAVE_CHARM             = 0x06,
    SPELL_FAILED_ALREADY_HAVE_SUMMON            = 0x07,
    SPELL_FAILED_ALREADY_OPEN                   = 0x08,
    SPELL_FAILED_AURA_BOUNCED                   = 0x09,
    SPELL_FAILED_AUTOTRACK_INTERRUPTED          = 0x0A,
    SPELL_FAILED_BAD_IMPLICIT_TARGETS           = 0x0B,
    SPELL_FAILED_BAD_TARGETS                    = 0x0C,
    SPELL_FAILED_CANT_BE_CHARMED                = 0x0D,
    SPELL_FAILED_CANT_BE_DISENCHANTED           = 0x0E,
    SPELL_FAILED_CANT_BE_DISENCHANTED_SKILL     = 0x0F,
    SPELL_FAILED_CANT_BE_MILLED                 = 0x10,
    SPELL_FAILED_CANT_BE_PROSPECTED             = 0x11,
    SPELL_FAILED_CANT_CAST_ON_TAPPED            = 0x12,
    SPELL_FAILED_CANT_DUEL_WHILE_INVISIBLE      = 0x13,
    SPELL_FAILED_CANT_DUEL_WHILE_STEALTHED      = 0x14,
    SPELL_FAILED_CANT_STEALTH                   = 0x15,
    SPELL_FAILED_CASTER_AURASTATE               = 0x16,
    SPELL_FAILED_CASTER_DEAD                    = 0x17,
    SPELL_FAILED_CHARMED                        = 0x18,
    SPELL_FAILED_CHEST_IN_USE                   = 0x19,
    SPELL_FAILED_CONFUSED                       = 0x1A,
    SPELL_FAILED_DONT_REPORT                    = 0x1B,
    SPELL_FAILED_EQUIPPED_ITEM                  = 0x1C,
    SPELL_FAILED_EQUIPPED_ITEM_CLASS            = 0x1D,
    SPELL_FAILED_EQUIPPED_ITEM_CLASS_MAINHAND   = 0x1E,
    SPELL_FAILED_EQUIPPED_ITEM_CLASS_OFFHAND    = 0x1F,
    SPELL_FAILED_ERROR                          = 0x20,
    SPELL_FAILED_FIZZLE                         = 0x21,
    SPELL_FAILED_FLEEING                        = 0x22,
    SPELL_FAILED_FOOD_LOWLEVEL                  = 0x23,
    SPELL_FAILED_HIGHLEVEL                      = 0x24,
    SPELL_FAILED_HUNGER_SATIATED                = 0x25,
    SPELL_FAILED_IMMUNE                         = 0x26,
    SPELL_FAILED_INCORRECT_AREA                 = 0x27,
    SPELL_FAILED_INTERRUPTED                    = 0x28,
    SPELL_FAILED_INTERRUPTED_COMBAT             = 0x29,
    SPELL_FAILED_ITEM_ALREADY_ENCHANTED         = 0x2A,
    SPELL_FAILED_ITEM_GONE                      = 0x2B,
    SPELL_FAILED_ITEM_NOT_FOUND                 = 0x2C,
    SPELL_FAILED_ITEM_NOT_READY                 = 0x2D,
    SPELL_FAILED_LEVEL_REQUIREMENT              = 0x2E,
    SPELL_FAILED_LINE_OF_SIGHT                  = 0x2F,
    SPELL_FAILED_LOWLEVEL                       = 0x30,
    SPELL_FAILED_LOW_CASTLEVEL                  = 0x31,
    SPELL_FAILED_MAINHAND_EMPTY                 = 0x32,
    SPELL_FAILED_MOVING                         = 0x33,
    SPELL_FAILED_NEED_AMMO                      = 0x34,
    SPELL_FAILED_NEED_AMMO_POUCH                = 0x35,
    SPELL_FAILED_NEED_EXOTIC_AMMO               = 0x36,
    SPELL_FAILED_NEED_MORE_ITEMS                = 0x37,
    SPELL_FAILED_NOPATH                         = 0x38,
    SPELL_FAILED_NOT_BEHIND                     = 0x39,
    SPELL_FAILED_NOT_FISHABLE                   = 0x3A,
    SPELL_FAILED_NOT_FLYING                     = 0x3B,
    SPELL_FAILED_NOT_HERE                       = 0x3C,
    SPELL_FAILED_NOT_INFRONT                    = 0x3D,
    SPELL_FAILED_NOT_IN_CONTROL                 = 0x3E,
    SPELL_FAILED_NOT_KNOWN                      = 0x3F,
    SPELL_FAILED_NOT_MOUNTED                    = 0x40,
    SPELL_FAILED_NOT_ON_TAXI                    = 0x41,
    SPELL_FAILED_NOT_ON_TRANSPORT               = 0x42,
    SPELL_FAILED_NOT_READY                      = 0x43,
    SPELL_FAILED_NOT_SHAPESHIFT                 = 0x44,
    SPELL_FAILED_NOT_STANDING                   = 0x45,
    SPELL_FAILED_NOT_TRADEABLE                  = 0x46,
    SPELL_FAILED_NOT_TRADING                    = 0x47,
    SPELL_FAILED_NOT_UNSHEATHED                 = 0x48,
    SPELL_FAILED_NOT_WHILE_GHOST                = 0x49,
    SPELL_FAILED_NOT_WHILE_LOOTING              = 0x4A,
    SPELL_FAILED_NO_AMMO                        = 0x4B,
    SPELL_FAILED_NO_CHARGES_REMAIN              = 0x4C,
    SPELL_FAILED_NO_CHAMPION                    = 0x4D,
    SPELL_FAILED_NO_COMBO_POINTS                = 0x4E,
    SPELL_FAILED_NO_DUELING                     = 0x4F,
    SPELL_FAILED_NO_ENDURANCE                   = 0x50,
    SPELL_FAILED_NO_FISH                        = 0x51,
    SPELL_FAILED_NO_ITEMS_WHILE_SHAPESHIFTED    = 0x52,
    SPELL_FAILED_NO_MOUNTS_ALLOWED              = 0x53,
    SPELL_FAILED_NO_PET                         = 0x54,
    SPELL_FAILED_NO_POWER                       = 0x55,
    SPELL_FAILED_NOTHING_TO_DISPEL              = 0x56,
    SPELL_FAILED_NOTHING_TO_STEAL               = 0x57,
    SPELL_FAILED_ONLY_ABOVEWATER                = 0x58,
    SPELL_FAILED_ONLY_DAYTIME                   = 0x59,
    SPELL_FAILED_ONLY_INDOORS                   = 0x5A,
    SPELL_FAILED_ONLY_MOUNTED                   = 0x5B,
    SPELL_FAILED_ONLY_NIGHTTIME                 = 0x5C,
    SPELL_FAILED_ONLY_OUTDOORS                  = 0x5D,
    SPELL_FAILED_ONLY_SHAPESHIFT                = 0x5E,
    SPELL_FAILED_ONLY_STEALTHED                 = 0x5F,
    SPELL_FAILED_ONLY_UNDERWATER                = 0x60,
    SPELL_FAILED_OUT_OF_RANGE                   = 0x61,
    SPELL_FAILED_PACIFIED                       = 0x62,
    SPELL_FAILED_POSSESSED                      = 0x63,
    SPELL_FAILED_REAGENTS                       = 0x64,
    SPELL_FAILED_REQUIRES_AREA                  = 0x65,
    SPELL_FAILED_REQUIRES_SPELL_FOCUS           = 0x66,
    SPELL_FAILED_ROOTED                         = 0x67,
    SPELL_FAILED_SILENCED                       = 0x68,
    SPELL_FAILED_SPELL_IN_PROGRESS              = 0x69,
    SPELL_FAILED_SPELL_LEARNED                  = 0x6A,
    SPELL_FAILED_SPELL_UNAVAILABLE              = 0x6B,
    SPELL_FAILED_STUNNED                        = 0x6C,
    SPELL_FAILED_TARGETS_DEAD                   = 0x6D,
    SPELL_FAILED_TARGET_AFFECTING_COMBAT        = 0x6E,
    SPELL_FAILED_TARGET_AURASTATE               = 0x6F,
    SPELL_FAILED_TARGET_DUELING                 = 0x70,
    SPELL_FAILED_TARGET_ENEMY                   = 0x71,
    SPELL_FAILED_TARGET_ENRAGED                 = 0x72,
    SPELL_FAILED_TARGET_FRIENDLY                = 0x73,
    SPELL_FAILED_TARGET_IN_COMBAT               = 0x74,
    SPELL_FAILED_TARGET_IS_PLAYER               = 0x75,
    SPELL_FAILED_TARGET_IS_PLAYER_CONTROLLED    = 0x76,
    SPELL_FAILED_TARGET_NOT_DEAD                = 0x77,
    SPELL_FAILED_TARGET_NOT_IN_PARTY            = 0x78,
    SPELL_FAILED_TARGET_NOT_LOOTED              = 0x79,
    SPELL_FAILED_TARGET_NOT_PLAYER              = 0x7A,
    SPELL_FAILED_TARGET_NO_POCKETS              = 0x7B,
    SPELL_FAILED_TARGET_NO_WEAPONS              = 0x7C,
    SPELL_FAILED_TARGET_NO_RANGED_WEAPONS       = 0x7D,
    SPELL_FAILED_TARGET_UNSKINNABLE             = 0x7E,
    SPELL_FAILED_THIRST_SATIATED                = 0x7F,
    SPELL_FAILED_TOO_CLOSE                      = 0x80,
    SPELL_FAILED_TOO_MANY_OF_ITEM               = 0x81,
    SPELL_FAILED_TOTEM_CATEGORY                 = 0x82,
    SPELL_FAILED_TOTEMS                         = 0x83,
    SPELL_FAILED_TRY_AGAIN                      = 0x84,
    SPELL_FAILED_UNIT_NOT_BEHIND                = 0x85,
    SPELL_FAILED_UNIT_NOT_INFRONT               = 0x86,
    SPELL_FAILED_WRONG_PET_FOOD                 = 0x87,
    SPELL_FAILED_NOT_WHILE_FATIGUED             = 0x88,
    SPELL_FAILED_TARGET_NOT_IN_INSTANCE         = 0x89,
    SPELL_FAILED_NOT_WHILE_TRADING              = 0x8A,
    SPELL_FAILED_TARGET_NOT_IN_RAID             = 0x8B,
    SPELL_FAILED_TARGET_FREEFORALL              = 0x8C,
    SPELL_FAILED_NO_EDIBLE_CORPSES              = 0x8D,
    SPELL_FAILED_ONLY_BATTLEGROUNDS             = 0x8E,
    SPELL_FAILED_TARGET_NOT_GHOST               = 0x8F,
    SPELL_FAILED_TRANSFORM_UNUSABLE             = 0x90,
    SPELL_FAILED_WRONG_WEATHER                  = 0x91,
    SPELL_FAILED_DAMAGE_IMMUNE                  = 0x92,
    SPELL_FAILED_PREVENTED_BY_MECHANIC          = 0x93,
    SPELL_FAILED_PLAY_TIME                      = 0x94,
    SPELL_FAILED_REPUTATION                     = 0x95,
    SPELL_FAILED_MIN_SKILL                      = 0x96,
    SPELL_FAILED_NOT_IN_ARENA                   = 0x97,
    SPELL_FAILED_NOT_ON_SHAPESHIFT              = 0x98,
    SPELL_FAILED_NOT_ON_STEALTHED               = 0x99,
    SPELL_FAILED_NOT_ON_DAMAGE_IMMUNE           = 0x9A,
    SPELL_FAILED_NOT_ON_MOUNTED                 = 0x9B,
    SPELL_FAILED_TOO_SHALLOW                    = 0x9C,
    SPELL_FAILED_TARGET_NOT_IN_SANCTUARY        = 0x9D,
    SPELL_FAILED_TARGET_IS_TRIVIAL              = 0x9E,
    SPELL_FAILED_BM_OR_INVISGOD                 = 0x9F,
    SPELL_FAILED_EXPERT_RIDING_REQUIREMENT      = 0xA0,
    SPELL_FAILED_ARTISAN_RIDING_REQUIREMENT     = 0xA1,
    SPELL_FAILED_NOT_IDLE                       = 0xA2,
    SPELL_FAILED_NOT_INACTIVE                   = 0xA3,
    SPELL_FAILED_PARTIAL_PLAYTIME               = 0xA4,
    SPELL_FAILED_NO_PLAYTIME                    = 0xA5,
    SPELL_FAILED_NOT_IN_BATTLEGROUND            = 0xA6,
    SPELL_FAILED_NOT_IN_RAID_INSTANCE           = 0xA7,
    SPELL_FAILED_ONLY_IN_ARENA                  = 0xA8,
    SPELL_FAILED_TARGET_LOCKED_TO_RAID_INSTANCE = 0xA9,
    SPELL_FAILED_ON_USE_ENCHANT                 = 0xAA,
    SPELL_FAILED_NOT_ON_GROUND                  = 0xAB,
    SPELL_FAILED_CUSTOM_ERROR                   = 0xAC,
    SPELL_FAILED_CANT_DO_THAT_RIGHT_NOW         = 0xAD,
    SPELL_FAILED_TOO_MANY_SOCKETS               = 0xAE,
    SPELL_FAILED_INVALID_GLYPH                  = 0xAF,
    SPELL_FAILED_UNIQUE_GLYPH                   = 0xB0,
    SPELL_FAILED_GLYPH_SOCKET_LOCKED            = 0xB1,
    SPELL_FAILED_NO_VALID_TARGETS               = 0xB2,
    SPELL_FAILED_ITEM_AT_MAX_CHARGES            = 0xB3,
    SPELL_FAILED_NOT_IN_BARBERSHOP              = 0xB4,
    SPELL_FAILED_FISHING_TOO_LOW                = 0xB5,
    SPELL_FAILED_ITEM_ENCHANT_TRADE_WINDOW      = 0xB6,
    SPELL_FAILED_SUMMON_PENDING                 = 0xB7,
    SPELL_FAILED_MAX_SOCKETS                    = 0xB8,
    SPELL_FAILED_PET_CAN_RENAME                 = 0xB9,
    SPELL_FAILED_UNKNOWN                        = 0xBA
}; 
#define SPELL_CANCAST_OK SPELL_FAILED_SUCCESS

enum PetTameFailure
{
	PETTAME_INVALIDCREATURE                                      = 1,
	PETTAME_TOOMANY                                              = 2,
	PETTAME_CREATUREALREADYOWNED                                 = 3,
	PETTAME_NOTTAMEABLE                                          = 4,
	PETTAME_ANOTHERSUMMONACTIVE                                  = 5,
	PETTAME_UNITSCANTTAME                                        = 6,
	PETTAME_NOPETAVAILABLE                                       = 7,
	PETTAME_INTERNALERROR                                        = 8,
	PETTAME_TOOHIGHLEVEL                                         = 9,
	PETTAME_DEAD                                                 = 10,
	PETTAME_NOTDEAD                                              = 11,
	PETTAME_CANTCONTROLEXOTIC                                    = 12,
	PETTAME_UNKNOWNERROR                                         = 13,
};

enum MOUNT_FAILURE
{
	ERR_MOUNT_NOTMOUNTABLE                                       = 0,
	ERR_MOUNT_TOOFARAWAY                                         = 1,
	ERR_MOUNT_ALREADYMOUNTED                                     = 2,
	ERR_MOUNT_INVALIDMOUNTEE                                     = 3,
	ERR_MOUNT_NOTYOURPET                                         = 4,
	ERR_MOUNT_OTHER                                              = 5,
	ERR_MOUNT_LOOTING                                            = 6,
	ERR_MOUNT_RACECANTMOUNT                                      = 7,
	ERR_MOUNT_SHAPESHIFTED                                       = 8,
	ERR_MOUNT_FORCEDDISMOUNT                                     = 9
};

enum DISMOUNT_FAILURE
{
	ERR_DISMOUNT_NOPET											 = 0,
	ERR_DISMOUNT_NOTMOUNTED                                      = 1,
	ERR_DISMOUNT_NOTYOURPET                                      = 2
};
#endif

