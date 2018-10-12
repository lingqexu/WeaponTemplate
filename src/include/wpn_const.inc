#if defined _WPN_CONST_included
  #endinput
#endif
#define _WPN_CONST_included

// ���������
#define MAXWEAPON			128

// �¼�����ֵ
#define WPN_IGNORED			0
#define WPN_SUPERCEDE			1
#define WPN_HANDLED			2

// ��ȡ������ŵ�ģ���������
#define SLOT_WEAPON			0
#define SLOT_KNIFE			1
#define SLOT_GRENADE			2

// ԭ�浶�ӹ�������
#define DEFAULT_DISTANCE_SWING		48
#define DEFAULT_DISTANCE_STAB		32

// ����״̬
#define CLOSED				0
#define OPEN				1
#define ATOB				2
#define BTOA				3

// ����Ǯ��
#define MAXMONEY			16000

// ������������
#define BUY_NORMALLY			0
#define BUY_CANNOT			1
#define BUY_EVERYWHERE			2

// BOT�����Special Weapon
#define SW_VESTHELM			1
#define SW_DEFUSER			2
#define SW_HEGRENADE			3
#define SW_FLASHBANG			4
#define SW_SMOKEGRENADE			5

// ���������id��
#define MAX_PRIM			18

// �������id��
#define MAX_SEC				6

// �˺�ʱ��������
#define SPDMG_NORMAL			0
#define SPDMG_CANTHEADSHOT		(1<<0)
#define SPDMG_TEAMATTACK		(1<<1)

// CheckAttack�ķ���ֵ
enum
{
	HIT_EMPTY = 0,
	HIT_PLAYER,
	HIT_ENTITY,
	HIT_WALL
}

// �˺�����
enum
{
	DMGTYPE_SECTOR = 0,
	DMGTYPE_LINE,
	DMGTYPE_EXPLOSION,
	DMGTYPE_TOUCH
}

enum
{
	ANIM_IDLE = 0,
	ANIM_RELOAD,
	ANIM_DRAW,
	ANIM_SHOOT1,
	ANIM_SHOOT2,
	ANIM_SHOOT3,
	ANIM_START_RELOAD,
	ANIM_INSERT,
	ANIM_AFTER_RELOAD,
	ANIM_SIGHT_OPEN,
	ANIM_SIGHT_CLOSE,
	ANIM_DETACH_SILENCER,
	ANIM_ATTACH_SILENCER,
	ANIM_IDLE_SILENCED,
	ANIM_RELOAD_SILENCED,
	ANIM_DRAW_SILENCED,
	ANIM_SHOOT1_SILENCED,
	ANIM_SHOOT2_SILENCED,
	ANIM_SHOOT3_SILENCED,
	MAXANIMATION
}

enum
{
	KNIFE_ANIM_IDLE = 0,
	KNIFE_ANIM_SLASH1,
	KNIFE_ANIM_SLASH2,
	KNIFE_ANIM_DRAW,
	KNIFE_ANIM_STAB,
	KNIFE_ANIM_STABMISS,
	KNIFE_ANIM_MIDSLASH,
	KNIFE_ANIM_MIDSLASH_MISS,
	KNIFE_ANIM_SLASHBEGIN,
	KNIFE_ANIM_STABBEGIN,
	KNIFE_MAXANIMATION
}

enum
{
	e_iReloadMode = 0,				// ����ģʽ��Ϊ1�Ļ���M3���ֻ���ģʽ
	e_iWeaponSight,					// ����ģʽ��Ϊ1�Ļ��ǿ����Ҽ�����
	e_iWeaponClip,					// �����ӵ�
	e_iWeaponAmmo,					// �󱸵�
	e_iWeaponCost,					// �۸�
	e_iWeaponAmmoCost,				// �ӵ��۸�
	e_iWeaponTeam,					// ������飬1��T��2��CT��0�����ж���
	e_iWeaponWModelBody,				// Wģ����ģ�͵���ţ�û�еĻ�д0��
	MaxWeaponIntData				// �������
}

