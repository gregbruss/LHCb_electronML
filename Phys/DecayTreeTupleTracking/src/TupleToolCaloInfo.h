/*****************************************************************************\
* (c) Copyright 2010-2019 CERN for the benefit of the LHCb Collaboration      *
*                                                                             *
* This software is distributed under the terms of the GNU General Public      *
* Licence version 3 (GPL Version 3), copied verbatim in the file "COPYING".   *
*                                                                             *
* In applying this licence, CERN does not waive the privileges and immunities *
* granted to it by virtue of its status as an Intergovernmental Organization  *
* or submit itself to any jurisdiction.                                       *
\*****************************************************************************/
#ifndef DecayTreeTupleTracking_TupleToolCaloInfo_H
#define DecayTreeTupleTracking_TupleToolCaloInfo_H 1

// Include files
// from Gaudi
#include "DecayTreeTupleBase/TupleToolBase.h"
#include "GaudiKernel/ToolHandle.h"
#include "Kernel/IParticleTupleTool.h" // Interface
#include "LHCbMath/ValueWithError.h"
#include "CaloDet/DeCalorimeter.h"
#include "Event/CaloCluster.h"

/** @class TupleToolCaloInfo TupleToolCaloInfo.h
 *  \brief TupleTool to calculate ECAL deposits around the track
 *
 *  @author Jacco de Vries
 *  @date   2019-11-07
 */

// Forward declarations
class ITrackExtrapolator;

class TupleToolCaloInfo : public TupleToolBase, virtual public IParticleTupleTool {

public:
  /// Standard constructor
  TupleToolCaloInfo( const std::string& type, const std::string& name, const IInterface* parent );

  virtual ~TupleToolCaloInfo(); ///< Destructor

  StatusCode initialize() override;

public:
  StatusCode fill( const LHCb::Particle*, const LHCb::Particle*, const std::string&, Tuples::Tuple& ) override;

private:
  DeCalorimeter* m_calo;  


};

#endif // DecayTreeTupleTracking_TupleToolCaloInfo_H
