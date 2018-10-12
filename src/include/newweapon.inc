#if defined _NEWWEAPON_included
  #endinput
#endif
#define _NEWWEAPON_included

// ===========================<�����inc>=========================== //
#include <wpn_const>

// ===========================<���ܽӿ�>=========================== //
// ���ܣ�ע��һ��������������
// ������Ϣ��
// 	iWeaponId������ID��CSW_***��
// 	iWeaponData�����������Ͳ��������忴wpn_const.inc
//	fWeaponData�����������Ͳ��������忴wpn_const.inc
// 	szWeaponList������SPR��weapon_***.txt��
// 	szKillSPR��ɱ��SPR
// 	szWeaponPModel��Pģ��
// 	szWeaponVModel��Vģ��
// 	szWeaponWModel��Wģ��
// 	szWeaponVModelSight������Vģ��
// 	szFireSound1����ǹ����1
// 	szFireSound2����ǹ����2
// 	szSilenceFireSound1������״̬��ǹ����1
// 	szSilenceFireSound2������״̬��ǹ����2
// 	szCommand����������
// ����ֵ���������
native WPN_RegisterWeapon(iWeaponId, iWeaponData[MaxWeaponIntData], Float:fWeaponData[MaxWeaponFloatData], szWeaponList[], szKillSPR[], szWeaponPModel[], szWeaponVModel[], szWeaponWModel[], szWeaponVModelSight[], szFireSound1[], szFireSound2[], szSilenceFireSound1[], szSilenceFireSound2[], szCommand[])

// ���ܣ����������Ķ���
// ������Ϣ��
//	i���������
//	IDLE��������ֹ����
//	RELOAD��������������
//	DRAW�������ͳ�����
//	SHOOT��������������������������������CSW_ELITE�Ļ���ôSHOOT[0]Ϊ�󹥻���SHOOT[1]Ϊ�ҹ���������״̬������=��=����SHOOT[2]������
//	RELOADMODE���ֱ���ANIM_START_RELOAD����ʼ���, ANIM_INSERT�����, ANIM_AFTER_RELOAD���������
//	SIGHT_OPEN����������Ķ���
//	SIGHT_CLOSE���رջ���Ķ���
//	DETACH_SILENCER���ر������Ķ���
//	ATTACH_SILENCER�����������Ķ���
//	IDLE_SILENCED������״̬�µľ�ֹ����
//	RELOAD_SILENCED������״̬�µĻ�������
//	DRAW_SILENCED������״̬�µ��ͳ�����
//	SHOOT_SILENCED������״̬�µ����������������
// ����ֵ����
native WPN_SetWeaponAnim(i, IDLE, RELOAD, DRAW, SHOOT[3], RELOADMODE[3], SIGHT_OPEN, SIGHT_CLOSE, DETACH_SILENCER, ATTACH_SILENCER, IDLE_SILENCED, RELOAD_SILENCED, DRAW_SILENCED, SHOOT_SILENCED[3])

// ���ܣ�ע��һ����������
// ������Ϣ��
//	szWeaponList������SPR��weapon_***.txt��
//	szKillSPR��ɱ��SPR
//	szWeaponPModel��Pģ��
//	szWeaponVModel��Vģ��
//	szKnifeSound1���ͳ�����
//	szKnifeSound2����ǽ����
//	szKnifeSound3����������
//	szKnifeSound4���ػ�����
//	szKnifeSound5�����1����
//	szKnifeSound6�����2����
//	fKnifeData�����Ӹ����Ͳ��������忴wpn_const.inc
//	szCommand����������
//	iCost���۸�
//	iTeam��������飬1��T��2��CT��0�����ж���
// ����ֵ���������
native WPN_RegisterKnife(szWeaponList[], szKillSPR[], szWeaponPModel[], szWeaponVModel[], szKnifeSound1[], szKnifeSound2[], szKnifeSound3[], szKnifeSound4[], szKnifeSound5[], szKnifeSound6[], Float:fKnifeData[MaxKnifeFloatData], szCommand[], iCost, iTeam)

// ���ܣ����ý��������Ķ���
// ������Ϣ��
//	i���������
//	IDLE����ֹ����
//	SLASH1���������1
//	SLASH2���������2
//	DRAW���ͳ�����
//	STAB���ػ�����
//	STABMISS���ػ�miss����
//	MIDSLASH���������
//	MIDSLASHMISS�����miss����
//	SLASHBEGIN������ӳٶ���
//	STABBEGIN���ػ��ӳٶ���
// ����ֵ����
native WPN_SetKnifeAnim(i, IDLE, SLASH1, SLASH2, DRAW, STAB, STABMISS, MIDSLASH, MIDSLASHMISS, SLASHBEGIN, STABBEGIN)

