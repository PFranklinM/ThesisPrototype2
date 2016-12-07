#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_bulletMove509920243.h"
#include "AssemblyU2DCSharp_cameraFollow2984524598.h"
#include "AssemblyU2DCSharp_doorMove1201556639.h"
#include "AssemblyU2DCSharp_emailTest2120406606.h"
#include "AssemblyU2DCSharp_mainCharacterTextBoxManager3999869439.h"
#include "AssemblyU2DCSharp_playerLosesFlight3220454509.h"
#include "AssemblyU2DCSharp_playerMove2095641170.h"
#include "AssemblyU2DCSharp_playerWentWhereTheyShouldntBoolS2464196904.h"
#include "AssemblyU2DCSharp_restart1097506319.h"
#include "AssemblyU2DCSharp_shadowCharacterTextBoxManager2636567224.h"
#include "AssemblyU2DCSharp_shadowSpriteScript841807152.h"
#include "AssemblyU2DCSharp_targetControl3255490188.h"
#include "AssemblyU2DCSharp_targetControl_U3CmeleeRightU3Ec_2415909596.h"
#include "AssemblyU2DCSharp_targetControl_U3CmeleeLeftU3Ec__2097004924.h"
#include "AssemblyU2DCSharp_transitionEndManager296805767.h"
#include "AssemblyU2DCSharp_transitionStartManager3348232928.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (bulletMove_t509920243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[4] = 
{
	bulletMove_t509920243::get_offset_of_moveSpeed_2(),
	bulletMove_t509920243::get_offset_of_target_3(),
	bulletMove_t509920243::get_offset_of_Bullet_4(),
	bulletMove_t509920243::get_offset_of_player_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (cameraFollow_t2984524598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1701[2] = 
{
	cameraFollow_t2984524598::get_offset_of_player_2(),
	cameraFollow_t2984524598::get_offset_of_offset_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (doorMove_t1201556639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[2] = 
{
	doorMove_t1201556639::get_offset_of_doorIsHittable_2(),
	doorMove_t1201556639::get_offset_of_originalPos_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (emailTest_t2120406606), -1, sizeof(emailTest_t2120406606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1703[1] = 
{
	emailTest_t2120406606_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (mainCharacterTextBoxManager_t3999869439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[8] = 
{
	mainCharacterTextBoxManager_t3999869439::get_offset_of_textBox_2(),
	mainCharacterTextBoxManager_t3999869439::get_offset_of_theText_3(),
	mainCharacterTextBoxManager_t3999869439::get_offset_of_textFile_4(),
	mainCharacterTextBoxManager_t3999869439::get_offset_of_textLines_5(),
	mainCharacterTextBoxManager_t3999869439::get_offset_of_currentLine_6(),
	mainCharacterTextBoxManager_t3999869439::get_offset_of_endAtLine_7(),
	mainCharacterTextBoxManager_t3999869439::get_offset_of_thePlayer_8(),
	mainCharacterTextBoxManager_t3999869439::get_offset_of_isActive_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (playerLosesFlight_t3220454509), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (playerMove_t2095641170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[23] = 
{
	playerMove_t2095641170::get_offset_of_player_2(),
	playerMove_t2095641170::get_offset_of_cameraCollider_3(),
	playerMove_t2095641170::get_offset_of_playerShadow_4(),
	playerMove_t2095641170::get_offset_of_rb_5(),
	playerMove_t2095641170::get_offset_of_jumpCounter_6(),
	playerMove_t2095641170::get_offset_of_playerIsFlying_7(),
	playerMove_t2095641170::get_offset_of_screenTransition_8(),
	playerMove_t2095641170::get_offset_of_shadowMoveAmount_9(),
	playerMove_t2095641170::get_offset_of_shadowMoveTimer_10(),
	playerMove_t2095641170::get_offset_of_facingLeft_11(),
	playerMove_t2095641170::get_offset_of_facingRight_12(),
	playerMove_t2095641170::get_offset_of_playerIsAirborn_13(),
	playerMove_t2095641170::get_offset_of_health_14(),
	playerMove_t2095641170::get_offset_of_healthText_15(),
	playerMove_t2095641170::get_offset_of_canMove_16(),
	playerMove_t2095641170::get_offset_of_playerHasFlight_17(),
	playerMove_t2095641170::get_offset_of_playerHasMelee_18(),
	playerMove_t2095641170::get_offset_of_playerHasShield_19(),
	playerMove_t2095641170::get_offset_of_playerHasDoubleJump_20(),
	playerMove_t2095641170::get_offset_of_playerHasShadow_21(),
	playerMove_t2095641170::get_offset_of_playerStandingLeft_22(),
	playerMove_t2095641170::get_offset_of_playerStandingRight_23(),
	playerMove_t2095641170::get_offset_of_spriteRenderer_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (playerWentWhereTheyShouldntBoolScript_t2464196904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1707[1] = 
{
	playerWentWhereTheyShouldntBoolScript_t2464196904::get_offset_of_playerWentWhereTheyShouldnt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (restart_t1097506319), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (shadowCharacterTextBoxManager_t2636567224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[8] = 
{
	shadowCharacterTextBoxManager_t2636567224::get_offset_of_textBox_2(),
	shadowCharacterTextBoxManager_t2636567224::get_offset_of_theText_3(),
	shadowCharacterTextBoxManager_t2636567224::get_offset_of_textFile_4(),
	shadowCharacterTextBoxManager_t2636567224::get_offset_of_textLines_5(),
	shadowCharacterTextBoxManager_t2636567224::get_offset_of_currentLine_6(),
	shadowCharacterTextBoxManager_t2636567224::get_offset_of_endAtLine_7(),
	shadowCharacterTextBoxManager_t2636567224::get_offset_of_thePlayer_8(),
	shadowCharacterTextBoxManager_t2636567224::get_offset_of_isActive_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (shadowSpriteScript_t841807152), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1710[5] = 
{
	shadowSpriteScript_t841807152::get_offset_of_player_2(),
	shadowSpriteScript_t841807152::get_offset_of_playerShadow_3(),
	shadowSpriteScript_t841807152::get_offset_of_shadowStandingLeft_4(),
	shadowSpriteScript_t841807152::get_offset_of_shadowStandingRight_5(),
	shadowSpriteScript_t841807152::get_offset_of_spriteRenderer_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (targetControl_t3255490188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[17] = 
{
	targetControl_t3255490188::get_offset_of_target_2(),
	targetControl_t3255490188::get_offset_of_player_3(),
	targetControl_t3255490188::get_offset_of_bullet_4(),
	targetControl_t3255490188::get_offset_of_meleeColliderRight_5(),
	targetControl_t3255490188::get_offset_of_meleeColliderLeft_6(),
	targetControl_t3255490188::get_offset_of_pos_7(),
	targetControl_t3255490188::get_offset_of_ROF_8(),
	targetControl_t3255490188::get_offset_of_shotDelay_9(),
	targetControl_t3255490188::get_offset_of_AREquipped_10(),
	targetControl_t3255490188::get_offset_of_SGEquipped_11(),
	targetControl_t3255490188::get_offset_of_HCEquipped_12(),
	targetControl_t3255490188::get_offset_of_RLEquipped_13(),
	targetControl_t3255490188::get_offset_of_MLEquipped_14(),
	targetControl_t3255490188::get_offset_of_playerHasMeleeAttack_15(),
	targetControl_t3255490188::get_offset_of_playerFacingLeft_16(),
	targetControl_t3255490188::get_offset_of_playerFacingRight_17(),
	targetControl_t3255490188::get_offset_of_thePlayer_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (U3CmeleeRightU3Ec__Iterator0_t2415909596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1712[4] = 
{
	U3CmeleeRightU3Ec__Iterator0_t2415909596::get_offset_of_U3CmeleeCounterU3E__0_0(),
	U3CmeleeRightU3Ec__Iterator0_t2415909596::get_offset_of_U24PC_1(),
	U3CmeleeRightU3Ec__Iterator0_t2415909596::get_offset_of_U24current_2(),
	U3CmeleeRightU3Ec__Iterator0_t2415909596::get_offset_of_U3CU3Ef__this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (U3CmeleeLeftU3Ec__Iterator1_t2097004924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1713[4] = 
{
	U3CmeleeLeftU3Ec__Iterator1_t2097004924::get_offset_of_U3CmeleeCounterU3E__0_0(),
	U3CmeleeLeftU3Ec__Iterator1_t2097004924::get_offset_of_U24PC_1(),
	U3CmeleeLeftU3Ec__Iterator1_t2097004924::get_offset_of_U24current_2(),
	U3CmeleeLeftU3Ec__Iterator1_t2097004924::get_offset_of_U3CU3Ef__this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (transitionEndManager_t296805767), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (transitionStartManager_t3348232928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[3] = 
{
	transitionStartManager_t3348232928::get_offset_of_doorTimer_2(),
	transitionStartManager_t3348232928::get_offset_of_transitionIsCounting_3(),
	transitionStartManager_t3348232928::get_offset_of_doorScript_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
