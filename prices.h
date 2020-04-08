//
//  prices.h
//  Foodtruck
//
//  Created by Diego Espinosa on 2020-04-08.
//  Copyright © 2020 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FoodTruck.h"

@interface prices : NSObject <FoodTruckDelegate>;
- (double)foodTruck:(FoodTruck *)truck priceForFood:(NSString *)food;
@end