// ���ܣ�ע��һ��Ͷ������
// ������Ϣ��
//	szWeaponList������SPR��weapon_***.txt��
//	szKillSPR��ɱ��SPR
//	szExplodeSPR����ըSPR
//	szWeaponPModel��Pģ��
//	szWeaponVModel��Vģ��
//	szWeaponWModel��Wģ��
//	szExplodeSound����ը����
//	fDrawTime���ͳ�ʱ��
//	fExplodeTime����ըʱ��
//	fRange����ը�뾶
//	fMaxSpeed�������ٶ�
//	fDamage���˺�����
//	fExplodeSoundVolume����ը������С��0.0 <= ��ֵ <= 1.0��
//	szCommand����������
//	iCost���۸�
//	iTeam��������飬1��T��2��CT��0�����ж���
//	iWModelBody��Wģ����ģ�͵���ţ�û�еĻ�д0��
// ����ֵ���������
native WPN_RegisterGrenade(szWeaponList[], szKillSPR[], szExplodeSPR[], szWeaponPModel[], szWeaponVModel[], szWeaponWModel[], szExplodeSound[], Float:fDrawTime, Float:fExplodeTime, Float:fRange, Float:fMaxSpeed, Float:fDamage, Float:fExplodeSoundVolume, szCommand[], iCost, iTeam, iWModelBody)

// ���ܣ����������
// ������Ϣ��
//	id�����id
//	i���������
// ����ֵ������ʵ��id��iEntity��
native WPN_GiveWeapon(id, i)

// ���ܣ���ȡ�����Ĳ���
// ������Ϣ��
//	i���������
//	id�����id
//	iType��Ҫ��ȡ�����ͣ��ο�wpn_const.inc��
//	szReturn��iLen������ȡ�����ݴ洢������Ϊlen���ַ���szReturn��
// ����ֵ��Ҫ��ȡ��ֵ
native WPN_GetParamInt(i, id, iType)
native Float:WPN_GetParamFloat(i, id, iType)
native WPN_GetParamString(i, id, iType, szReturn[], iLen)

// ���ܣ����������Ĳ���
// ������Ϣ��
//	i���������
//	id�����id
//	iType��Ҫ���õ����ͣ��ο�wpn_const.inc��
//	iValue��fValue��szValue��Ҫ���õ�ֵ
// ����ֵ����
native WPN_SetParamInt(i, id, iType, iValue)
native WPN_SetParamFloat(i, id, iType, Float:fValue)
native WPN_SetParamString(i, id, iType, szValue[])

// ���ܣ�ִ��һ�ι���
// ������Ϣ��
//	iAttacker��������id
//	iVictim���ܺ���id
//	iEntity��������ʹ�õ�ʵ��id
//	fParam�������Ͳ���
//		fParam[0]������
//		fParam[1]���Ƕȣ�����ֵ��60.0 <= �Ƕ� <= 120.0��
//		fParam[2]���Ƕ��������������ֵ��20.0���ң����Ϊ1.0��
//		fParam[3]���߶ȣ�����ֵ��1.0 <= �߶� <= 50.0��
//		fParam[4]���߶��������������ֵ��5.0 <= �߶� <= 15.0��
//		fParam[5]���˺�ֵ
//	fOrigin������
//	iDamageType���˺�����
//	iSpecial��������
// ��ע��
//	���˺�����ΪDMGTYPE_SECTOR����DMGTYPE_LINEʱ������Ϊ������ꣻDMGTYPE_EXPLOSION��DMGTYPE_TOUCH������ʵ������
//	�ܺ���idֻ�����˺�����ΪDMGTYPE_TOUCHʱ�Ż��õ����������Ϳ���Ϊ0
// ����ֵ��
//	HIT_PLAYER	������ң�����ҲΪHIT_PLAYER��
//	HIT_ENTITY	����ʵ��
//	HIT_WALL	����worldspawn
//	HIT_EMPTY	δ����
native WPN_ExecuteAttack(iAttacker, iVictim, iEntity, Float:fParam[6], Float:fOrigin[3], iDamageType, iSpecial)

// ���ܣ�����Ѫ
// ������Ϣ��
//	fOrigin������
//	iColor����ɫ
//	iAmount������
// ����ֵ����
native WPN_SpawnBlood(Float:fOrigin[3], iColor, iAmount)

// ���ܣ���������
// ������Ϣ��
//	fOrigin������
// ����ֵ����
native WPN_FakeSmoke(Float:fOrigin[3])

// ���ܣ������ӵ�
// ������Ϣ��
//	id�����id
//	iEntity������ʵ��id
//	i���������
//	iFull���Ƿ���
// ����ֵ����
native WPN_GiveAmmo(id, iEntity, i, iFull)

// ===========================<�¼��ӿ�>=========================== //

// ���ܣ����pre�����¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE������������
//	WPN_HANDLED��������������ִ��һ�μٹ���
forward WPN_PrimaryPreAttack(iEntity, id, i)

// ���ܣ����pre�����¼�post
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_PrimaryPreAttack_Post(iEntity, id, i)

// ���ܣ����post�����¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE��������post����
forward WPN_PrimaryPostAttack(iEntity, id, i)

