#include "public/iholylib.h"
#include "module.h"
#include "util.h"
#include "plugin.h"
#include "public/iholyutil.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

class CHolyUtil : public IHolyUtil
{
public:
	virtual IVEngineServer* GetEngineServer()
	{
		return Util::engineserver;
	}

	virtual IServerGameClients* GetServerGameClients()
	{
		return Util::servergameclients;
	}

	virtual IServerGameEnts* GetServerGameEnts()
	{
		return Util::servergameents;
	}

	virtual IServer* GetGameServer()
	{
		return Util::server;
	}

	virtual CGlobalEntityList* GetGlobalEntityList()
	{
		return Util::entitylist;
	}

	virtual CUserMessages* GetUserMessages()
	{
		return Util::pUserMessages;
	}

	virtual IGameEventManager2* GetGameEventManager()
	{
		return Util::gameeventmanager;
	}

	virtual byte* GetCurrentCluster()
	{
		return Util::g_pCurrentCluster;
	}

public:
	virtual CBasePlayer* Get_Player(int iStackPos, bool bError)
	{
		return Util::Get_Player(iStackPos, bError);
	}

	virtual CBaseEntity* Get_Entity(int iStackPos, bool bError)
	{
		return Util::Get_Entity(iStackPos, bError);
	}

	virtual void Push_Entity(CBaseEntity* pEntity)
	{
		return Util::Push_Entity(pEntity);
	}

	virtual CBaseEntity* GetCBaseEntityFromEdict(edict_t* edict)
	{
		return Util::GetCBaseEntityFromEdict(edict);
	}

	virtual CBaseClient* GetClientByUserID(int userID)
	{
		return Util::GetClientByUserID(userID);
	}

	virtual CBaseClient* GetClientByPlayer(const CBasePlayer* ply)
	{
		return Util::GetClientByPlayer(ply);
	}

	virtual CBaseClient* GetClientByIndex(int playerSlot)
	{
		return Util::GetClientByIndex(playerSlot);
	}

	virtual std::vector<CBaseClient*> GetClients()
	{
		return Util::GetClients();
	}

	virtual CBasePlayer* GetPlayerByClient(CBaseClient* client)
	{
		return Util::GetPlayerByClient(client);
	}

	virtual bool CM_Vis(byte* cluster, int clusterSize, int cluserID, int type)
	{
		return Util::CM_Vis(cluster, clusterSize, cluserID, type);
	}
};

static CHolyUtil s_HolyUtil;
IHolyUtil* g_pHolyUtil = &s_HolyUtil;