enum
{
	e_fWeaponDamage = 0,				// �˺�����
	e_fWeaponSpeed,					// ����
	e_fWeaponAimSpeed,				// ��������
	e_fWeaponSilencedSpeed,				// ��������
	e_fWeaponRecoil,				// ����
	e_fWeaponAimRecoil,				// ��������
	e_fWeaponSilencedRecoil,			// ��������
	e_fWeaponAccuracy,				// ��ȷ��
	e_fWeaponAimAccuracy,				// ������ȷ��
	e_fWeaponSilencedAccuracy,			// ������ȷ��
	e_fWeaponReloadTime,				// ����ʱ��
	e_fWeaponDrawTime,				// �ͳ�ʱ��
	e_fWeaponMaxSpeed,				// �����ٶ�
	e_fWeaponAimMaxSpeed,				// ���������ٶ�
	e_fWeaponKnockBack,				// ����
	e_fSightDistance,				// ��ͷ���룬�������ľ�ͷ�������룬����ԽС������Խ��
	e_fSightFrameRate,				// ��ͷ�仯���ȣ�ÿˢ��һ�ξ�ͷʱ�����ľ���
	e_fSightOpenTime,				// ������������Ҫ��ʱ�䣬�����ģ�Ͷ���ʱ�䱣��һ��
	e_fSightCloseTime,				// �رջ�������Ҫ��ʱ�䣬�����ģ�Ͷ���ʱ�䱣��һ��
	e_fWeaponSilencedTime1,				// ������������Ҫ��ʱ�䣬�����ģ�Ͷ���ʱ�䱣��һ��
	e_fWeaponSilencedTime2,				// �ر���������Ҫ��ʱ�䣬�����ģ�Ͷ���ʱ�䱣��һ��
	e_fWeaponFireSoundVolume,			// ������ǹ������С��0.0 <= ��ֵ <= 1.0��
	e_fWeaponSilenceFireSoundVolume,		// ����������ǹ������С��0.0 <= ��ֵ <= 1.0��
	e_fShotgunStartReloadTime,			// ɢ��������ʼʱ��
	e_fShotgunAfterReloadTime,			// ɢ����������ʱ��
	MaxWeaponFloatData				// �������
}

enum
{
	e_fKnifeSlashResetTime = 0,			// �������ʱ��
	e_fKnifeSlashTime,				// ����ӳ�ʱ�䣨��д�ӳ�����ֱ�ӹ�����
	e_fKnifeSlashRange,				// �������
	e_fKnifeSlashAngle,				// ����Ƕ�
	e_fKnifeStabResetTime,				// �ػ�����ʱ��
	e_fKnifeStabTime,				// �ػ��ӳ�ʱ�䣨��д�ӳ�����ֱ�ӹ�����
	e_fKnifeStabRange,				// �ػ�����
	e_fKnifeStabAngle,				// �ػ��Ƕ�
	e_fKnifeDrawTime,				// �ͳ�ʱ��
	e_fKnifeDamage,					// �˺�����
	e_fKnifeDamage2,				// �ػ��˺�����
	e_fKnifeMaxSpeed,				// �����ٶ�
	e_fKnifeKnockBack,				// ����
	e_fKnifeSoundVolume1,				// ��ǽ������С��0.0 <= ��ֵ <= 1.0��
	e_fKnifeSoundVolume2,				// ����������С��0.0 <= ��ֵ <= 1.0��
	e_fKnifeSoundVolume3,				// �ػ�������С��0.0 <= ��ֵ <= 1.0��
	e_fKnifeSoundVolume4,				// �������1��С��0.0 <= ��ֵ <= 1.0��
	e_fKnifeSoundVolume5,				// �������2��С��0.0 <= ��ֵ <= 1.0��
	e_fKnifeSlashAngleOffset,			// ����Ƕ��жϼ��������ֵ��5.0 <= ��� <= ����Ƕȣ�
	e_fKnifeStabAngleOffset,			// �ػ��Ƕ��жϼ��������ֵ��5.0 <= ��� <= �ػ��Ƕȣ�
	e_fKnifeSlashHeight,				// ����߶ȣ�����ֵ��1.0 <= �߶� <= 50.0��
	e_fKnifeStabHeight,				// �ػ��߶ȣ�����ֵ��1.0 <= �߶� <= 50.0��
	e_fKnifeSlashHeightOffset,			// ����߶��жϼ��������ֵ��5.0 <= ��� <= ����߶ȣ�
	e_fKnifeStabHeightOffset,			// �ػ��߶��жϼ��������ֵ��5.0 <= ��� <= �ػ��߶ȣ�
	MaxKnifeFloatData				// �������
}

