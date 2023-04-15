//
// binvox, a binary 3D mesh voxelizer
// Copyright (c) 2004-2007 by Patrick Min, patrick.n.min "at" gmail "dot" com
// 
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
// 
//
// $Id: MeshView.h,v 1.2 2007/01/19 13:22:40 min Exp min $
//

#ifndef __MeshView_h
#define __MeshView_h

#include "cc/ui/View.h"
#include "cc/ui/CameraList.h"
#include "cc/geom/Mesh.h"

class MeshControl;





class MeshView : public View
{

public:

  MeshView(Mesh *mesh_p);
  ~MeshView();

  void redraw();

  void draw_faces();
  
  
private:

  Mesh *mesh_p;
  
  
};  // MeshView class


#endif


