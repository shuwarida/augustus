#ifndef BUILDING_H
#define BUILDING_H

void Building_updateHighestIds();

void Building_clearList();
int Building_create(int type, int x, int y);
void Building_delete(int buildingId);
void Building_deleteData(int buildingId);

int Building_getMainBuildingId(int buildingId);

int Building_collapseFirstOfType(int buildingType);
void Building_collapseLastPlaced();
void Building_collapse(int buildingId, int hasPlague);
void Building_collapseLinked(int buildingId, int callCollapse);

void Building_setDesirability();

void BuildingStorage_clearList();
int BuildingStorage_create();
void BuildingStorage_resetBuildingIds();


int Building_Market_getMaxFoodStock(int buildingId);
int Building_Market_getMaxGoodsStock(int buildingId);

int Building_Dock_getNumIdleDockers(int buildingId);

#endif