enum
{
	wpn_iWeaponId = 0,			// ���ͣ�int		���ܣ�����ID��CSW_***��
	wpn_szWeaponList,			// ���ͣ�string		���ܣ�����SPR��weapon_***.txt��
	wpn_szKillSpr,				// ���ͣ�string		���ܣ�ɱ��SPR
	// ---------------------------------------------------------------------------------------
	// ���¼����޸�ʱע�⻺��
	// ---------------------------------------------------------------------------------------
	wpn_iExplodeSprId,			// ���ͣ�int	���ܣ���ըSPR��id
	wpn_szPModel,				// ���ͣ�string	���ܣ�Pģ��
	wpn_szVModel,				// ���ͣ�string	���ܣ�Vģ��
	wpn_szWModel,				// ���ͣ�string	���ܣ�Wģ��
	wpn_szSightModel,			// ���ͣ�string	���ܣ�����ģ��
	wpn_szSound1,				// ���ͣ�string	���ܣ���ǹ����1����ը�����������ͳ�����
	wpn_szSound2,				// ���ͣ�string	���ܣ���ǹ����2�����ӻ�ǽ����
	wpn_szSound3,				// ���ͣ�string	���ܣ����ӻ�������
	wpn_szSound4,				// ���ͣ�string	���ܣ������ػ�����
	wpn_szSound5,				// ���ͣ�string	���ܣ��������1����
	wpn_szSound6,				// ���ͣ�string	���ܣ��������2����
	// ---------------------------------------------------------------------------------------
	wpn_iReloadMode,			// ���ͣ�int	���ܣ�����ģʽ
	wpn_iSightMode,				// ���ͣ�int	���ܣ���������
	wpn_iClip,				// ���ͣ�int	���ܣ������ӵ�
	wpn_iBPAmmo,				// ���ͣ�int	���ܣ������ӵ�
	wpn_fDamage,				// ���ͣ�float	���ܣ��˺�����
	wpn_fStabDamage,			// ���ͣ�float	���ܣ������ػ��˺�����
	wpn_fFireSpeed,				// ���ͣ�float	���ܣ�����
	wpn_fAimFireSpeed,			// ���ͣ�float	���ܣ���������
	wpn_fSilencedFireSpeed,			// ���ͣ�float	���ܣ���������
	wpn_fRecoil,				// ���ͣ�float	���ܣ�����
	wpn_fAimRecoil,				// ���ͣ�float	���ܣ���������
	wpn_fSilencedRecoil,			// ���ͣ�float	���ܣ���������
	wpn_fAccuracy,				// ���ͣ�float	���ܣ���ȷ��
	wpn_fAimAccuracy,			// ���ͣ�float	���ܣ�������ȷ��
	wpn_fSilencedAccuracy,			// ���ͣ�float	���ܣ�������ȷ��
	wpn_fSightDistance,			// ���ͣ�float	���ܣ���ͷ����
	wpn_fSightFramerate,			// ���ͣ�float	���ܣ���ͷ�仯����
	wpn_fSightOpenTime,			// ���ͣ�float	���ܣ������ٶ�
	wpn_fSightCloseTime,			// ���ͣ�float	���ܣ��ر��ٶ�
	wpn_fReloadTime,			// ���ͣ�float	���ܣ�����ʱ��
	wpn_fDrawTime,				// ���ͣ�float	���ܣ��ͳ�ʱ��
	wpn_fDetachSilencerTime,		// ���ͣ�float	���ܣ����������ʱ��
	wpn_fAttachSilencerTime,		// ���ͣ�float	���ܣ���װ������ʱ��
	wpn_fSlashResetTime,			// ���ͣ�float	���ܣ��������ʱ��
	wpn_fSlashTime,				// ���ͣ�float	���ܣ�����ӳ�ʱ��
	wpn_fSlashRange,			// ���ͣ�float	���ܣ��������
	wpn_fSlashAngle,			// ���ͣ�float	���ܣ�����Ƕ�
	wpn_fStabResetTime,			// ���ͣ�float	���ܣ��ػ�����ʱ��
	wpn_fStabTime,				// ���ͣ�float	���ܣ��ػ��ӳ�ʱ��
	wpn_fStabRange,				// ���ͣ�float	���ܣ��ػ�����
	wpn_fStabAngle,				// ���ͣ�float	���ܣ��ػ��Ƕ�
	wpn_fExpTime,				// ���ͣ�float	���ܣ���ըʱ��
	wpn_fExpRange,				// ���ͣ�float	���ܣ���ը��Χ
	wpn_fMaxSpeed,				// ���ͣ�float	���ܣ���������ٶ�
	wpn_fAimMaxSpeed,			// ���ͣ�float	���ܣ�������������ٶ�
	wpn_fKnockBack,				// ���ͣ�float	���ܣ���������
	wpn_szCommand,				// ���ͣ�string	���ܣ���������
	wpn_iCost,				// ���ͣ�int	���ܣ��۸�
	wpn_iAmmoCost,				// ���ͣ�int	���ܣ��ӵ��۸�
	wpn_iTeam,				// ���ͣ�int	���ܣ��������
	wpn_iWModelBody,			// ���ͣ�int	���ܣ�Wģ�͵���ģ�����
	wpn_iAnimIdle,				// ���ͣ�int	���ܣ�������ֹ����
	wpn_iAnimReload,			// ���ͣ�int	���ܣ�������������
	wpn_iAnimDraw,				// ���ͣ�int	���ܣ������ͳ�����
	wpn_iAnimShoot1,			// ���ͣ�int	���ܣ��������1����
	wpn_iAnimShoot2,			// ���ͣ�int	���ܣ��������2����
	wpn_iAnimShoot3,			// ���ͣ�int	���ܣ��������3����
	wpn_iAnimStartReload,			// ���ͣ�int	���ܣ�������ʼ��������
	wpn_iAnimInsert,			// ���ͣ�int	���ܣ����������ӵ�����
	wpn_iAnimAfterReload,			// ���ͣ�int	���ܣ�����������������
	wpn_iAnimSightOpen,			// ���ͣ�int	���ܣ��������鶯��
	wpn_iAnimSightClose,			// ���ͣ�int	���ܣ��رջ��鶯��
	wpn_iAnimSilencedIdle,			// ���ͣ�int	���ܣ�����������ֹ����
	wpn_iAnimSilencedReload,		// ���ͣ�int	���ܣ�����������������
	wpn_iAnimSilencedDraw,			// ���ͣ�int	���ܣ����������ͳ�����
	wpn_iAnimSilencedShoot1,		// ���ͣ�int	���ܣ������������1����
	wpn_iAnimSilencedShoot2,		// ���ͣ�int	���ܣ������������2����
	wpn_iAnimSilencedShoot3,		// ���ͣ�int	���ܣ������������3����
	wpn_iAnimDetachSilencer,		// ���ͣ�int	���ܣ��������������
	wpn_iAnimAttachSilencer,		// ���ͣ�int	���ܣ���װ����������
	wpn_iKnifeAnimIdle,			// ���ͣ�int	���ܣ����Ӿ�ֹ����
	wpn_iKnifeAnimSlash1,			// ���ͣ�int	���ܣ��������1����
	wpn_iKnifeAnimSlash2,			// ���ͣ�int	���ܣ��������2����
	wpn_iKnifeAnimDraw,			// ���ͣ�int	���ܣ������ͳ�����
	wpn_iKnifeAnimStab,			// ���ͣ�int	���ܣ������ػ�����
	wpn_iKnifeAnimStabMiss,			// ���ͣ�int	���ܣ������ػ�miss����
	wpn_iKnifeAnimMidslash,			// ���ͣ�int	���ܣ������������
	wpn_iKnifeAnimMidslashMiss,		// ���ͣ�int	���ܣ��������miss����
	wpn_iKnifeAnimSlashBegin,		// ���ͣ�int	���ܣ���������ӳٶ���
	wpn_iKnifeAnimStabBegin,		// ���ͣ�int	���ܣ������ػ��ӳٶ���
	// ---------------------------------------------------------------------------------------
	// ������Щ�Ҳ�֪���ܲ������ϡ������ǻ���Ū�˼���
	// ---------------------------------------------------------------------------------------
	wpn_iUser1,				// ���ͣ�int	���ܣ�������������
	wpn_iUser2,				// ���ͣ�int	���ܣ�������������
	wpn_iUser3,				// ���ͣ�int	���ܣ�������������
	wpn_iUser4,				// ���ͣ�int	���ܣ�������������
	wpn_fUser1,				// ���ͣ�float	���ܣ����渡��������
	wpn_fUser2,				// ���ͣ�float	���ܣ����渡��������
	wpn_fUser3,				// ���ͣ�float	���ܣ����渡��������
	wpn_fUser4,				// ���ͣ�float	���ܣ����渡��������
	wpn_szUser1,				// ���ͣ�string	���ܣ������ַ�������
	wpn_szUser2,				// ���ͣ�string	���ܣ������ַ�������
	wpn_szUser3,				// ���ͣ�string	���ܣ������ַ�������
	wpn_szUser4,				// ���ͣ�string	���ܣ������ַ�������
	// ---------------------------------------------------------------------------------------
	wpn_iAmount,				// ���ͣ�int	���ܣ���ǰע��������������ò������ɸ��� ���id��������Ų��������ԣ�
	wpn_ID,					// ���ͣ�int	���ܣ���ȡ��ǰ��������ţ��ò������ɸ��� ���id��ʵ��id�������ģ��ע�������������ģ����ţ����id������slot��SLOT_WEAPON��SLOT_KNIFE��SLOT_GRENADE��
	wpn_iBloodColor,			// ���ͣ�int	���ܣ�ѪҺ��ɫ�����id��������Ų��������ԣ�
	wpn_AllTeamBuy,				// ���ͣ�int	���ܣ��������ж��鹺�����id��������Ų��������ԣ�
	wpn_SetBuy,				// ���ͣ�int	���ܣ������������ã�������Ų��������ԣ�һ�����֣�BUY_NORMALLY��BUY_CANNOT��BUY_EVERYWHERE���ֱ����������򣬲��ܹ����κε�������
	wpn_iUserSight,				// ���ͣ�int	���ܣ���ȡ��ҵĻ���״̬���ò��������޸ģ�������Ų��������ԣ�
	wpn_iBotMoney,				// ���ͣ�int	���ܣ���ȡ���޸�BOT�Ľ�Ǯ��������Ų��������ԣ�
	// ---------------------------------------------------------------------------------------
	// CSSTE�������ӵ�
	// ---------------------------------------------------------------------------------------
	wpn_iGameWeaponBPAmmo,			// ���ͣ�int	���ܣ�ԭ�����������󱸵�ҩ���������������������CSW_*��
	wpn_fDamagePoint,			// ���ͣ�float	���ܣ������ߵ��˺�������������Ų��������ԣ�
	wpn_fKnockBackPoint,			// ���ͣ�float	���ܣ��ܺ��ߵĻ��˱�����������Ų��������ԣ�
	wpn_iCurWeaponBPAmmo,			// ���ͣ�int	���ܣ����ӵ������ĵ�ǰ�󱳵�ҩ��
	wpn_iGameCurWeaponBPAmmo,		// ���ͣ�int	���ܣ�ԭ�������ĵ�ǰ�󱳵�ҩ���������������������CSW_*��
	wpn_iUserMoney,				// ���ͣ�int	���ܣ���ҵ�ǰ�Ľ�Ǯ����ȡʱ��������Ų��������ԣ�����ʱ��������Ų���Ϊ1����ʾ�����˶���Ǯ��Ϊ0ʱ����ʾ�����˶���Ǯ��
	wpn_iMaxMoney,				// ���ͣ�int	���ܣ�����Ǯ�������id��������Ų��������ԣ�
	wpn_fDamageVictimPoint,			// ���ͣ�float	���ܣ��ܺ��ߵ��˺�������������Ų��������ԣ�
	wpn_iAttackEntity,			// ���ͣ�int	���ܣ��˺���ʵ��id��������ʹ�ã����û����bug��
	wpn_iHitGroup,				// ���ͣ�int	���ܣ��������˺�����λ�ã�������WPN_ExecuteAttack�����˺�ʱ���ò���ֻ�ܱ��޸ģ��޷�����ȡ��
	// ---------------------------------------------------------------------------------------
	wpn_fFireSoundVolume,			// ���ͣ�float	���ܣ���ǹ��������С�����ױ�ը��������С��ȡֵ��0.0 <= ��ֵ <= 1.0��
	wpn_fSilenceFireSoundVolume,		// ���ͣ�float	���ܣ���������״̬�¿�ǹ������С��ȡֵ��0.0 <= ��ֵ <= 1.0��
	wpn_fKnifeSoundVolume1,			// ���ͣ�float	���ܣ���ǽ������С��0.0 <= ��ֵ <= 1.0��
	wpn_fKnifeSoundVolume2,			// ���ͣ�float	���ܣ�����������С��0.0 <= ��ֵ <= 1.0��
	wpn_fKnifeSoundVolume3,			// ���ͣ�float	���ܣ��ػ�������С��0.0 <= ��ֵ <= 1.0��
	wpn_fKnifeSoundVolume4,			// ���ͣ�float	���ܣ��������1��С��0.0 <= ��ֵ <= 1.0��
	wpn_fKnifeSoundVolume5,			// ���ͣ�float	���ܣ��������2��С��0.0 <= ��ֵ <= 1.0��
	wpn_fShotgunStartReloadTime,		// ���ͣ�float	���ܣ�ɢ����ʼ������ʱ��
	wpn_fShotgunAfterReloadTime,		// ���ͣ�float	���ܣ�ɢ������������ʱ��
	wpn_fKnifeSlashAngleOffset,		// ���ͣ�float	���ܣ�����Ƕ��жϼ��������ֵ��5.0 <= ��� <= ����Ƕȣ�
	wpn_fKnifeStabAngleOffset,		// ���ͣ�float	���ܣ��ػ��Ƕ��жϼ��������ֵ��5.0 <= ��� <= �ػ��Ƕȣ�
	wpn_fKnifeSlashHeight,			// ���ͣ�float	���ܣ�����߶ȣ�����ֵ��1.0 <= �߶� <= 50.0��
	wpn_fKnifeStabHeight,			// ���ͣ�float	���ܣ��ػ��߶ȣ�����ֵ��1.0 <= �߶� <= 50.0��
	wpn_fKnifeSlashHeightOffset,		// ���ͣ�float	���ܣ�����߶��жϼ��������ֵ��5.0 <= ��� <= ����߶ȣ�
	wpn_fKnifeStabHeightOffset,		// ���ͣ�float	���ܣ��ػ��߶��жϼ��������ֵ��5.0 <= ��� <= �ػ��߶ȣ�
}