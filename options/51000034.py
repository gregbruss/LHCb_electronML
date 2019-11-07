# file /build/jenkins-tests/workspace/nightly-builds/checkout/tmp/checkout/DBASE/Gen/DecFiles/v31r0/options/51000034.py generated: Fri, 05 Oct 2018 16:18:46
#
# Event Type: 51000000
#
# ASCII decay Descriptor: e- => ?
#
from Configurables import ParticleGun
from Configurables import MomentumRange
ParticleGun().addTool( MomentumRange )
from GaudiKernel import SystemOfUnits
ParticleGun().MomentumRange.MomentumMin = 33.8*SystemOfUnits.GeV
from GaudiKernel import SystemOfUnits
ParticleGun().MomentumRange.MomentumMax = 33.8*SystemOfUnits.GeV
ParticleGun().EventType = 51000034
ParticleGun().ParticleGunTool = "MomentumRange"
ParticleGun().NumberOfParticlesTool = "FlatNParticles"
ParticleGun().MomentumRange.PdgCodes = [ 11 ]
from Configurables import ToolSvc
from Configurables import EvtGenDecay
ToolSvc().addTool( EvtGenDecay )
ToolSvc().EvtGenDecay.UserDecayFile = "$DECFILESROOT/dkfiles/e-,fixP=CaloAcc.dec"
from Gaudi.Configuration import *
importOptions( "$DECFILESROOT/options/CaloAcceptance.py" )
