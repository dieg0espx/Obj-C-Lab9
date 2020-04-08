//
//  Cook.h
//  Foodtruck
//
//  Created by Diego Espinosa on 2020-04-07.
//  Copyright © 2020 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FoodTruck.h"


@interface Cook : NSObject <FoodTruckDelegate>;
-(double)foodTruck:(FoodTruck*)truck priceForFood:(NSString *)food;
@end

