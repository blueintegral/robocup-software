
#pragma once

#include "../Play.hpp"
#include <gameplay/behaviors/Kick.hpp>
#include <gameplay/behaviors/PivotKick.hpp>
#include <gameplay/tactics/PassReceiver.hpp>
#include <gameplay/tactics/StablePass.hpp>

#include <gameplay/behaviors/positions/Fullback.hpp>

#include <gameplay/FieldEvaluator.hpp>


namespace Gameplay
{
	namespace Plays
	{
		
		class MightyPass: public Play {
			public:
				static void createConfiguration(Configuration *cfg);

				MightyPass(GameplayModule *gameplay);
				
				static float score(GameplayModule *gameplay);
				virtual bool run();
				
			protected:
				FieldEvaluator _fieldEval;
				//	FIXME: fullback? center?

				// std::map<OurRobot *, Behavior *> _behaviorsByFlexibleBot;


				
				

				Behaviors::Fullback _leftFullback, _rightFullback;



				static ConfigDouble *_planningHysterisis;
		};
	}
}
