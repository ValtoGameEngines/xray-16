#include "BastArtifact.h"
#include "BlackDrops.h"
#include "BlackGraviArtifact.h"
#include "DummyArtifact.h"
#include "ElectricBall.h"
#include "FadedBall.h"
#include "GalantineArtifact.h"
#include "GraviArtifact.h"
#include "MercuryBall.h"
#include "Needles.h"
#include "RustyHairArtifact.h"
#include "ThornArtifact.h"
#include "ZudaArtifact.h"
#include "artefact.h"
#include "cta_game_artefact.h"
#include "pch_script.h"
#include "xrScriptEngine/ScriptExporter.hpp"

using namespace luabind;

SCRIPT_EXPORT(CArtefact, (CGameObject), {
    module(luaState)[class_<CArtefact, CGameObject>("CArtefact")
                         .def(constructor<>())
                         .def("FollowByPath", &CArtefact::FollowByPath)
                         .def("SwitchVisibility", &CArtefact::SwitchVisibility)
                         .def("GetAfRank", &CArtefact::GetAfRank),

        class_<CMercuryBall, CArtefact>("CMercuryBall").def(constructor<>()),
        class_<CBlackDrops, CArtefact>("CBlackDrops").def(constructor<>()),
        class_<CBlackGraviArtefact, CArtefact>("CBlackGraviArtefact").def(constructor<>()),
        class_<CBastArtefact, CArtefact>("CBastArtefact").def(constructor<>()),
        class_<CDummyArtefact, CArtefact>("CDummyArtefact").def(constructor<>()),
        class_<CZudaArtefact, CArtefact>("CZudaArtefact").def(constructor<>()),
        class_<CThornArtefact, CArtefact>("CThornArtefact").def(constructor<>()),
        class_<CFadedBall, CArtefact>("CFadedBall").def(constructor<>()),
        class_<CElectricBall, CArtefact>("CElectricBall").def(constructor<>()),
        class_<CRustyHairArtefact, CArtefact>("CRustyHairArtefact").def(constructor<>()),
        class_<CGalantineArtefact, CArtefact>("CGalantineArtefact").def(constructor<>()),
        class_<CGraviArtefact, CArtefact>("CGraviArtefact").def(constructor<>())];
});
