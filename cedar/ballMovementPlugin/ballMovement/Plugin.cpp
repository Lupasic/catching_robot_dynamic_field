/*
 * plugin.cpp
 *
 *  Created on: Jun 19, 2019
 *      Author: tekuejpp
 */

#include "Plugin.h"
#include "BallPosition.h"

#include <cedar/processing/ElementDeclaration.h>

void pluginDeclaration(cedar::aux::PluginDeclarationListPtr plugin)
{
	using cedar::proc::DataRole;
	using cedar::proc::ElementDeclaration;
	using cedar::proc::ElementDeclarationPtr;
	using cedar::proc::ElementDeclarationTemplate;

	cedar::proc::ElementDeclarationPtr ball_pos_decl
		(
				new cedar::proc::ElementDeclarationTemplate
				<
				BallPosition
				>
		(
				"Sources"
		)
		);

	plugin->add(ball_pos_decl);
}
