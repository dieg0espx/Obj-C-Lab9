//
//  prices.m
//  Foodtruck
//
//  Created by Diego Espinosa on 2020-04-08.
//  Copyright © 2020 Lighthouse Labs. All rights reserved.
//

#import "prices.h"

@implementation prices

- (double)foodTruck:(FoodTruck *)truck priceForFood:(NSString *)food {
        if([food isEqualToString:@"bao"]){
        return 15.3;
    }else if([food isEqualToString:@"shortbread"]){
        return 9.99;
    }else{
        return 0;
    }
}

@end
