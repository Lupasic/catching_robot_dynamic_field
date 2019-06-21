/*
 * plugin.cpp
 *
 *  Created on: Jun 20, 2019
 *      Author: Daniil Burakov
 */

#include "Plugin.h"
#include "PredictionField.h"

#include <cedar/processing/ElementDeclaration.h>

void pluginDeclaration(cedar::aux::PluginDeclarationListPtr plugin)
{
	using cedar::proc::DataRole;
	using cedar::proc::ElementDeclaration;
	using cedar::proc::ElementDeclarationPtr;
	using cedar::proc::ElementDeclarationTemplate;

	cedar::proc::ElementDeclarationPtr pred_fld_decl
		(
				new cedar::proc::ElementDeclarationTemplate
				<
				PredictionField
				>
		(
				"Sources"
		)
		);

	plugin->add(pred_fld_decl);
}
