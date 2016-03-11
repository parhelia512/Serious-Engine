/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"

#include "StdH.h"

#include <EntitiesMP/ModelDestruction.h>
#include <EntitiesMP/ModelDestruction_tables.h>
CEntityEvent *ERangeModelDestruction::MakeCopy(void) { CEntityEvent *peeCopy = new ERangeModelDestruction(*this); return peeCopy;}
ERangeModelDestruction::ERangeModelDestruction() : CEntityEvent(EVENTCODE_ERangeModelDestruction) {;
};
void CModelDestruction::SetDefaultProperties(void) {
  m_strName = "ModelDestruction";
  m_strDescription = "";
  m_penModel0 = NULL;
  m_penModel1 = NULL;
  m_penModel2 = NULL;
  m_penModel3 = NULL;
  m_penModel4 = NULL;
  m_fHealth = 50.0f;
  m_ddtDebris = DDT_STONE ;
  m_ctDebris = 3;
  m_fDebrisSize = 1.0f;
  m_eibtBodyType = EIBT_ROCK ;
  m_sptType = SPT_NONE ;
  m_fParticleSize = 1.0f;
  m_bRequireExplosion = FALSE ;
  m_fDebrisLaunchPower = 1.0f;
  m_dptParticles = DPT_NONE ;
  m_betStain = BET_NONE ;
  m_fLaunchCone = 45.0f;
  m_fRndRotH = 720.0f;
  m_fRndRotP = 720.0f;
  m_fRndRotB = 720.0f;
  m_fParticleLaunchPower = 1.0f;
  m_colParticles = COLOR(C_WHITE  | CT_OPAQUE );
  m_iStartAnim = -1;
  m_bDebrisImmaterialASAP = TRUE ;
  m_ctDustFall = 1;
  m_fMinDustFallHeightRatio = 0.1f;
  m_fMaxDustFallHeightRatio = 0.6f;
  m_fDustStretch = 1.0f;
  m_fDebrisDustRandom = 0.25f;
  m_fDebrisDustStretch = 1.0f;
  m_penShake = NULL;
  CEntity::SetDefaultProperties();
}
  
