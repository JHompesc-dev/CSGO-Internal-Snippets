        auto record = &mexico::records[mRenderInfo.entityIndex];
				if (record && record->size() && mexico::valid(record->front().simulationTime)) {
					applyChams(1, 0.87f, 0.32f, 0.87f, 0.5f, false, entity->health());
          
          //draw for every tick..............
					for (int x = 0; x < record->size(); x++) {
						hooks.modelRender.callOriginal<void, 21>(ctx, state, std::cref(mRenderInfo), record->at(x).matrix);
					}
				}
