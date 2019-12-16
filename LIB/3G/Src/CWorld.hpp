#ifndef CWORLD_H
#define CWORLD_H

#include "d3dx9.h"
#include "CWorldObject.hpp"
#include "CCoordSystem.hpp"
#include "CCamera.hpp"
#include "CVertexBuffer.hpp"

// world
class CWorld : public CWorldObject
{
    CCamera *_ccamera;  // current camera

    CWorldObject *_list;

public:

    CWorld(CCoordSystem * cs):
    CWorldObject(cs)
    {
    }

    virtual void Render(void)
    {
    //SetTransform

    }
    
    void Add(CWorldObject *wo)
    {
        _list->ListAdd(wo);

    }

    void SetCam(CCamera *cam)
    {
        _ccamera = cam;

    }

};


#endif