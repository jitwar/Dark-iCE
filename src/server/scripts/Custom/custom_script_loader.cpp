/*
 * Copyright (C) 2008-2018 TrinityCore <https://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:
void AddSC_custom_npcs();
void AddSC_solocraft();
void AddSC_FireWorksOnLevelUp();
void AddSC_Player_Boa();
void AddSC_gon_playerscripts();
void AddSC_login_script();
void AddSC_announce_login();
void AddSC_Boss_Announcer();
void AddSC_XpWeekend();
void AddSC_RandomEnchantsScript();
void AddSC_Dynamic_Resurrections();
void AddSC_Duel_Reset();
void AddSC_custom_CongratsOnLevel();

void AddCustomScripts()
{
    AddSC_custom_npcs();
	AddSC_solocraft();
	AddSC_FireWorksOnLevelUp();
	AddSC_Player_Boa();
	AddSC_gon_playerscripts();
	AddSC_login_script();
	AddSC_announce_login();
	AddSC_Boss_Announcer();
	AddSC_XpWeekend();
	AddSC_RandomEnchantsScript();
	AddSC_Dynamic_Resurrections();
	AddSC_Duel_Reset();
	AddSC_custom_CongratsOnLevel();
}
