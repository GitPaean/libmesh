// $Id$

// The libMesh Finite Element Library.
// Copyright (C) 2002-2008 Benjamin S. Kirk, John W. Peterson, Roy H. Stogner
  
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
  
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
  
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA



#ifndef __mesh_smoother_h__
#define __mesh_smoother_h__



// C++ Includes   -----------------------------------

// Local Includes -----------------------------------

// forward declarations
class UnstructuredMesh;


/**
 * This class provides the necessary interface for
 * mesh smoothing.  Concrete mesh smoothers will be
 * derived from this abstract base class.
 *
 * \author John W. Peterson
 * \date 2002-2007
 * \version $Revision$
 */


// ------------------------------------------------------------
// MeshSmoother class definition
class MeshSmoother
{
public:
  /**
   * Constructor.  Sets the mesh reference
   * in the protected data section of the class.
   */
  MeshSmoother(UnstructuredMesh& mesh) : _mesh(mesh) {}

  /**
   * Destructor.
   */
  virtual ~MeshSmoother() {}

  /**
   * Function which actually performs the smoothing operations.
   * In this abstract base class, this function does nothing.
   */
  virtual void smooth() = 0;
  
protected:

  UnstructuredMesh& _mesh;
  
};


#endif