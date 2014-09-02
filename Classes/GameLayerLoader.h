//
//  GameLayerLoader.h
//  NyanDash
//
//  Created by 深井隆史 on 2014/08/26.
//
//

#ifndef __NyanDash__GameLayerLoader__
#define __NyanDash__GameLayerLoader__

#include "GameLayer.h"

class GameLayerLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(GameLayerLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(GameLayer);
    
};

#endif /* defined(__NyanDash__GameLayerLoader__) */