#line 87 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
void CModelDestruction::Precache(void) {
#line 88 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
PrecacheClass  (CLASS_BASIC_EFFECT  , BET_EXPLOSIONSTAIN );
#line 89 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
switch(m_ddtDebris ){
#line 90 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
case DDT_STONE : {
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
PrecacheModel  (MODEL_STONE );
#line 92 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
PrecacheTexture  (TEXTURE_STONE );
#line 93 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}break ;
#line 94 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
case DDT_WOOD : {
#line 95 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
PrecacheModel  (MODEL_WOOD );
#line 96 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
PrecacheTexture  (TEXTURE_WOOD );
#line 97 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}break ;
#line 98 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
case DDT_PALM : {
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
PrecacheModel  (MODEL_WOOD );
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
PrecacheTexture  (TEXTURE_WOOD );
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}break ;
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
  
#line 106 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CAnimData * CModelDestruction::GetAnimData(SLONG slPropertyOffset) 
#line 107 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 108 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(slPropertyOffset  == offsetof  (CModelDestruction  , m_iStartAnim ))
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CModelHolder2  * pmh  = GetModel  (0);
#line 111 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(pmh  != NULL )
#line 112 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
return pmh  -> GetModelObject  () -> GetData  ();
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 115 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
return CEntity  :: GetAnimData  (slPropertyOffset );
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
  
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
const CTString & CModelDestruction::GetDescription(void)const {
#line 120 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
INDEX ct  = GetModelsCount  ();
#line 121 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(ct  == 0){
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
((CTString &) m_strDescription ) . PrintF  ("(%g): no more" , m_fHealth );
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}else if(ct  == 1){
#line 124 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
((CTString &) m_strDescription ) . PrintF  ("(%g): %s" , m_fHealth  , m_penModel0  -> GetName  ());
#line 125 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}else if(TRUE ){
#line 126 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
((CTString &) m_strDescription ) . PrintF  ("(%g): %s,...(%d)" , m_fHealth  , m_penModel0  -> GetName  () , ct );
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
return m_strDescription ;
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
  
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
void CModelDestruction::CheckOneModelTarget(CEntityPointer & pen) 
#line 133 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 134 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(pen  != NULL  && ! IsOfClass  (pen  , "ModelHolder2")){
#line 135 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
WarningMessage  ("Model '%s' is not ModelHolder2!" , pen  -> GetName  ());
#line 136 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
pen  = NULL ;
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 138 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
  
#line 141 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
class CModelHolder2 * CModelDestruction::GetNextPhase(void) 
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 143 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
INDEX ct  = GetModelsCount  ();
#line 145 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(ct  == 0){
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
return NULL ;
#line 149 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}else {
#line 151 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
return GetModel  (IRnd  () % ct );
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 153 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
  
#line 156 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
INDEX CModelDestruction::GetModelsCount(void)const 
#line 157 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 159 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(m_penModel0  == NULL ){return 0;};
#line 160 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(m_penModel1  == NULL ){return 1;};
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(m_penModel2  == NULL ){return 2;};
#line 162 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(m_penModel3  == NULL ){return 3;};
#line 163 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(m_penModel4  == NULL ){return 4;};
#line 164 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
return 5;
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
  
#line 167 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
class CModelHolder2 * CModelDestruction::GetModel(INDEX iModel) 
#line 168 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 169 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
ASSERT  (iModel  <= GetModelsCount  ());
#line 170 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
iModel  = Clamp  (iModel  , INDEX (0) , GetModelsCount  ());
#line 171 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
return (CModelHolder2  *) & * (& m_penModel0 ) [ iModel  ];
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
  
#line 174 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
void CModelDestruction::SpawnDebris(CModelHolder2 * penmhDestroyed) 
#line 175 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 176 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOATaabbox3D box ;
#line 177 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
penmhDestroyed  -> GetBoundingBox  (box );
#line 178 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT fEntitySize  = box  . Size  () . MaxNorm  ();
#line 179 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
switch(m_ddtDebris ){
#line 180 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
case DDT_STONE : {
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Begin  (EIBT_ROCK  , DPT_NONE  , BET_NONE  , fEntitySize  , FLOAT3D (0 , 0 , 0) , FLOAT3D (0 , 0 , 0) , 1.0f , 0.0f);
#line 182 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
for(INDEX iDebris  = 0;iDebris  < m_ctDebris ;iDebris  ++){
#line 183 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_STONE  , TEXTURE_STONE  , 0 , 0 , 0 , IRnd  () % 4 , m_fDebrisSize  , 
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (FRnd  () * 0.8f + 0.1f , FRnd  () * 0.8f + 0.1f , FRnd  () * 0.8f + 0.1f));
#line 185 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}break ;
#line 187 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
case DDT_WOOD : 
#line 188 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 189 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Begin  (EIBT_WOOD  , DPT_NONE  , BET_NONE  , fEntitySize  , FLOAT3D (0 , 0 , 0) , FLOAT3D (0 , 0 , 0) , 1.0f , 0.0f);
#line 190 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
for(INDEX iDebris  = 0;iDebris  < m_ctDebris ;iDebris  ++)
#line 191 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_WOOD  , TEXTURE_WOOD  , 0 , 0 , 0 , 0 , m_fDebrisSize  , 
#line 193 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (0.5f , 0.5f , 0.5f));
#line 194 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 195 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
break ;
#line 196 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
case DDT_CHILDREN_CUSTOM : 
#line 198 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 199 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Begin  (EIBT_WOOD  , DPT_NONE  , BET_NONE  , 1.0f , FLOAT3D (10 , 10 , 10) , FLOAT3D (0 , 0 , 0) , 5.0f , 2.0f);
#line 201 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , iten )
#line 202 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 203 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(IsOfClass  (& * iten  , "ModelHolder2"))
#line 204 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 205 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CModelHolder2  & mhTemplate  = (CModelHolder2  &) * iten ;
#line 206 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(mhTemplate  . GetModelObject  () == NULL  || penmhDestroyed  -> GetModelObject  () == NULL )
#line 207 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 208 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
continue ;
#line 209 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 210 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CModelObject & moNew  = * mhTemplate  . GetModelObject  ();
#line 211 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CModelObject & moOld  = * penmhDestroyed  -> GetModelObject  ();
#line 212 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CPlacement3D plRel  = mhTemplate  . GetPlacement  ();
#line 213 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
plRel  . AbsoluteToRelative  (this  -> GetPlacement  ());
#line 214 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CPlacement3D plLaunch  = plRel ;
#line 215 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D vStretch  = moOld  . mo_Stretch ;
#line 216 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
plLaunch  . pl_PositionVector  (1) = plLaunch  . pl_PositionVector  (1) * vStretch  (1);
#line 217 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
plLaunch  . pl_PositionVector  (2) = plLaunch  . pl_PositionVector  (2) * vStretch  (2);
#line 218 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
plLaunch  . pl_PositionVector  (3) = plLaunch  . pl_PositionVector  (3) * vStretch  (3);
#line 219 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
plLaunch  . RelativeToAbsolute  (penmhDestroyed  -> GetPlacement  ());
#line 220 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
ANGLE3D angLaunch  = ANGLE3D (FRnd  () * 360.0f , 90.0f + m_fLaunchCone  * (FRnd  () - 0.5f) , 0);
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D vLaunchDir ;
#line 222 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D vStretchTemplate  = FLOAT3D (
#line 223 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
moOld  . mo_Stretch  (1) * moNew  . mo_Stretch  (1) , 
#line 224 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
moOld  . mo_Stretch  (2) * moNew  . mo_Stretch  (2) , 
#line 225 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
moOld  . mo_Stretch  (3) * moNew  . mo_Stretch  (3));
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
AnglesToDirectionVector  (angLaunch  , vLaunchDir );
#line 227 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
vLaunchDir  . Normalize  ();
#line 228 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
vLaunchDir  = vLaunchDir  * m_fDebrisLaunchPower ;
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
ANGLE3D angRotSpeed  = ANGLE3D (m_fRndRotH  * 2.0f * (FRnd  () - 0.5f) , m_fRndRotP  * (FRnd  () - 0.5f) , m_fRndRotB  * (FRnd  () - 0.5f));
#line 231 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT fDustSize  = 0.0f;
#line 232 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(FRnd  () < m_fDebrisDustRandom )
#line 233 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 234 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
fDustSize  = m_fDebrisDustStretch ;
#line 235 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 237 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn_Template  (m_eibtBodyType  , m_dptParticles  , m_betStain  , 
#line 238 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
penmhDestroyed  , this  , & mhTemplate  , vStretchTemplate  , mhTemplate  . m_fStretchAll  , plLaunch  , 
#line 239 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
vLaunchDir  , angRotSpeed  , m_bDebrisImmaterialASAP  , fDustSize  , penmhDestroyed  -> m_colBurning );
#line 240 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 241 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(IsOfClass  (& * iten  , "SoundHolder"))
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 243 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CSoundHolder  & ensh  = (CSoundHolder  &) * iten ;
#line 245 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CEntity  * penNewSH  = GetWorld  () -> CopyEntityInWorld  (ensh  , penmhDestroyed  -> GetPlacement  ());
#line 246 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
penNewSH  -> SetParent  (NULL );
#line 247 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
penNewSH  -> SendEvent  (EStart  ());
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 249 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 250 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
break ;
#line 251 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 252 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
case DDT_PALM : {
#line 253 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Begin  (EIBT_WOOD  , DPT_NONE  , BET_NONE  , fEntitySize  , penmhDestroyed  -> m_vDamage  * 0.3f , FLOAT3D (0 , 0 , 0) , 1.0f , 0.0f);
#line 254 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_WOOD  , TEXTURE_WOOD  , 0 , 0 , 0 , 0 , m_fDebrisSize  , 
#line 255 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (0.5f , 0.2f , 0.5f));
#line 256 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_WOOD  , TEXTURE_WOOD  , 0 , 0 , 0 , 1 , m_fDebrisSize  , 
#line 257 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (0.5f , 0.3f , 0.5f));
#line 258 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_WOOD  , TEXTURE_WOOD  , 0 , 0 , 0 , 2 , m_fDebrisSize  , 
#line 259 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (0.5f , 0.4f , 0.5f));
#line 260 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_WOOD  , TEXTURE_WOOD  , 0 , 0 , 0 , 3 , m_fDebrisSize  , 
#line 261 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (0.5f , 0.5f , 0.5f));
#line 262 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_WOOD  , TEXTURE_WOOD  , 0 , 0 , 0 , 1 , m_fDebrisSize  , 
#line 263 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (0.5f , 0.6f , 0.5f));
#line 264 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_WOOD  , TEXTURE_WOOD  , 0 , 0 , 0 , 2 , m_fDebrisSize  , 
#line 265 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (0.5f , 0.8f , 0.5f));
#line 266 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Debris_Spawn  (penmhDestroyed  , this  , MODEL_WOOD  , TEXTURE_WOOD  , 0 , 0 , 0 , 1 , m_fDebrisSize  , 
#line 267 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT3D (0.5f , 0.9f , 0.5f));
#line 268 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}break ;
#line 269 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
default  :{}break ;
#line 270 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
};
#line 272 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
if(m_ctDustFall  > 0)
#line 273 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 274 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT fHeight  = box  . Size  () (2);
#line 275 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT fMinHeight  = fHeight  * m_fMinDustFallHeightRatio ;
#line 276 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT fMaxHeight  = fHeight  * m_fMaxDustFallHeightRatio ;
#line 277 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT fHeightSteep  = (fMaxHeight  - fMinHeight ) / m_ctDustFall ;
#line 278 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
for(INDEX iDust  = 0;iDust  < m_ctDustFall ;iDust  ++)
#line 279 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
{
#line 280 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
FLOAT fY  = fMinHeight  + iDust  * fHeightSteep ;
#line 281 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CPlacement3D plDust  = penmhDestroyed  -> GetPlacement  ();
#line 282 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
plDust  . pl_PositionVector  = plDust  . pl_PositionVector  + FLOAT3D (0 , fY  , 0);
#line 284 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
ESpawnEffect  ese ;
#line 285 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
ese  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 286 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
ese  . vStretch  = FLOAT3D (m_fDustStretch  , m_fDustStretch  , m_fDustStretch );
#line 287 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
ese  . vNormal  = FLOAT3D (0 , 1 , 0);
#line 288 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
ese  . betType  = BET_DUST_FALL ;
#line 289 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CEntityPointer penFX  = CreateEntity  (plDust  , CLASS_BASIC_EFFECT );
#line 290 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
penFX  -> Initialize  (ese );
#line 291 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 292 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
#line 293 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
}
BOOL CModelDestruction::
#line 296 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CModelDestruction_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CModelDestruction::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 299 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CheckOneModelTarget  (m_penModel0 );
#line 300 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CheckOneModelTarget  (m_penModel1 );
#line 301 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CheckOneModelTarget  (m_penModel2 );
#line 302 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CheckOneModelTarget  (m_penModel3 );
#line 303 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
CheckOneModelTarget  (m_penModel4 );
#line 305 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
InitAsEditorModel  ();
#line 306 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 307 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 310 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
SetModel  (MODEL_MODELDESTRUCTION );
#line 311 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
SetModelMainTexture  (TEXTURE_MODELDESTRUCTION );
#line 313 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
Return(STATE_CURRENT,EVoid());
#line 313 "D:/SE1_GPL/Sources/EntitiesMP/ModelDestruction.es"
return TRUE; ASSERT(FALSE); return TRUE;};