// ���ܣ����post�����¼�post
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_PrimaryPostAttack_Post(iEntity, id, i)

// ���ܣ��Ҽ�pre�����¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE������Ҽ�����
forward WPN_SecondaryPreAttack(iEntity, id, i)

// ���ܣ��Ҽ�pre�����¼�post
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_SecondaryPreAttack_Post(iEntity, id, i)

// ���ܣ��Ҽ�post�����¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE������Ҽ�post����
forward WPN_SecondaryPostAttack(iEntity, id, i)

// ���ܣ��Ҽ�post�����¼�post
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_SecondaryPostAttack_Post(iEntity, id, i)

// ���ܣ���������ӳٽ����¼���δ������
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE����������������
forward WPN_PrimaryAttackEnd(iEntity, id, i)

// ���ܣ���������ӳٽ���post�¼����ѹ�����
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_PrimaryAttackEnd_Post(iEntity, id, i)

// ���ܣ������ػ��ӳٽ����¼���δ������
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE������Ҽ���������
forward WPN_SecondaryAttackEnd(iEntity, id, i)

// ���ܣ������ػ��ӳٽ���post�¼����ѹ�����
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_SecondaryAttackEnd_Post(iEntity, id, i)

// ���ܣ�������Idle�¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE�����idle�¼�
forward WPN_WeaponIdle(iEntity, id, i)

// ���ܣ�������postframe�¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE�����postframe�¼�
forward WPN_WeaponPostFrame(iEntity, id, i)

// ���ܣ�������Reload�¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE�����Reload�¼�
forward WPN_WeaponReload(iEntity, id, i)

// ���ܣ�������Reload Post�¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE�����Reload Post�¼�
forward WPN_WeaponReload_Post(iEntity, id, i)

// ���ܣ�������Draw�¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_WeaponDraw(iEntity, id, i)

// ���ܣ���������Pre�¼���δ����
// ������Ϣ��
//	id�����id
//	szCommand������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE����Ϲ����¼�
forward WPN_BuyWeapon(id, const szCommand[])

// ���ܣ���������Post�¼����ѹ���
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_BuyWeapon_Post(iEntity, id, i)

// ���ܣ���������ٶ�Pre�¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE����������ٶ��¼������������ٶ����������pev_maxspeed֮���ٴ��
forward WPN_WeaponMaxSpeed(iEntity, id, i)

// ���ܣ����û���Pre�¼�
// ������Ϣ��
//	attacker��������id
//	victim���ܺ���id
//	inflictor������ʵ��id
//	i���������
//	damage���˺�ֵ
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE����ϻ����¼����������û������������pev_velocity֮���ٴ��
forward WPN_WeaponKnockBack(attacker, victim, inflictor, i, Float:damage)

// ���ܣ�����ѪҺ�¼�
// ������Ϣ��
//	iColor��ѪҺ��ɫ
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE���������ѪҺ�¼�
forward WPN_HookSpawnBlood(iColor)

// ���ܣ����ױ�ըPre�¼�
// ������Ϣ��
//	iEntity������ʵ��id
//	id�����id
//	i���������
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE��������ױ�ը�¼�������д�������������д����Ч��duang������
forward WPN_HookGrenadeExplode(iEntity, id, i)

// ���ܣ����ױ�ըPost�¼�
// ������Ϣ��
//	id�����id
//	iEntity������ʵ��id
//	victim���ܺ���id
//	i���������
// ��ʹ�÷���ֵ����
forward WPN_HookGrenadeExplode_Post(id, iEntity, victim, i)

// ���ܣ�BOT��������Pre�¼�
// ������Ϣ��
//	id��BOT id
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE�����BOT�������������¼�
forward WPN_BotBuyWeapon(id)

// ���ܣ�BOT��������Post�¼�
// ������Ϣ��
//	id��BOT id
//	i���������
//	iSpecialWeapon������������ţ��ο�wpn_const.inc��
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE�����BOT����ĳ�������¼�
forward WPN_BotBuyWeapon_Post(id, i, iSpecialWeapon)

// ���ܣ��˺��¼�
// ������Ϣ��
//	��Ham_TakeDamageһ���Ͳ��ý����ˡ���
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE������˺��¼�
forward WPN_TakeDamage(victim, inflictor, attacker, Float:damage, damage_type)

// ���ܣ����������¼�
// ������Ϣ��
//	iSlot��ģ��slot
//	i���������
//	key����
//	value��ֵ
// ��ʹ�÷���ֵ����
forward WPN_LoadFiles(iSlot, i, key[], value[])

// ���ܣ�DeathMsg�¼�
// ������Ϣ��
//	attacker��������id
//	victim���ܺ���id
//	headshot���Ƿ�ͷ
//	szWeapon����ɱspr���������ǹ��ô����ǹ��spr������ԭ��spr��
// ��ʹ�÷���ֵ��
//	WPN_IGNORED����������
//	WPN_SUPERCEDE�����DeathMsg��Ϣ
forward WPN_DeathMsg(attacker, victim, headshot, szWeapon[])